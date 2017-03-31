#include <iostream>
#include <fstream>
#include <cstdlib>
#include "lab2.h"
using namespace std;

int main (int argc, char *argv[]){
    gaming g;
    int K = g.call1();
    int Ra = g.call2();
    int Rb = g.call3();
    g.loadfile();
    g.calculate();

    return 0;
}
