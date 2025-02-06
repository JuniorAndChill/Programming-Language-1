// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main()
{
     int num; int bit; int arr[8]; int i=0;
    cout<<"Input a number: ";cin>>num;
    for(int i=0;i<8;i++){arr[i]=0;
    }
    do{
        bit = num%2;
        num=num/2;
        arr[i]=bit;
        cout<<arr[i]<<endl;
        i++;
    }
    while (num>0);
    for(int i=4;i>=0;i--){
    cout<<arr[i];
    }
}