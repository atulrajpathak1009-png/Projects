#include <stdio.h>
int main () {
    char ch;
    printf ("Enter a character:");
    scanf ("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        if (ch >= 'A' && ch <= 'Z') {
            printf ("'%c' is an uppercase alphabet.\n", ch);
        } else {
            printf ("'%c' is an lowercase alphabet.\n", ch);
        }
    } else {
        printf ("'%c' is not an alphabet.\n", ch);
    }
}