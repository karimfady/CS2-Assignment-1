#include <iostream>
#include <fstream>
using namespace std;
//bool file_ordered(){
    
//}
int main() {
   bool flag=true;
    string l;
   char r;
    char z;
    char c;
    int n=0;
    ofstream o;
    o.open("File.txt");
    o<<"and because cause definetly english "<<endl;
    o<<"first giant house in jamaica";
    o.close();
    ifstream i;
    i.open("File.txt");
    i.get(r);
    for(int k=0;(!i.eof()||flag!=false);k++)
    {
        cout<<r<<":"<<z<<endl;
        i.get(c);
            if(c==' ')
            {
                i.get(z);
                if(z<r)
                {
                    cout<<r<<":"<<z<<endl;
                    r=z;
                }
                else
                    n=n+1;
                    flag=false;
        
           }
    }
    cout<<flag;
    return 0;
}
