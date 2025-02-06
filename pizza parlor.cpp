//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
char vegan;
cout<<"Are you a Vegan? (y/n) "; cin>>vegan;
if (vegan =='y')
    cout<<"Ingredients: tomato, mushrooms, tofu, onions,";
else 
    cout<<"Ingredients: tomato, mushrooms, tofu, onions, salami, sausage, pepperoni, bacon ";

return 0;
}