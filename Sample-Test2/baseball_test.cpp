#include "pch.h"
#include "../Baseball/Baseball.cpp"
using namespace std;

TEST(BaseballGame, ThrowExpectionWhenInputLemngthIsUnmatched) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12")), length_error);
}

TEST(BaseballGame, ThrowExceptionWhenInvalidChar) {
	Baseball game;
	EXPECT_THROW(game.guess(string("12s")), invalid_argument);
}
