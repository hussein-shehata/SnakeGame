/*
 * main.cpp
 *
 *  Created on: Apr 12, 2024
 *      Author: Hussein
 */



#include <iostream>
using namespace std;

#include "Board.hpp"

int main()
{
  SudokoBoard MyBoard;
  MyBoard(1,1) = 5;
  MyBoard.TakeInputFromUser();
  MyBoard.PrintGrid();

}
