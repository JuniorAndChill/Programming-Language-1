//Do a program that counts the odd numbers in an array
//Daniel Critchlow
#include <iostream>
#include <ctime>
using namespace std;

int odds(int arr[10])
{
    int count=0;

    for(int i=0;i<10;i++){
        if (arr[i]%2!=0)
        count++;
    }
    return count;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,12};
    
    cout<<"There are "<<odds(arr)<<" in the array";

}