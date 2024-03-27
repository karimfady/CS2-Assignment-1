#include <iostream>
using namespace std;
bool descendOrder(int *table,int n){
int z=0;
for(int i=0;i<n-1;i++)
{
if (table[i]>table[i+1])
z=z+1;
}
if (z==n-1)
return true;
else return false;
    
}

int main()
{
    int *table;
    int n;
    cout<<"Please enter the size of the array: ";
    cin>>n;
    table=new int[n];
    cout<<"Please enter the values in the array to check if descending or ascending: ";
    for(int i=0;i<n;i++)
    {
        cin>>table[i];
    }
    if(descendOrder(table,n))
    cout<<"They are descending";
    else cout<<"They are not descending";
return 0;
}

