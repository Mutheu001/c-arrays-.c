//3 dimension array
#include <stdio.h>

int main() {
    int i, j, k;
    int marks[2][2][3] = {{{12, 24, 30}, {48, 60, 72}}, {{12, 24, 30}, {48, 60, 72}}};

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            for (k = 0; k < 3; k++) {
                printf("marks[%d][%d][%d] = %d\n", i, j, k, marks[i][j][k]);
            }
        }
    }

    return 0;
}