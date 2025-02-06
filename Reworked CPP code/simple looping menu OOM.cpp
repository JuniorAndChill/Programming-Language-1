/*Here is a simple looping menu that will repeatedly show you the menu inside of each option. It will continually loop till
there is a 0 entered. Of course the values and content can be adjusted based on use. This was also formatted for OOM to
make updating easier later on.*/
#include <iostream>
using namespace std;

class SimpleMenu {//name it what you want/need
    private:
//private is here but it's not necessary at this time but if you need global variables you can add em here
    public:
    //I'm guessing you only want to show this once at the top right? If you need it again just call "intro()" again
    void intro(){//good ol jiberish text
    cout << "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et";
    cout<<"\ndolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea";
    cout<<"\ncommodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla";
    cout<<"\npariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    }
    //This is our menu you want people to choose from
    void menu () {
    cout << "\n\nTable of contents:"; //used 2 "\n" for formatting
    cout << "\n[1] {ADD INFO}";
    cout << "\n[2] {ADD INFO}";
    cout << "\n[3] {ADD INFO}";
    cout << "\n[4] {ADD INFO}";
    cout << "\n[0] Exit program";
    }
   //Author info goes here
    void option1() {
        cout << "\n{ADD INFO}";
        cout<<"\n\nContent goes here";
    }
   //Abstract goes here
    void option2() {
        cout << "\n{ADD INFO}";
        cout<<"\n\nContent goes here";
    }
   //Conclusion goes here
    void option3() {
        cout << "\n{ADD INFO}";
        cout<<"\n\nContent goes here";
    }
   //Bibliography goes here
    void option4() {
        cout << "\n{ADD INFO}";
        cout<<"\n\nContent goes here";
    }
};

int main()
{
SimpleMenu content;//class and inheritance is defined here

int choice=5;//seems weird but just do a number higher than what you will use. 
             //It makes the while loop just work. If you make it the same as
             //one of the options it'll go into the option immediately which
             //you probably don't want to do.

content.intro(); //calling the initial intro thing

//the point of the while loop is to allow for you to repeatedly display the menu and the option's contents
//this allows you to not repeatedly have to do entries for the menu/prompt/choice manually
    while (choice != 0){ //we can skip the bool since this isn't that complicated and just use the inputs
        content.menu ();//putting the menu outside of the if loops will display the menu in every option till you end
        cout << "\nEnter option: ";
        cin>>choice;
        if (choice == 0)
            break;//the break will end the loop which is always nice to start with that option
        else if (choice == 1)
            content.option1();
        else if (choice == 2)
            content.option2();
        else if (choice == 3)
            content.option3();
        else if (choice ==4)
            content.option4();
    }//if you need some sort of message you can add it after the loop. Up to you really
return 0; //probably don't need return 0 but it's a habit at this point
}
//Another option for you loop can be a Do/while loop as it will always do the loop at least once. This
//allows you to skip initializing the "choice" variable. Just depends on how you want to manage everything