#include <iostream>
#include "Delimiter.h"
#include "GenStack.h"

using namespace std;
int main(int arg1, char** arg2) {
    Delimiter delimiter ;

    if(arg1 < 2){
        cout<<"Invalid input.\n Usage: Checking syntax on code through a file containing a text version of the said code.\n Author: Jonathan Gutwirth";
        exit(0);
    }
    else{
        string file = arg2[1];
        delimiter.checkSyntax(file);
    }

    return 0;
}