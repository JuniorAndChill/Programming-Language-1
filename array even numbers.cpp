//How many even numbers are in an array?
// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5];
    int count=0;
    for(int i=0;i<5;i++){
        cout<<"Give me a number ["<<i<<"]";cin>>arr[i];
        }    
    for (int i=0;i<5;i++){
        if (arr[i]%2==0)
        count++;
    }
    cout<<"There are "<<count<<" even numbers in the array.";
}