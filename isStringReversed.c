#include <stdio.h>
// FINAL PROJECT FOR EDX COURSE C PROGRAMMING: MODULAR PROGRAMMING AND MEMORY MANAGEMENT

int isReverse(char *, char *);

int main(void) {
    char a[100];
    char b[100];
    char c[100];
    int result = 0;
    int i = 0;

    scanf("%s", a);
    scanf("%s", b);

    while ( *(a + i) != '\0') {
        *(c + i) = *(a + i);
        i = i + 1;
    }
    result = isReverse(c, b);
    if (result == 0) {
        printf("%s is the reverse of %s\n", a, b);
    } else {
        printf("%s is not the reverse of %s\n", a, b);
    }
    return 0;
}

int isReverse(char *x, char *y) {
        int l = 0;
        char tmp;
        int i;
        int j;
        int returnVal = 0;
        while ( *(x + l) != '\0') {
                l = l + 1;
        }

        j = l - 1;

        for (i = 0; i < ((l - 1) / 2); i++) {
                tmp = *(x + i);
                *(x + i) = *(x + j);
                *(x + j) = tmp;
                j = j - 1;
        }

        for (i = 0; i < (l - 1); i++) {
                if ( *(x + i) != *(y + i) ) {
                        returnVal = 1;
                        break;
                }
        }

        if (returnVal == 0) {
                return 0;
        } else {
                return 1;
        }

}
