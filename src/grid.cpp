#include <iostream>
#include "grid.h"
using namespace std;


void grid::print(){
    for(int i=0; i<this->rows; i++){
        for(int j=0; j<this->cols;j++){
            cout << "["<<this->cells[i][j]<<"]";
        }
        cout << endl;
    }
}