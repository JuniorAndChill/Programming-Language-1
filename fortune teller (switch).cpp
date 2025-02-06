//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
   char i;
   cout<<"What is your mariatal status? (m/s/d/w/l): ";cin>>i;
   switch (i){
        case 'm':
           cout<<"Your Spouse will surprise you with a trip planned in the future!";
        break;
        case 's':
            cout<<"You will find the love of your life.";
        break;
        case 'd':
            cout<<"You will live peacefully.";
        break;
        case 'w':
            cout<<"Your spouse is watching over you.";
        break;
        case 'l':
            cout<<"Your divorce will finalize soon.";
   }
    return 0;
}

//This is if you want to add a loop to ensure valid entry
 
int main ()
{
    char status;
    do{
    cout<<"What is your marital status? (s/m/d/w/l): ";cin>>status;}
    while (status !='s'&& status !='m'&& status !='d'&& status !='w'&& status !='l');
        cout<<"Your status is "<<status;
}