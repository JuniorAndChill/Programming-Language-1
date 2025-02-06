//Find the largest numbers are in an array?
// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Give me a number ["<<i<<"]";cin>>arr[i];
        }
    int biggest=arr[0];
    for (int i=0;i<5;i++){
        if (arr[i]>biggest) //to change to lowest just flip the symbol
         biggest=arr[i];
    }
    cout<<biggest<<" is the largest number in the array.";
}