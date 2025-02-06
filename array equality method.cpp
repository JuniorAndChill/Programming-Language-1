//See if two arrays are equal
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

bool equal(int arr[10], int arr2[10])
{
    for (int i=0; i<10;i++)
        if (arr[i]!=arr2[i])
            return false;
    return true;
}


int main()
{
    int arr[10]={1,2,-3,4,-5,-6,7,8,-9,-20};
    int arr2[10]={1,2,-3,4,-5,-6,7,8,-9,10};
    
if (equal(arr,arr2))
    cout<<"The arrays are equal";
else
    cout<<"The arrays are not equal";

}