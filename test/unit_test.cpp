#include "../JSON.h"
#include "../Piece.h"
#include "../Piece.cpp"
#include "../King.h"
#include "../King.cpp"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{
	Piece *tmp_piece = new King(1, 1);
	int x = kiraly->getX();
	EXPECT_EQ(x,1);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
