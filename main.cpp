#include <iostream>
#include "node.h"
using namespace std;

int main(){
    node pos;
    pos.row = 2;
    pos.col = 4;

    cout << "Row: " << pos.row << "\nCol: "<< pos.col<<"\n";
    return 0;
}