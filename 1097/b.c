#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool check(int* items, int count, int i, int currentSum) {
    if (i == count) {
        return currentSum % 360 == 0;
    }

    return check(items, count, i + 1, currentSum + items[i]) || check(items, count, i + 1, currentSum - items[i]);
}

int main() {
    int count;

    scanf("%d", &count);

    int* items = malloc(sizeof(int)*count);
    int i, total = 0;

    for (i = 0; i < count; i++) {
        scanf("%d", &items[i]);
        total += items[i];
    }

    if (total % 360 == 0) {
        printf("YES\n");
    }
    else {
        if(check(items, count, 1, items[0])) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}