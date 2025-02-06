///Daniel Critchlow
#include <iostream>
using namespace std;

int main () 
//make 3 bool var to determine if a person is ready to graduate
{
bool Q1; bool Q2; bool Q3;
cout<<"Here are 3 question. Answer 1 for True or 2 for False"<< endl;
cout<<"Has the person completed all of the required courses?: ";
cin>>Q1;
cout<<"Has the person turned in all required paperwork?: ";
cin>>Q2;
cout<<"Has the person any pending debt with the university?: ";
cin>>Q3;
if ((Q1&&Q2)&&(!Q3))
    cout<<"The student is ready to graduate";
else
    cout<<"The student isn't ready to graduate";
return 0; 
    
}