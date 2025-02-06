/*This is a simple program to find averages using arrays
Daniel Critchlow*/

#include <iostream>
#include <iomanip>//library to change decimal formatting
using namespace std;

int main()
{
int aSize=5;//this sets an initial array size. Allow the user to change how many numbers they want
int arr[aSize];//this allows for the array to be adjust based on the user input
float sum=0; //initialize float
int count=0; //initialize count

cout<<fixed<<setprecision(4); //This allows for manipulating the decimal output to specific float

cout<<"How many numbers do you want to average from?: ";
cin>>aSize;
for(int i=0; i<aSize; i++){
    count++;//keep count for user experience
    cout<<"Give me a number ["<<count<<"]: ";cin>>arr[i];
    }    
for(int i=0; i<aSize; i++){
    sum+=arr[i]; //the position indicates what value we add to sum. Since sum=0 initially it allows this to work
}
cout<<"The average of "<<aSize<<" numbers is: "<<sum/aSize<<endl;
}