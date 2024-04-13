/*
 * Board.cpp
 *
 *  Created on: Apr 12, 2024
 *      Author: Hussein Shehata
 */

#include "Board.hpp"

void SudokoBoard::PrintGrid()
{
  for(uint32 idx = 0; idx < Width; idx++)
    {
      if(idx % 3 == 0)
	{
	  for (uint32 j = 0; j < Length; j++)
	    {
	      cout<<"---";
	    }
	  cout<<endl;
	}
      for (uint32 j = 0; j < Length; j++)
	{
	  cout<<(int)GridValues[idx][j]<<" ";
	  if( (j+1) % 3 == 0 && j != 0)
	    {
	      cout<<"|";
	    }

	}
      cout<<endl;
    }
}

bool& SudokoBoard::GetIsOriginal(uint32 x, uint32 y)
{
  return IsOriginal[x][y];
}

//Operator overload to assign value to cell
uint8& SudokoBoard::operator() (uint32 x, uint32 y){

  return  ( GridValues[x][y] );

}

void SudokoBoard::TakeInputFromUser()
{
  uint32 RowValue = 0, ColValue = 0, EnterValue = 0;
  cout<<"Please enter the Value , Row, Column (Starting from 0 )"<<endl;
  cin>>EnterValue>>RowValue>>ColValue;

  GridValues[RowValue][ColValue] = EnterValue;

}




