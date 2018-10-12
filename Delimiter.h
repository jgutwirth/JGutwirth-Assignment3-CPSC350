#include <iostream>
#include <fstream>
#include <string>
#include "GenStack.h"
using namespace std;

class Delimiter{
public:
    Delimiter();
    ~Delimiter();
    bool ArePair(char opening, char closing){
        if(opening == '(' && closing == ')') return true;
        else if(opening == '{' && closing == '}')return true;
        else if(opening == '[' && closing == ']')return true;
        else return false;
    }

    void checkSyntax(string line)
    {
        bool keepGoing = true;
        GenStack <char> s(16);
        while(keepGoing == true) {
            int lines = 1;
            string Code;

            ifstream inf;
            inf.open(line.c_str());
            while (getline(inf, Code)) {
                for(int i=0;i<Code.size();i++){
                    if((Code[i] == '(')||(Code[i] == '{')||(Code[i] == '[')){

                    }
                }
            }
        }
    }
};