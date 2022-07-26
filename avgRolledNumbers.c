#include <stdio.h>

// FINAL PROJECT FOR EDX COURSE C PROGRAMMING: GETTING STARTED

/*You are rolling a red, a yellow and a green standard dice (whose sides each have the numbers 
1-6 on them) and combine them to a 3-digit number by using the red value as the ones place, 
the yellow value as the tens place and the green value as the hundreds place. 
For example, if you rolled a 3 with red, a 5 with yellow and 2 with green then the combined 
3-digit number would be 253.

You repeat this process and your job is to continuously find the average of all of those 
3-digit numbers.

More precisely, you need to first read an integer that tells you how many 3-digit numbers 
you'll be averaging. Next, you need to read the red value, then the yellow value, 
then the green value of the first throw and print out the corresponding 3-digit number 
as well as the current average with one decimal place. Then you repeat this process for 
the given number of rounds. Here is a sample run:

Input
3
3 5 2
4 2 1
1 6 4

Output
1. you rolled: 253, current average: 253.0
2. you rolled: 124, current average: 188.5
3. you rolled: 461, current average: 279.3 */

int main(void) {
    int numOfRolls = 0;
    int rDieRoll = 0;
    int yDieRoll = 0;
    int gDieRoll = 0;
    int i = 0;
    int total = 0;
    double avg = 0.0;
    
    scanf("%d", &numOfRolls);
    
    for (i = 0; i < numOfRolls; i++) {
        scanf("%d %d %d\n", &rDieRoll, &yDieRoll, &gDieRoll);
        total = total + (rDieRoll + (yDieRoll * 10) + (gDieRoll * 100));
        avg = (double) total / (i + 1);
        printf("%d. you rolled: %d%d%d, current average: %.1lf\n", i+1, gDieRoll, yDieRoll, rDieRoll, avg);
    }
    
    return 0;
}
