#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include <iostream>
#include <string>

#define TEST

using namespace std;

int main(int argc, char** argv) {
#ifdef TEST
    doctest::Context ctx;
    ctx.setOption("abort-after", 5);  // default - stop after 5 failed asserts
    ctx.applyCommandLine(argc, argv); // apply command line - argc / argv
    ctx.setOption("no-breaks", true); // override - don't break in the debugger
    int res = ctx.run();              // run test cases unless with --no-run
    return res;                   // propagate the result of the tests

#else
    cout << "  ///// \n +-----+ \n(| o o |)\n |  ^  | \n | '-' | \n +-----+" << endl;
    string name;
    cout << "Enter your name: ";
    cin >> name;
    cout << "your name is " << name << endl;
    return 0;
#endif
}