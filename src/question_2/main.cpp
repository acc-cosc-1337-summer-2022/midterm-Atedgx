#include "question2.h"
#include <iostream>
#include <time.h> 
#include <stdlib.h>


using std::cin;
using std::cout;


int main()
{
    srand(time(0));
    class Dice myDice;
    int rollss;
    cout<<"Welcome to the Auto Dice Roller"<<"\n";
    cout<<"This programs simulates a 6 sided die"<<"\n";
    auto again = 'Y';
    while(again == 'Y' || again == 'y'){
    cout<<"How many times would you like to roll the dice?"<<"\n";
    cin>>rollss;
    cout<<"\n"<<"Thank you so much\n\n";
    for(int i = 0; i<rollss; i++){
        cout<<myDice.Roll(rollss)<<"\n";
    }
    cout<<"\nWould you like to roll again (Y/N)?"<<"\n";
    cin>>again;
    }

return 0;
}