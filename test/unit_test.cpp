#include "../JSON.h"
#include "../King.h"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{
	Piece *kiraly = new King(10,10);
	int test_x = kiraly->getX();
	int exp_x = 10;
	
	delete kiraly;
	ASSERT_EQ(test_x, exp_x);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
