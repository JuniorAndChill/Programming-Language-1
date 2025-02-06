/*this program shows a way to compare arrays to each other using a simple method

Daniel Critchlow*/
#include <iostream>
#include <ctime>
using namespace std;

bool equal(int arr[10], int arr2[10]) //set bool to have simple result checking
{
    for (int i=0; i<10;i++)//simple loop to access each array
        if (arr[i]!=arr2[i])//this directly compares the 2 arrays
            return false; //if they don't match returns false
    return true; //if they match return true
}

int main()
{
//since we set the conditions for the bool module above to be arrays, we have to set these up
//here. You can also setup another set of "for" loops to allow the user to enter them if needed
    int arr[10]={1,2,-3,4,-5,-6,7,8,-9,-20};
    int arr2[10]={1,2,-3,4,-5,-6,7,8,-9,10};

//we simply call the arrays in the equal method to find our results
if (equal(arr,arr2))
    cout<<"The arrays are equal";
else
    cout<<"The arrays are not equal";
}