#include <iostream>
using namespace std;
string nme;
int lives = 10;
int option;
void left()
{
    cout<<"YOU FELL INTO THE WRONG WORLD !!"<<endl;
    cout<<"You lost -2 lives"<<endl;
    lives = lives - 2;
}
void middle()
{
    cout<<"You chose to go down the middle and picked up health plants"<<endl;
    cout<<"This added +3 lives "<<endl;
    lives = lives + 3;
    cout<<"You have "<<lives<<" left"<<endl;
}
void right()
{
    cout<<"You've choosen to the right, making you to be safe!! BY BRINGING YOU BACK TO THE REAL WORLD"<<endl;
    cout<<"This added +9 lives "<<endl;
    lives = lives + 9;
}
void menu()
{
    cout<<"---------------------------------------------------------"<<endl;
    cout<<"WELCOME TO THE UNDERGROUND WORLD ADVENTURE"<<endl;
    cout<<"---------------------------------------------------------"<<endl;
    cout<<""<<endl;

    cout<<"Provide your name : "<<endl;
    getline(cin, nme);
    cout<<"Hey there, "<<nme<<endl;
    cout<<endl;

    cout<<"You are probably wondering where you fell off from? you are in the underground adventure, find your way out!!"<<endl;
    cout<<""<<endl;

    cout<<"YOUR INFO : "<<endl;
    cout<<"*********************************************************************************************************"<<endl;
    cout<<"NAME : "<<nme<<endl;
    cout<<"LOCATION : LAS VEGAS"<<endl;
    cout<<"LIVE : "<<lives<<endl;
    cout<<"***********************************************************************************************************"<<endl;

    cout<<"Enter 1 to go LEFT"<<endl;
    cout<<"Enter 2 to go MIDDLE"<<endl;
    cout<<"Enter 3 to go RIGHT"<<endl;
    cin>>option;
    switch(option)
    {
    case 1 :
        left();
        break;
    case 2 :
        middle();
        break;
    case 3 :
        right();
        break;
    default:
        cout<<"Invalid option"<<endl;
        break;
    }
}




int main()
{
    menu();
    return 0;
}
