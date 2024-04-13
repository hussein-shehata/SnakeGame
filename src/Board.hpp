/*
 * Board.hpp
 *
 *  Created on: Apr 12, 2024
 *      Author: Hussein Shehata
 */

#ifndef BOARD_HPP_
#define BOARD_HPP_

#include <iostream>

typedef unsigned int uint32;
typedef unsigned char uint8;
using namespace std;


class SudokoBoard
{
  private:
    const uint32 Width = 9;
    const uint32 Length = 9;

    uint8 GridValues[9][9] = {0};
    bool IsOriginal[9][9] = {false};

  public:
    void PrintGrid();
    uint8& operator() (uint32 x, uint32 y);
    bool& GetIsOriginal(uint32 x, uint32 y);
    void TakeInputFromUser();



};


#endif /* BOARD_HPP_ */
