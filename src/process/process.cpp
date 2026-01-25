#include<iostream>
#include "process.h"
#include <Eigen/Dense>
using std::cout, std::endl;


void Process::plan_process()
{
    cout << "this is planing process" << endl;
    my_map.map_info();
    
    Eigen::MatrixXd m(2,2);
    m(0,0) = 1.0;
    m(0,1) = 2.0;
    m(1,0) = 3.0;
    m(1,1) = 4.0;

    cout << m << endl;
    
    cout << "planning success!" << endl;
} 