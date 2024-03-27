#include <iostream>
using namespace std;
char charswitch(char C){
   if((C<=90)&&(C>=65)) //checking if the character is already capital
   return C;
   else      // if its not then we will switch it
   C=C-32;  //turned it into capital
   return C;
}
int main()
{
 char C;
 cout<<"Please enter a character: ";
   cin>>C;
   cout<<charswitch(C);//calling the function and outputting what it returns
    return 0;
}
