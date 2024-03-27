#include <iostream>
using namespace std;
enum color
{
    black,white
};
bool colorCheck(color**A, color**B,int m,int n){
    bool flag; int z=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]==B[i][j])
                z=z+1;
        }
    }
    if(z==(m*n))
        flag=true;
    else flag=false;
   return flag;
}
int main() {
    int m,n,a,b;
    cout<<"Please enter the number of rows: ";
    cin>>n;
    cout<<"Please enter the number of coulmns: ";
    cin>>m;
    color **A;
    color **B;
    A=new color*[n];
    B=new color*[n];
    for(int i=0;i<n;i++)
    {
        A[i]=new color[m];
        B[i]=new color[m];
    }
    srand(time(0));
    for(int j=0;j<n;j++)//those loops were just to fill the color arrays with random                        //whites and blacks
    {
        for(int i=0;i<m;i++)
        {
            a=rand()%2;
            b=rand()%2;
            if(a==0)
                A[j][i]=black;
            else
                A[j][i]=white;
            if(b==0)
                B[j][i]=black;
            else
                B[j][i]=white;
        }
    }
    cout<<colorCheck(A,B,n,m);
  return 0;
}
