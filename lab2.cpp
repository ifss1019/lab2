#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cmath>
#include "lab2.h"
using namespace std;

int gaming::loadfile(){
    ifstream inFile("file.in", ios::in);
    if(!inFile){
	cerr << "Opening Failed" << endl;
	exit(1);
    }
    inFile >> K >> Ra >> Rb;
    inFile >> win[0] >> win[1] >> win[2] >> win[3] >> win[4] >> win[5];
}

int gaming::call1(){
    return K;
}

int gaming::call2(){
    return Ra;
}

int gaming::call3(){
    return Rb;
}

int gaming::calculate(){
    int k = call1();
    int ra = call2();
    int rb = call3();
    double ea = 0.506;
    ofstream outFile("file.out", ios::out);
    outFile << call2() << "\t" << call3() << endl;
    for (int i=0; i<6; i++){
	ra = ra + k * (win[i] - ea);
	rb = 3222 - ra;
	ea = 1/(1+pow(10,(rb-ra)/400));
	outFile << ra << "\t" << rb << endl;
    }
}
