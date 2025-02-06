//Daniel Critchlow
#include <iostream>
using namespace std;
 
int main ()
{
    char age; char record; char related;
    cout<<"Are you over 18 yrs old? (y/n): ";cin>>age;
        
        if (age == 'y'){
            cout<<"Do you have a criminal record? (y/n): "; cin>>record;
            if (record == 'n'){
                cout<<"Are you related to the trial members? (y/n): "; cin>>related;
                if (related == 'n'){
                    cout<<"You can serve on jury duty.";
                }
                else {
                    cout<<"You can not server on jury duty.";
                }
            }
            else {
                cout<<"You can not serve on jury duty.";
            }
        }
        else {
            cout<<"You can not serve on jury duty.";
        }
    return 0;
}