//Calulate the average of 5 numbers in an array
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;


float calcAvg(int arr[5])
{
    int sum=0; 
    float avg=0;
    for(int i =0;i<5; i++)
        sum=sum+arr[i];
    avg=sum/5.0;
    return avg;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    
cout<<"The average of all the elements in an array is "<<calcAvg(arr);
   
}