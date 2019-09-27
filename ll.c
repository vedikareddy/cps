#include<stdio.h>
#include<stdlib.h>

struct ll
{
int data;
struct ll* next;
};
void pf(struct ll* n1);

int main()
{
	int n,m,i;
	struct ll* n1=NULL;
	struct ll* n2=NULL;
	struct ll* n3=NULL;
	struct ll* temp=NULL;
	struct ll* final=NULL;
	
	//P=(struct ll*)malloc(sizeof(struct ll));
	n1=(struct ll*)malloc(sizeof(struct ll));
	n2=(struct ll*)malloc(sizeof(struct ll));
	n3=(struct ll*)malloc(sizeof(struct ll));
	temp=(struct ll*)malloc(sizeof(struct ll));
	final=(struct ll*)malloc(sizeof(struct ll));
	n1->data=1;
	n1->next=n2;
	n2->data=2;
	n2->next=n3;
	n3->data=3;
	n3->next=NULL;
	printf("enter the option 1)insert in the beggining 2)insert at the end3)insert in between4)delete in the beggining5)delete at the end6)delete in between"); 
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		temp->data=0;
		temp->next=n1;
		n1=temp;
		pf(n1);
		break;
		case 2:
		final->data=0;
		temp=n1;
		while(temp->next!=NULL)
		{
		temp=temp->next;
			}
		temp->next=final;
		final->next=NULL;
		while(n1!=NULL)
		{
		printf("%d\n",n1->data);
		n1=n1->next;
		}
		break;
		case 3:
		printf("after how many nodes it has be inserted");
		scanf("%d",&m);
		temp=n1;
		for(i=0;i<m-1;i++)
		temp=temp->next;
		final->data=0;
		final->next=temp->next;
		temp->next=final;
		while(n1!=NULL)
		{
		printf("%d\n",n1->data);
		n1=n1->next;
		}
		break;
		case 4:
		temp=n1;
		n1=n1->next;
		free(temp);
		while(n1!=NULL)
		{
		printf("%d\n",n1->data);
		n1=n1->next;
		}
		break;
		case 5:
		temp=n1;
		while(temp->next!=NULL)
		{
		final=temp;
		temp=temp->next;}
		final->next=NULL;
		free(temp);
		while(n1!=NULL)
		{
		printf("%d\n",n1->data);
		n1=n1->next;
		}
		break;
		case 6:
		i=0;
		printf("enter the element to be deleted");
		scanf("%d",&m);
		temp=n1;
		final=n1;
		while(temp->next!=NULL&&temp->data!=m)
		{i++; 
		final=temp;
		temp=temp->next;}
		if(i==0)
		n1=n1->next;		
		else
		{final->next=temp->next;
		free(temp);}
		while(n1!=NULL)
		{
		printf("%d\n",n1->data);
		n1=n1->next;
		}
		break;
				
		
		
	}
}
void pf(struct ll* n1)
{       
	struct ll* q;
	q=n1;
	//p=(struct ll*)malloc(sizeof(struct ll));
	if(q!=NULL)
	{
	printf("%d",q->data);
	q=q->next;
	pf(q);}
}
