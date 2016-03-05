#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
typedef long long int ll;
ll count;
int st;
struct node{
	ll val;
	ll height;
	struct node* l;
	struct node* r;
};
node* rotateright(node*);
node* rotateleft(node*);
void print(node*,ll);
ll maximum(ll a,ll b)
{
	if(a<b)
	{
		return b;
	}
	else
	{
		return a;
	}
}
ll hite(node* a)
{
	if(a==NULL)
	{
		return 0;
	}
	else
	{
		return a->height;
	}
}
node* insert(node* root,ll dat)
{
	ll lh,rh,bal;
	if(root==NULL)
	{
		node* tmp=(node*)malloc(sizeof(node));
		tmp->val=dat;
		tmp->l=NULL;
		tmp->r=NULL;
		tmp->height=1;
		return tmp;
	}
	if(dat>root->val)
	{
		root->r=insert(root->r,dat);
	}
	else
	{
		root->l=insert(root->l,dat);
	}
	root->height=maximum(hite(root->l),hite(root->r))+1;
	lh=hite(root->l);
	rh=hite(root->r);
	bal=lh-rh;
	//	printf("%d\t%d\t%d\n",lh,rh,bal);
	if(bal<-1&&dat>root->r->val)
	{
		root=rotateleft(root);
	}
	else if(bal<-1&&dat<root->r->val)
	{
		root->r=rotateright(root->r);
		root=rotateleft(root);
	}
	else if(bal>1 && dat<root->l->val)
	{
		root=rotateright(root);
	}
	else if(bal>1&&dat>root->l->val)
	{
		root->l=rotateleft(root->l);
		root=rotateright(root);
	}
	return root;
}
node* rotateleft(node* root)
{
	node* tmp=root->r;
	node* wen=tmp->l;
	tmp->l=root;
	root->r=wen;
	root->height=maximum(hite(root->l),hite(root->r))+1;
	tmp->height=maximum(hite(tmp->l),hite(tmp->r))+1;
	return tmp;
}
node* rotateright(node* root)
{
	node* tmp=root->l;
	node* wen=tmp->r;
	tmp->r=root;
	root->l=wen;
	root->height=maximum(hite(root->l),hite(root->r))+1;
	tmp->height=maximum(hite(tmp->l),hite(tmp->r))+1;	
	return tmp;
}
int main()
{
	node* root=NULL;
	while(1)
	{
		char s[15];
		ll op;
		scanf("%s",s);
		if(s[0]=='Q')
		{
			break;
		}
		scanf("%Ld",&op);
		if(s[0]=='S')
		{
	//		printf("Setting %d\n",op);
			root=insert(root,op);
		//	print(root);
		}
		else if(s[0]=='C')
		{
		//	printf("Checking %d\n",op);
			int re=check(root,op);
			if(re)
			{
				printf("YES\n");
			}
			else
			{
				printf("NO\n");
			}
		}
		else if(s[0]=='H')
		{
			count=0;
			st=0;
		//	printf("HH %d\n",op);
			print(root,op);
			if(st==0)
			{
				printf("NONE\n");
			}
		}
		else
		{

		}
	}
	return 0;
}
void print(node* root,ll ch)
{
	if(root==NULL)
	{
		return;
	}
	print(root->l,ch);
	count++;
	if(count==ch)
	{
	st=1;
	printf("%Ld\n",root->val);
	}
	print(root->r,ch);
	return;
}
int check(node* root,ll ch)
{
	int tm;
	if(root==NULL)
	{
		return 0;
	}
	if(ch>root->val)
	{
		tm=check(root->r,ch);
	}
	else if(ch<root->val)
	{
		tm=check(root->l,ch);
	}
	else
	{
		return 1;
	}
}
