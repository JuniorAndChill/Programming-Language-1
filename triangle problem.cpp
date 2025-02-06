//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
int side1; int side2; int side3;
cout<<"Input 1st side: ";cin>>side1;
cout<<"Input 2nd side: ";cin>>side2;
cout<<"Input 3rd side: ";cin>>side3;

if (side1 == side2 && side1 == side3)
    cout<<"The triangle is equalateral";
else if (side1 != side2 && side1  != side3 && side2 != side3)
    cout<<"The triangle is scalene";
else
    cout<<"The triangle is isosceles";
return 0;
}