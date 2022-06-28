#include "question2.h"
#include <time.h> 
#include <stdlib.h>
#include <iostream>

using std::cout;

bool test_config()
{
    return true;
}

int Dice::setSides(){

    int s = 6;
    return s;
}

int Dice::NumRolls(int r){

 int rolls = r;
 return rolls;

}

int Dice::Roll(int r){
    int rolls = r;
    for(int i = 0; i < rolls ; i++){
        return rand() % 6 + 1;
    
}
return 0;
}