#include <iostream>
#include <cmath>
using namespace std;
struct point{
    int x,y,z;
};
int mindistance(point *a,int n){
    double dis,add,min=999999,index;
    for(int i=0;i<n;i++)
    {
        add=pow(a[i].x,2)+pow(a[i].y,2)+pow(a[i].z,2);
        add=sqrt(add);
        if (add<min)
        {
            min=add;
            index=i;
        }
    }
    
    return index;
}
int main() {
    point *a;
    int n;
    cout<<"Please enter the number of points you want to check: ";
    cin>>n;
    a=new point[n];
    for(int i=0;i<n;i++)
        {
            cout<<"X"<<i+1<<":";
            cin>>a[i].x;
            cout<<"Y"<<i+1<<":";
            cin>>a[i].y;
            cout<<"Z"<<i+1<<":";
            cin>>a[i].z;
        }
    cout<<"("<<a[mindistance(a,n)].x<<","<<a[mindistance(a,n)].y<<","<<a[mindistance(a,n)].z<<")";
    return 0;
}
