#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

bool checkBracketSequence(char* s1, char* s2) {
    int l1 = strlen(s1);
    int l2 = strlen(s2);

    if (l1 == 0 || l2 == 0) return false;

    int c = 0, i;

    for (i = 0; i < l1; i++) {
        if (s1[i] == '(') c++;
        else if (s1[i] == ')') c--;

        if (c < 0) {
            return false;
        }
    }

    for (i = 0; i < l2; i++) {
        if (s2[i] == '(') c++;
        else if (s2[i] == ')') c--;

        if (c < 0) {
            return false;
        }
    }

    return c == 0;
}

int main() {
    int i, j, n, c = 0;
    char buffer[500000];

    scanf("%d", &n);

    char** items = malloc(sizeof(char*)*n);

    for (i = 0; i < n; i++) {
        scanf("\r\n%s", buffer);

        int size = strlen(buffer);
        items[i] = malloc(sizeof(char)*(size+1));

        strcpy(items[i], buffer);
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (items[i] != NULL && items[j] != NULL) {
                if (checkBracketSequence(items[i], items[j])) {
                    free(items[i]);
                    free(items[j]);
                    items[i] = NULL;
                    items[j] = NULL;
                    c++;
                    break;
                }
                else if (checkBracketSequence(items[j], items[i])) {
                    free(items[i]);
                    free(items[j]);
                    items[i] = NULL;
                    items[j] = NULL;
                    c++;
                    break;
                }
            }
        }
    }

    printf("%d\n", c);

    return 0;
}