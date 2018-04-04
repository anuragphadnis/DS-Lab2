#include<iostream>
using namespace std;
struct node
{
    int data;
    node*next;
}*f,*r,*tmp;
void insertf()
{
    node *n=new node();
    cout<<"\nEnter value";
    cin>>n->data;
    n->next=NULL;
    if(n==NULL)
    {
        cout<<"Overflow";
        return;
    }
    if(f==NULL)
    {
        f=n;
        r=n;
        f->next=r;
        r->next=f;
        return;
    }
    n->next=f;
    f=n;
	r->next=f;
}
void insertr()
{
    node *n=new node();
    cout<<"\nEnter value";
    cin>>n->data;
    n->next=NULL;
    if(n==NULL)
    {
        cout<<"\nOverflow";
        return;
    }
    if(r==NULL)
    {
    //    cout<<"r null hai";
        f=n;
        r=n;
        f->next=r;
        r->next=f;
        return;
    }
     r->next=n;
     r=n;
     r->next=f;

}
void delf()
{
    if(f==NULL)
    {
        cout<<"\nUnderflow";
        return;
    }
    tmp=f;
    f=f->next;
    r->next=f;
    delete tmp;
}
void delr()
{
    if(r==NULL)
    {
        cout<<"\nUnderflow";
        return;
    }
    tmp=f;
    while(tmp->next->next!=f)
    {
        tmp=tmp->next;
    }
    node *tmp2=r;
    r=tmp;
    tmp->next=f;
    delete tmp2;
}
void show()
{
    if(f==NULL)
    {
        cout<<"No element";
        return;
    }
    cout<<endl;
    node  *tmp;
    tmp=f;
    do
    {
        cout<<tmp->data<<" ";
        tmp=tmp->next;
    }while(tmp!=f);
    cout<<endl;
}
void insertn()
{
    node *n=new node();
    cout<<"\nEnter value";
    cin>>n->data;
    n->next=NULL;
    int N;
    cout<<"\nEnter location to insert";
    cin>>N;
    if(n==NULL)
    {
        cout<<"\nOverflow";
        return;
    }
    int i=0;
    tmp=f;
    while(i<N-1)
    {
        tmp=tmp->next;
        i++;
        if(tmp==NULL)
        {
            cout<<"No such index";
            return;
        }

    }
    n->next=tmp->next;
    tmp->next=n;
}
void deln()
{
    int N;
    cout<<"\nEnter location to delete";
    cin>>N;
    if(f==NULL)
    {
        cout<<"\nUnderflow";
        return;
    }
    int i=0;
    tmp=f;
    while(i<N-1)
    {
        tmp=tmp->next;
        i++;
        if(tmp==NULL)
        {
            cout<<"No such index";
            return;
        }

    }
    node *tmp2=tmp->next;
    tmp->next=tmp->next->next;
    delete tmp2;
}
int main()
{
    f=r=tmp=NULL;
    int ch=1;
    while(ch!=0)
    {
        cout<<"\nEnter choice\n1.Insert front\n2.Insert rear\n3.Delete front\n4.Delete rear\n5.Insert at N\n6.Delete at N\n7.Traverse\n0.Exit";
        cin>>ch;
        switch(ch)
        {
            case 1: insertf();break;
            case 2:insertr();break;
            case 3:delf();break;
            case 4:delr();break;
            case 5:insertn();break;
            case 6:deln();break;
            case 7:show();break;
        }

    }
}

