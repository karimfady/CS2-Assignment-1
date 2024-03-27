#include <iostream>
#include <string>
using namespace std;
bool Unique(string S,string Sub){
    bool flag=true;char c,z;
   for(int i=0;i<S.length();i++)
   {
       if(Sub.at(0)==S.at(i))
       {
           for(int j=0;j<Sub.length();j++)
           {
               if(S.at(j+i)!=Sub.at(j))
               flag=0;
           }
        }
   }
   
       return flag;
   }
int main(){
    string S="robot",Sub="rob";
    cout<<Unique(S,Sub);
    
    return 0;
}
