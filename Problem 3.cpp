#include <iostream>
using namespace std;
void pythagoreantriplets(int m,int n,int *pa,int *pb,int*pc){ //did this to pass by                                      //refrence because we can't return more than one value
    *pa=(m*m)-(n*n);
    *pb=2*m*n;
    *pc=(m*m)+(n*n);
}
int main(){
    int *pm,*pn;
    int m=5,n=3,a,b,c;
    int*pa,*pb,*pc;
    pa=&a;//made the pointers point to the adresses of the variables to change them in the function
    pb=&b;
    pc=&c;
    pythagoreantriplets(m,n,pa,pb,pc);//passed the values for m, n and the pointers to change their values in the function
    return 0;
}

