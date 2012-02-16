//
//  main.cpp
//  Fibonacci
//
//  Created by John Yang-Sammataro on 12/31/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <sstream>
using namespace std;


void PrintFibonacciRecurse(int first, int second, int& lengthOfSequence) {
    if(lengthOfSequence == 0) return;
    int next = first + second;
    cout << next << endl;;
    PrintFibonacciRecurse(second, next, --lengthOfSequence);
}

void PrintFibonacci(int lengthOfSequence) {
    int first = 0;
    cout << first << endl;
    int second = 1;
    cout << second << endl;
    lengthOfSequence -= 2;
    PrintFibonacciRecurse(first, second, lengthOfSequence);
}
    
string GetLine() {
    string input;
    getline(cin, input);
    return input;
}

int GetInteger() {
    while(true) {
        cout << "Please enter an integer: ";
        stringstream converter;
        char extra;
        int result;
        
        converter << GetLine();
        converter >> result;
        
        if (converter.fail()) {
            cout << "Not an integer." << endl;
        } else if (converter >> extra) {
            cout << "Unexpected character: " << extra << endl;
        } else {
            return result;
        }
    }
}

int main (int argc, const char * argv[])
{
    int lengthOfSequence = GetInteger();
    PrintFibonacci(lengthOfSequence);
    
    return 0;
}

