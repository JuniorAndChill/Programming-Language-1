/*This is a simple program to find averages using arrays while applying OOM
Daniel Critchlow*/

#include <iostream>
#include <iomanip>//library to change decimal formatting
using namespace std;

int arr[100];//should be large enough for most cases. Set arrays outside of classes or methods

class ArrAvg{
private:
    int aSize=0;//allow the user to change how many numbers they want to average
    float sum=0; //initialize float
    int count=0; //initialize count

public:

    void avgSize(){
    cout<<"How many numbers do you want to average from?: ";
    cin>>aSize;
    }
    void avgInput(){
        for(int i=0; i<aSize; i++){ //range only goes till the user wants to stop based on the "aSize"
            count++;//keep count for user experience
            cout<<"Give me a number ["<<count<<"]: ";cin>>arr[i];
        }
    }
    float avgCalc(){//I want to return a float value so I set the method's data type to "float"
    for(int i=0; i<aSize; i++){
        sum+=arr[i]; //the position indicates what value we add to "sum". Since "sum=0" initially, it allows this to work
    }
    return sum=(sum/aSize);//we can return the value we want and have it store to call it later in the program
    }
    void avgDisplay(){
        cout<<fixed<<setprecision(2); //This allows for manipulating the decimal output to specific float
        cout<<"The average of "<<aSize<<" numbers is: "<<sum<<endl; //we call all the important information for the user
    }
};

int main()
{
ArrAvg arravg; //call the class and set the instance

//we can call each part that is applicable to the program
arravg.avgSize();
arravg.avgInput();
arravg.avgCalc();
arravg.avgDisplay();
}