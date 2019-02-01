
#include "unity.h"
#include "Tennis.h"

void new_game_score_is_love_all(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Love all",score);
}


int main(void) {
    UNITY_BEGIN();
    RUN_TEST(new_game_score_is_love_all);
    return UNITY_END();
}
