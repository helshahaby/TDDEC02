
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

void Player1_OnePoint_Playe2_NullPoints(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Fifteen, Love",score);
}

void Player1_OnePoint_Playe2_OnePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Fifteen all",score);
}

void Player1_TwoPoint_Playe2_OnePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Thirty, Fifteen",score);
}

void Player1_ThreePoint_Playe2_OnePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
        playerOneScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Forty, Fifteen",score);
}

void Player1_FourPoints_Playe2_OnePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
    playerOneScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Player 1 wins",score);
}

void Player1_TwoPoints_Playe2_ThreePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Thirty, Forty",score);
}

void Player1_ThreePoints_Playe2_ThreePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Deuce",score);
}

void Player1_FourPoints_Playe2_ThreePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
     playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Advantage Player 1",score);
}

void Player1_FourPoints_Playe2_FourPoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
     playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Deuce",score);
}


void Player1_FourPoints_Playe2_FivePoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
     playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
        playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Advantage Player 2",score);
}

void Player1_FourPoints_Playe2_sixPoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
     playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
        playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    TEST_ASSERT_EQUAL_STRING("Player 2 wins",score);
}


void Player1_FourPoints_Playe2_sevenPoint(void)
{
    // Given a new game
    char score[255];
    InitTennisGame();

    playerOneScores();
    playerOneScores();
    playerOneScores();
     playerOneScores();

    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
        playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    playerTwoScores();
    
    // When I get score
    getScore(score);

    // Then I should get "Love, all"
    //TEST_ASSERT_EQUAL_STRING("Player 2 wins behavior issue",score);
TEST_ASSERT_EQUAL_STRING("Player 2 wins",score);
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(new_game_score_is_love_all);
    RUN_TEST(Player1_OnePoint_Playe2_NullPoints);
    RUN_TEST(Player1_OnePoint_Playe2_OnePoint);
    RUN_TEST(Player1_TwoPoint_Playe2_OnePoint);  
    RUN_TEST(Player1_ThreePoint_Playe2_OnePoint);
    RUN_TEST(Player1_FourPoints_Playe2_OnePoint);
    RUN_TEST(Player1_TwoPoints_Playe2_ThreePoint);
    RUN_TEST(Player1_ThreePoints_Playe2_ThreePoint);
    RUN_TEST(Player1_FourPoints_Playe2_ThreePoint);
    RUN_TEST(Player1_FourPoints_Playe2_FourPoint);
    RUN_TEST(Player1_FourPoints_Playe2_FivePoint);
    RUN_TEST(Player1_FourPoints_Playe2_sixPoint);
    RUN_TEST(Player1_FourPoints_Playe2_sevenPoint);
    return UNITY_END();
}
