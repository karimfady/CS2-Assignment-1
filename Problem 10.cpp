#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int maxLen(string infile){
   int max=0;
    string l;
    ifstream f;
    f.open(infile);
    while(!f.eof())
    {
        getline(f,l);
        if (l.length()>max)
            max=l.length();
    }
    return max;
}
int main() {
 
    return 0;
}
