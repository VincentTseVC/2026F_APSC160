/*

In this question you will develop a program that generates elementary math problems for kids.
The program creates random problems using one of the operators ’+’, ’-’ and ’*’. The operands
(the numbers to operate on) are integers between 0 and 9 (including 0 and 9). Ten questions
are generated and the user gets a maximum of 3 attempts at each question. The percentage of
questions answered correctly is reported to the user before the program quits.

Here is part of a sample run showing interaction with the user for questions 2 and 3 only,
as well as the final report printed after all questions have been attempted (recall that a
total of 10 questions is asked each time the program is run). The reported score in this
example assumes that the user came up with the right answer, within the maximum number of
attempts, on 9 of the 10 questions asked. Study this output carefully.

    <<Question #1 omitted>>

    Question #2:
    4 - 3 = ?

    You have 3 attempts remaining.  Enter your answer...
    2
    Your answer is not correct.
    You have 2 attempts remaining.  Enter your answer...
    1
    Correct!

    Question #3:
    7 * 4 = ?

    You have 3 attempts remaining.  Enter your answer...
    24
    Your answer is not correct.
    You have 2 attempts remaining.  Enter your answer...
    7
    Your answer is not correct.
    You have 1 attempts remaining.  Enter your answer...
    4
    You have no more attempts remaining.
    The correct answer is 28

    <<Question #4 -> #10 omitted>>

    Your score is 90.0 percent.


Your task is to complete the program presented on the following pages. To do this you must:

- insert code into the two underlined blank spaces provided in main
- complete the function generateQuestion by inserting code to determine the correct answer
  to the question and return it
- complete the function getUserAnswer
- complete the function processUserAnswers

It is recommended that you carefully read the documentation for all functions before you
attempt to write any code.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_OPERATORS 3     /* number of operators to choose from */
#define NUM_QUESITONS 10    /* number of questions in quiz */
#define MAX_ATTEMPTS 3      /* max number of attempts to answer a question */
#define MAX_NUM 10          /* operands are in range 0 to (MAX_NUM - 1) */

#define FALSE 0
#define TRUE 1

int generateQuestion( int );
int processUserAnswers( int );
int getUserAnswer( int );
int getRandomOperand( void );

int main( void ) {
    int qNum;
    int correctAnswer;
    int numCorrect = 0;

    srand( (unsigned) time( NULL ) );

    for( qNum = 1; qNum <= NUM_QUESITONS; qNum++ ) {
        //generate and display question

        correctAnswer = generateQuestion(qNum);

        // Respond to user getting answer right or running out of attempts

        if( processUserAnswers(correctAnswer) ) {
            printf( "Correct!\n\n" );
            numCorrect++;
        }
        else {
            printf( "You have no more attempts remaining.\n" );
            printf( "The correct answer is %d\n\n", correctAnswer );
        }

    }

    printf( "Your score is %.1f percent.\n", 100.0 * numCorrect / NUM_QUESITONS );

    return 0;
}

/*
 * Generates a random operand between 0 (inclusive) and MAX_NUM (exclusive)
 */
int getRandomOperand( void ) {
    return rand() % MAX_NUM;
}


/*
 * Generates a new question and prints it on the screen.
 *
 * Param: qNum - the question number
 * Return: answer to question
 */
int generateQuestion( int qNum ){
    //                    0    1    2
    char operators[] = { '+', '-', '*' };
    char operator = operators[rand() % NUM_OPERATORS];
    int operand1 = getRandomOperand();
    int operand2 = getRandomOperand();
    int answer;
    if (operator == '+') answer = operand1 + operand2;
    if (operator == '-') answer = operand1 - operand2;
    if (operator == '*') answer = operand1 * operand2;

    // Question #2:
    // 4 - 3 = ?
    printf("Question #%d: \n", qNum);
    printf("%d %c %d = ?\n\n", operand1, operator, operand2);
    return answer;
}


/*
 * Tells the user how many attempts they have remaining and prompts them
 * to enter their answer to the question.
 *
 * Param: attemptsRemaining - number of attempts remaining to answer
 *         the question
 * Returns: user’s answer to question
 */
int getUserAnswer( int attemptsRemaining ){
    // You have 3 attempts remaining.  Enter your answer...
    // 24
    int answer;
    printf("You have %d attempts remaining.  Enter your answer...\n", attemptsRemaining);
    scanf("%d", &answer);
    return answer;
}


/*
 * Give user MAX_ATTEMPTS to enter correct answer.
 *
 * Param: correctAnswer - the correct answer to the question
 * Return: TRUE if user enters correct answer within maximum number of
 *         attempts, FALSE otherwise.
 */
int processUserAnswers( int correctAnswer ){
    // You have 3 attempts remaining.  Enter your answer...
    // 24
    // Your answer is not correct.
    // You have 2 attempts remaining.  Enter your answer...
    // 7
    // Your answer is not correct.
    // You have 1 attempts remaining.  Enter your answer...
    // 4

    int userAnswer;
    int attempted = 0;


    userAnswer = getUserAnswer(MAX_ATTEMPTS - attempted);
    attempted++;

    while (userAnswer != correctAnswer && attempted < MAX_ATTEMPTS) {
        printf("Your answer is not correct.\n");
        userAnswer = getUserAnswer(MAX_ATTEMPTS - attempted);
        attempted++;
    }


    return userAnswer == correctAnswer;
}
