// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

//1st of all, I want to mention how much I hated this problem LOL
int main()
{
//I needed these vars to perform my functions
    int main_num, hundreds, tens, teens, ones;
    cout<<"Enter a positive integer up to 3 digits long: ";cin>>main_num;
    
//This will be all the math I need to make my switches work
    hundreds=main_num/100; tens=main_num/10%10; ones=main_num%10; teens=(tens*10)+ones;
//Hundreds was the most simple because we are limiting to 3 max digits 
        switch(hundreds){
        case 1:
            cout<<"One Hundred ";
        break;
        case 2:
            cout<<"Two Hundred ";
        break;
        case 3:
            cout<<"Three Hundred ";
        break;
        case 4:
            cout<<"Four Hundred ";
        break;
        case 5:
            cout<<"Five Hundred ";
        break;
        case 6:
            cout<<"Six Hundred ";
        break;
        case 7:
            cout<<"Seven Hundred ";
        break;
        case 8:
            cout<<"Eight Hundred ";
        break;
        case 9:
            cout<<"Nine Hundred ";
        break;
            }
//I need if statements to activate particular switches when needed
    if (tens>1){
    switch (tens){
        case 0:
            cout<<"";
//As was mentioned in classe we need to add breaks after every case to make the function stop when we need it to stop
        break;
        case 2:
            cout<<"Twenty ";
        break;
        case 3:
           cout<<"Thirty ";
        break;
        case 4:
          cout<<"Fourty ";
        break;
        case 5:
           cout<<"Fifty ";
        break;
        case 6:
          cout<<"Sixty ";
        break;
        case 7:
           cout<<"Seventy ";
        break;
        case 8:
            cout<<"Eighty ";
        break;
        case 9:
            cout<<"Ninty ";
        break;
        }
    }
//This was the moment I regretted waking up. Questioned life choices. etc. I had to set parameters so that teens would only activate when I truely needed them to 
    if (teens>=10&&teens<100)
    switch (teens){
        case 10:
            cout<<"Ten ";
        break;
        case 11:
            cout<<"Eleven ";
        break;
        case 12:
            cout<<"Twelve ";
        break;
        case 13:
            cout<<"Thirteen ";
        break;
        case 14:
            cout<<"Fourteen ";
        break;
        case 15:
            cout<<"Fifteen ";
        break;
        case 16:
            cout<<"Sixteen ";
        break;
        case 17:
            cout<<"Seventeen ";
        break;
        case 18:
            cout<<"Eighteen ";
        break;
        case 19:
            cout<<"Nineteen ";
        break;
        }
//Beacuse of how much of a pain the teens were, the ones also threw me for a loop but I needed to make conditions when teens wouldn't activate
    if (teens<10||tens>1){
    switch (ones){
        case 1:
            cout<<"One";
        break;
        case 2:
            cout<<"Two";
        break;
        case 3:
            cout<<"Three";
        break;
        case 4:
            cout<<"Four";
        break;
        case 5:
            cout<<"Five";
        break;
        case 6:
            cout<<"Six";
        break;
        case 7:
            cout<<"Seven";
        break;
        case 8:
            cout<<"Eight";
        break;
        case 9:
           cout<<"Nine";
        break;}
    }
}
//I wanted to sleep for a long time after finally making this work. Please don't make us do this on an exam from scratch, we'll most def run out of time
//The provided test values are 762, 47, and 911