#include "pch.h"
#include "../Baseball/Baseball.cpp"
using namespace std;

class BaseballFixture : public testing::Test {
public:
	Baseball game;
	void assertIllegalArgument(string guessNumber) {
		try {
			game.guess(string("12s"));
			FAIL();
		}
		catch (exception e) {
			//PASS
		}
	}
};

TEST_F(BaseballFixture, ThrowExpectionWhenInputLemngthIsUnmatched) {
	assertIllegalArgument("12");
}

TEST_F(BaseballFixture, ThrowExceptionWhenInvalidChar) {
	assertIllegalArgument("12s");
	
}
