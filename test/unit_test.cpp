#include "../JSON.h"
#include "../King.h"
#include <gtest/gtest.h>

#include <fstream>
#include <utility>

TEST(King_piece,King_exists)
{

	ASSERT_EQ(1,1);
}


int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
