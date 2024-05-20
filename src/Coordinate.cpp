//
// Created by Koen Seeuws on 20/05/2024.
//

#include "Coordinate.h"

Coordinate::Coordinate(int x, int y) : x(x), y(y) {};

int Coordinate::getX() {
    return x;
}

int Coordinate::getY() {
    return y;
}