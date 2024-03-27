#include <iostream>
using namespace std;
void rarray (int *x,int n){
    srand(time(0));
    for(int i=0;i<n;i++)
    {
        x[i]=rand()%2;//the remainder will always be 0 or 1 when we divide by 2
    }
}
int main() {
    int *x;
    int n=10;//I set n with any  value just to check
    x=new int[n];
    rarray(x,n);
    for(int i=0;i<n;i++)
        cout<<x[i];
    return 0;
}
