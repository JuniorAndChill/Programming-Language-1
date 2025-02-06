//fix this later on
// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int arr[5];
    float sum=0;
    for(int i=0;i<5;i++){
        cout<<"Give me a number ["<<i<<"]";cin>>arr[i];
        }    
    for(int i=0;i<5;i++){
        sum= sum+arr[i];
        sum=sum/5;
    }
cout<<"The average is "<<sum<<endl;
}