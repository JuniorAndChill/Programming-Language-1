#include <iostream>
using namespace std;

int main () 
{
//reading a number
    int num;
    cout<< "Input number (1-3 digit positive integer): ";
    cin>>num;
//Splitting number into seperate digits 


/* This is the more simple way
int hundreds; 
int tens; 
int ones;
hundreds=num/100;
tens=num/10%10;
ones=num%10;
int total;
total=hundreds+ tens+ ones;
cout<<total<<endl;*/

//This is the more advanced way that allows for more versatile inputs
    int sum=0;
    while (num !=0){
    sum +=num %10;
    /*"/=" Divide AND assignment operator, It divides left operand with the right operand 
    and assign the result to left operand. C /= A is equivalent to C = C / A.*/
    num /=10;}
//output the result    
    cout<<"Sum of digits:"<< sum <<endl;
    return 0;
    }