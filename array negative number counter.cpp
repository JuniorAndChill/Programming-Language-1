//Read an array of ten elements and count how many negative values are stored
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

float negatives(int arr[10])
{
 int count=0;
 for (int i=0;i<10;i++)
    if (arr[i]<0)
        count++;
return count;    
}


int main()
{
    int arr[10]={1,-2,3,4,-5,6,7,8,9,20};
cout<<"The array has "<<negatives(arr)<<" negative numbers";
 
}