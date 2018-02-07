#include<iostream>
using namespace std;
int bs(int A[],int beg,int end,int ele)
{
      int mid=(beg+end)/2;
      if(A[mid]==ele)
      {
            return mid;
      }
      if(A[mid]>ele)
      {
            return bs(A,beg,mid-1,ele);
      }
      if(A[mid]<ele)
      {
            return bs(A,mid+1,end,ele);
      }
      if(beg>end)
            return -1;
}
int main()
{
      int N;
      cout<<"\nEnter number of elements";
      cin>>N;
      int A[N];
      for(int i=0;i<N;i++)
            cin>>A[i];
      int ele;
      cout<<"\nEnter element to be searched";
      cin>>ele;
      int ans=bs(A,0,N,ele);
      if(ans>=0)
      {
            cout<<"\nElement found at "<<ans;
      }
      else
      {
            cout<<"\nElement not found";
      }
}
