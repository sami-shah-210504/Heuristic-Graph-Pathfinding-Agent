#include <iostream>
#include "node.h"
#include "grid.h"
using namespace std;

int main(){
    // node pos;
    // pos.row = 2;
    // pos.col = 4;

    // cout << "Row: " << pos.row << "\nCol: "<< pos.col<<"\n";

    grid g1 = grid(4, 4);

    g1.print();

    return 0;
}