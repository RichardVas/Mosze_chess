#include "../JSON.h"
#include "../King.h"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{
	King kiraly = King(10,10)
	ASSERT_EQ(kiraly.getX(),10);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
