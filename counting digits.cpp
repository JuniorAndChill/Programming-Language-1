//Daniel Critchlow
#include <iostream>
using namespace std;
 
//Read a number that has 1 to 5 digits and write how many digits there are
int main ()
{
//"reading a number"
    int num;
    cout<< "Input number that is 1-5 digits long: ";
    cin>>num;
//Counting number of digits
int sum=0;
    while (num !=0){
    num /=10;
    ++sum;}
//output result
    cout<<"Number of digits is: " <<sum<<endl;
    return 0;
}