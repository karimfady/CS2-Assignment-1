#include <iostream>
using namespace std;
void reverse(int *x,int n){
        int temp;
  for(int j=n;j>1;j--) //this loop exxcludes the shifted number from being shifted again because it is already reversed
  {
    for(int i=0;i<j-1;i++) //this loop is to shift the first number to be the last
    {
        temp=x[i];
        x[i]=x[i+1];
        x[i+1]=temp;
    }
  }
}

int main()
{
   int n;
   cout<<"Please enter size of the array: ";
    cin>>n;
    int *x=new int[n];
   for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
  reverse(x,n);
   for(int i=0;i<n;i++)
    {
        cout<<x[i];
    }
    return 0;
}

