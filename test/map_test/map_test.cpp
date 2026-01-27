#include <iostream>
#include "pnc_map.h"
using std::cout, std::endl;

void mapTest(){
    cout<<"this is pnc_map test"<<endl;
    PNC_Map map;
    map.map_info();
}

int main(){
    mapTest();
    return 0;
}