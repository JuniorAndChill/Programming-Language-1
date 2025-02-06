//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
    for (int i=3; i<1000; i=i+3)
        cout<<i<<endl;
}

//Alternate way is to set var as an input so you can
//change the limit as you go
int main ()
{
    int limit;
    cout<<"what is the limit?"; cin>>limit;
    for (int i=3; i<limit; i=i+3)
        cout<<i<<endl;
}