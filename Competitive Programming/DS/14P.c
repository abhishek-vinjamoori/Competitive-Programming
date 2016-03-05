#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
typedef long long int ll;
struct node{
	int ind;
	int val;
	struct node* next;
};
void push(node** head,ll i,ll data)
{
	node* tmp=(node*)malloc(sizeof(node));
	tmp->ind=i;
	tmp->val=data;
	tmp->next=*head;
	*head=tmp;
}
void pop(node** head)
{
	node* tmp=*head;
	*head=(*head)->next;
	free(tmp);
}
ll top(node* head)
{
	if(head!=NULL)
	{
		return head->ind;
	}
}
ll b[100100]={0};
ll c[100100]={0};
ll k,n;
void makepretopost(ll start,ll end,ll a[],ll size)
{
	if(size<1 )
	{
		return;
	}
	if(start>=0&&start<n)
	{
		//		printf("%Ld %Ld %Ld\n",k,start,a[start]);
		c[k--]=a[start];
	}
/*	if(b[start]==-1)
	{
		size=0;
	}
	else */
//	{
		size=end-b[start]+1;
		//		size=end-start+1;
//	}
	makepretopost(b[start],end,a,size);
/*	if(b[start]==-1)
	{
		size=end-start+2;
		makepretopost(start+1,end,a,size);
		return;
	} */
	size=b[start]-start-1;
	makepretopost(start+1,b[start]-1,a,size);
}
int main()
{
	int tes;
	scanf("%d",&tes);
	while(tes--)
	{
		ll stu,i;
		ll a[100100];
		node* head=NULL;
		scanf("%Ld",&n);
		k=n-1;
		for(i=0;i<n;i++)
		{
			scanf("%Ld",a+i);
			b[i]=0;
			c[i]=0;
		}
		for(i=0;i<=n-1;)
		{
			if(head==NULL || a[i]<=a[top(head)])
			{
				push(&head,i,a[i]);
				i++;
			}
			else
			{
				stu=top(head);
				pop(&head);
				b[stu]=i;
			}
		}
		while(head!=NULL)
		{
			stu=top(head);
			pop(&head);
			b[stu]=stu+1;
		}
/*		for(i=0;i<n;i++)
		{
			printf("%Ld ",b[i]);
		} */
		makepretopost(0,n-1,a,n);
		for(i=0;i<n;i++)
		{
			printf("%Ld\n",c[i]);
		}
		printf("\n");
	}
	return 0;
}
