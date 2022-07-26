#include <stdio.h>
// FINAL PROJECT FOR EDX COURSE C PROGRAMMING: LANGUAGE FOUNDATIONS

int main(void) {

    int numOfStudents = 0;
    int i;
    int j;
    int swapScore = 0;
    int swapOrder = 0;
    int order = 0;
    char name[51];

    scanf("%d\n", &numOfStudents);

    int scores[numOfStudents][2];

    for (i = 0; i < numOfStudents; i++) {
        scanf("%d", &scores[i][0]);

        scores[i][1] = (i + 1);
    } // end if

    for (i = 0; i < numOfStudents - 1; i++) {
        for (j = 0; j < numOfStudents - i - 1; j++) {
            if (scores[j][0] < scores[j+1][0]) {
                swapScore = 0;
                swapOrder = 0;
                swapScore = scores[j][0];
                swapOrder = scores[j][1];
                scores[j][0] = scores[j+1][0];
                scores[j][1] = scores[j+1][1];
                scores[j+1][0] = swapScore;
                scores[j+1][1] = swapOrder;
            } //end if
        } // end inner for
    } // end outer for

    for (i = 0; i < numOfStudents; i++) {
        scanf("%s", name);
        order++;
        for (j = 0; j < numOfStudents; j++) {
            if (scores[j][1] == order) {
                printf("%s rank is %d\n", name, j + 1);
                break;
            } // end if
        } // end inner for
    } //end outer for
    return 0;
} // end main

