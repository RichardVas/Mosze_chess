#include "../JSON.h"
#include "../Piece.h"
#include "../King.h"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{
	Piece *kiraly = new King(10,10);
	ASSERT_EQ(10,10);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
