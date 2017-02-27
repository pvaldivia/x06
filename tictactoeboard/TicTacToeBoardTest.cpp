/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(TicTacToeBoardTest, sanityCheck)
{
	ASSERT_TRUE(true);
}
TEST(TicTacToeBoardTest, GetPieceFail)
{
	TicTacToeBoard Tic;
	Piece actual;
	actual = Tic.getPiece(4,3);
	ASSERT_EQ(actual,Invalid);
}

TEST(TicTacToeBoardTest, IncorrectPlacing)
{
	TicTacToeBoard Tic;
	Piece actual;
	actual = Tic.placePiece(4,5);
	ASSERT_EQ(actual,Invalid); 
}
TEST(TicTacToeBoardTest, ClearBoardPass)
{
	TicTacToeBoard Tic;
	Piece actual;
	Tic.placePiece(0,0);
	Tic.clearBoard();
	actual = Tic.getPiece(0,0);
	ASSERT_EQ(actual,Blank);
}
