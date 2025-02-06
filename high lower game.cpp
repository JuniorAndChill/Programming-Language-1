//Higher lower game
// Daniel Critchlow
#include <iostream>
#include <string>
using namespace std;

int main(){
cout<<"Think of a number from 1 to 1000";
int lowerb=1, middleb, upperb =1000;
char resp;
int attempts=0;
do {
    middleb=(upperb+lowerb)/2;
    cout<<"I thought of "<<middleb<<". Is the number (L)arger, (S)maller, or (C)orrect?";
    cin>>resp;
    if (resp=='S')
        upperb=middleb+1;
    if (resp=='L')
        lowerb=middleb+1;
    attempts++;
    }
while (resp!='C');
        cout<<"It took "<<attempts<<" attempts to figure out the answer.";
}