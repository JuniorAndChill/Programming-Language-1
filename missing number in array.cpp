//Given an array of size n, read n-1 numbers in random order and determine which one is missing
//Example:1,2,4,6,3,7,8 is missing 5
//Daniel Critchlow
#include <iostream>
using namespace std;

int main()
{
    int num[10]={2,10,3,6,5,8,1,4,9};
    int check= 0;int i;
do{
check++;
for(i=0;i<=10;i++){
    if(num[i]==check)
           break;
    }
}
while(i<10);
cout<<check<<" is the missing number";
}