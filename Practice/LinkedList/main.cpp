#include <iostream>
#include "headers/sample_test.h"

using namespace std;

// To compile
// g++ main.cpp sample_test.cpp test_helpers.cpp -o a.out -std=c++14 && ./a.out

int main()
{
    UnitTests::Run_All();

    return 0;
}