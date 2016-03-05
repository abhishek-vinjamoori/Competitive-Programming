#include<stdio.h>
#include<stdlib.h>
typedef struct node node;
struct node{
	int val;
	struct node* next;
};
int vis[10001];
node* adj[10001];
int qu[10001];
void dfs(int v)
{
	if(vis[v-1]==1)
	{
		return;
	}  
	vis[v-1]=1;
	node* i;
	printf("%d ",v);
	for(i=adj[v-1];i!=NULL;i=i->next)
	{
		if(vis[(i->val)]==0)
		{
			dfs((i->val)+1);
		}
	}
}
void bfs(int i)
{
	int st=0;
	int end=0;
	qu[end++]=i;
	vis[i-1]=1;
	while(st<end)
	{
		int xx=qu[st++];
		printf("%d ",xx);
		node* tt;
		for(tt=adj[xx-1];tt!=NULL;tt=tt->next)
		{
			if(vis[tt->val]==0)
			{
				vis[tt->val]=1;
				qu[end++]=(tt->val)+1;
			}
		}
	}
} 
int main()
{
	int gr,gt;
	scanf("%d",&gr);
	gt=1;
	while(gr--)
	{
		int i,j,k,l,e,v_no,edge,n1,n2,v;
		scanf("%d",&v);
		for(i=0;i<v;i++)
		{
			adj[i]=NULL;
		}
		for(i=0;i<v;i++)
		{
			scanf("%d",&v_no);
			scanf("%d",&e);
			node* prev;
			while(e--)
			{
				scanf("%d",&edge);
				node* tmp=(node*)malloc(sizeof(node));
				tmp->val=edge-1;
				//	printf("%d ",tmp->val);
				tmp->next=NULL;
				if(adj[v_no-1]==NULL)
				{
					adj[v_no-1]=tmp;
					prev=tmp;
					continue;
				}
				prev->next=tmp;
				prev=tmp;
				//				adj[v_no]=insert(adj[v_no],edge);
			}
		}
		node* temp=adj[0];
	/*	while(temp!=NULL)
		{
			printf("%d ",temp->val);
			temp=temp->next;
		}   */
		scanf("%d%d",&n1,&n2);
		printf("graph %d\n",gt++);
		while(1)
		{
			if(n1==0&&n2==0)
			{
				break;
			}
			for(i=0;i<v;i++)
			{
				vis[i]=0;
			}
			if(n2==1)
			{
				bfs(n1);
			}
			else
			{
				dfs(n1);
			}
			printf("\n");
			scanf("%d%d",&n1,&n2);
		} 
	}
}
