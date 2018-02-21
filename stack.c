#include<stdio.h>
#define max 100
void push(int data,int st[],int *top)
{
	if(*top==max-1)
	{
		printf("Overflow error");
		return;	
	}
	st[++(*top)]=data;
}
void pop(int st[],int *top)
{
	if(*top==-1)
	{
		printf("\nUnderflow error");
		return;		
	}
	top--;
}
void display(int st[],int top)
{
	if(top==-1)
	{
		printf("\nStack is empty");
		return;
	}
	int i;
	for(i=top;i>=0;i--)
		printf("%d ",st[i]);
	printf("\n");
}
int pal(int st[],int top)
{
	int st2[max],j=0,i;
	for(i=top;i>=0;i--)
	{
		st2[j]=st[i];
		j++;
	}
	int flag=1;
	for(i=top;i>=0;i--)
		if(st[i]!=st2[i])
			flag=0;
	return flag;
}
int main()
{
	int top=-1,inp=1;
	int A[max];
	while(inp!=0)
	{
		int flag;
		int data;
		printf("\n1.Push\n2.Pop\n3.Display\n4.Check for palindrome\n0.Exit");
		scanf("%d",&inp);
		switch(inp)
		{
			case 1:
				printf("\nEnter element to push");
				scanf("%d",&data);				
				push(data,A,&top);break;
			case 2:pop(A,&top);break;
			case 3:display(A,top);break;
			case 4:
				flag=pal(A,top);
				flag==0?printf("\nNot palindrome"):printf("\nPalindrome");
				break;
			case 0:break;
			default:printf("\nWrong input");
		}
	}
}
