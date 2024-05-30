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

TEST_F(BaseballFixture, ThrowExpectionInvalidCases) {
	assertIllegalArgument("12");
	assertIllegalArgument("12s");
	assertIllegalArgument("121");
}
