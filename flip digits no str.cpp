//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
    int num; int digit;
    cout<<"Input a number: ";cin>>num;
    do{
        digit = num%10;
        cout<<digit;
        num=num/10;   
    }
    while (num>0);
}