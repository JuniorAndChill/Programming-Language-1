//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
int l; int w;
cout<<"Enter length: ";cin>>l;
cout<<"Enter width: ";cin>>w;
for(int row=1; row<= l; row++){
    for(int column=1; column<= w; column++){
        if ((row==1) || (row==l))
                cout<<"*";
        else
            if ((column ==1) || (column ==w))
                cout<<"*";
            else
                cout<<" ";}
    cout<<endl;
    }
}