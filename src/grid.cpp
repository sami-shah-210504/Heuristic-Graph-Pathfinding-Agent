#include <iostream>
#include "grid.h"
#include "node.h"
using namespace std;

// print whole grid
// initially all are zero
// obstacles represented with 1
void grid::print(){
    for(int i=0; i<this->rows; i++){
        for(int j=0; j<this->cols;j++){
            cout << "["<<this->cells[i][j]<<"]";
        }
        cout << endl;
    }
}

// takes a grid coordinate and determines if  
// it is within the bounds of the grid
bool grid::isValid(node position){ 
    if(position.row>=this->rows ||position.row<0 || position.col>=this->cols || position.col<0){
        return false;
    }
    else return true;
}

// takes a grid coordinate and determines if  
// agent can traverse through that index
bool grid::isWalkable(node position){
    if(isValid(position))
        if(this->cells[position.row][position.col]==1){
            return false;
        }
        else{
            return true;
        }
    else return false;

}
// takes a grid coordinate and
// sets an obstacle (1) at that index
void grid::setObstacle(node position){
    // obstacle in grid is represented by 1
    if(isValid(position))
        this->cells[position.row][position.col] = 1;
    else{
        cout << "Indices ("<<position.row<<", "<<position.col<<") out of range\n";
    } 
}