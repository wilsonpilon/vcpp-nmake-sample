#include <iostream>
#include <cmath>

#include "project.h"
#include "app.h"

using namespace std;

bool run(int argc, char *argv[]) {

    if(argc != 4) {
        usage();
        return false;
    }

    string opArg = argv[2];
    if(opArg.length() > 1) {
        cout << endl << "operator should be a single character" << endl;
        usage();
        return false;
    }

    char op=opArg.at(0);
    if(op == 44 || op == 46 || op < 42 || op > 47) {
        cout << endl << "operator not recognized" << endl;
        usage();
        return false;
    }

    double arg1=atof(argv[1]);
    double arg2=atof(argv[3]);
    double result=0;

    switch(op) {
        case '+':
            result=arg1+arg2;
            break;
        case '-':
            result=arg1+arg2;
            break;
        case '*':
            result=arg1*arg2;
            break;
        case '/':
            if(arg2 == 0) {
                cout << endl << "divide by zero!" << endl;
                return false;
            } else
                result=arg1/arg2;
            break;
    }

    cout << endl;
    cout << arg1 << " " << op << " " << arg2;
    cout << " = " << result << endl;

    return false;
}

void usage() {
    cout << endl;
    cout << "bc arg1 op arg2" << endl;
    cout << "arg1 and arg2 are the arguments" << endl;
    cout << "op is an operator, one of + - / or *" << endl;
}