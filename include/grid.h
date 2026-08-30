#pragma once

#include <vector>
#include "node.h"

class grid{
    int rows;
    int cols;
    std::vector<std::vector<int>> cells;
public:
    grid(int rows, int cols){
        this->rows=rows;
        this->cols=cols;
        cells.resize(rows); // size of whole vector = rows
                            // size of each row = cols

        for(int i =0; i <rows; i++){
            cells[i].resize(cols); // {{0, 0, 0, 0, ... cols},
                                   //  {0, 0, 0, 0, ... cols}
                                  //    ...
                                 //    rows}
        }
    }
    void print();
    void setObstacle(node position); // for grid inititalisation
    bool isValid(node position); // size validation
    bool isWalkable(node position); // does a path even exist to the goal?
    vector<node> getNeighbors(node position); // neighbouring cells for current cell position

};