#include <fstream>
#include <cstdlib>
#include "lab2.h"

gaming.loadfile{
    ifstream inFile("status", ios::out);
    if(!inFile){
	cerr << "Opening Failed" << endl;
	exit(1);  
}

gaming.input{
    cin >> gaming.K >> gaming.Ra >> gaming.Rb;
    cin >> win[0] >> win[1] >> win[2] >> win[3] >> win[4] >> win[5];
}

