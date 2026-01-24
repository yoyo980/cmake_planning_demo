#include<iostream>
#include "process.h"
using std::cout, std::endl;


void Process::plan_process()
{
    cout << "this is planing process" << endl;
    my_map.map_info();
    
    int m = 100;
    cout << m << endl;
    
    cout << "planning success!" << endl;
} 