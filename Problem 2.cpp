#include <iostream>
using namespace std;
void sectohour(int s){
   int h=0,m=0;
   h=s/3600; //getting the hours
   s=s-(h*3600); //subtracting  the seconds we used to get the hours
   m=s/60; //getting the minutes from the remaining seconds after taking the hours
   s=s-(m*60); //subtracting the seconds we took for the minutes (now we only have the remaining s will be the remaining seconds)
   cout<<h<<":"<<m<<":"<<s;
}
int main()
{
 int s;
 cout<<"Please enter the number of seconds, maximum of 18000: ";
 cin>>s;
 for(int i=0;(s>=18000||s<0);i!=-999)//if the number of seconds is larger than 18000 or negative retry entering
 {                                   //the message keeps showing unless the user likes to exit or entered the number correctly
   cout<<"Number of seconds is larger than 18000 or negative please reenter, if you would like to exit please enter -999: ";
   cin>>s;
 }
    sectohour(s);
    return 0;
}

