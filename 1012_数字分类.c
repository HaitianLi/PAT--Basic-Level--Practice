#include<stdio.h>

int main () {

    int array[5] = {0};
    int num;
    int offset = 1;
    int three_count = 0;
    int two_count = 0;
    int Big_N;
    
    scanf("%d", &Big_N);

    for (int i = 0; i < Big_N; i++) {
        scanf("%d", &num);
        //printf("%d ", num);

        switch (num % 5) {

            case 0: {
                if (num % 2 == 0) {
                    array[0] += num;
                }
                break;
            }

            case 1: {
                array[1] += num * offset;
                offset *= -1;
                two_count++;
                break;
            }   

            case 2: {
                array[2]++;
                break;
            }

            case 3: {
                array[3] += num;
                three_count++;
                break;
            }

            case 4: {
                if (num > array[4]) {
                    array[4] = num;
                }
                break;
            }
        }
    }

    (array[0] == 0) ? printf("N ") : printf("%d ", array[0]);
    (two_count == 0) ? printf("N ") : printf("%d ", array[1]);
    (array[2] == 0) ? printf("N ") : printf("%d ", array[2]);
    (array[3] == 0) ? printf("N ") : printf("%.1f ", (1.0) * array[3] / three_count);
    (array[4] == 0) ? printf("N") : printf("%d", array[4]);
    return 0;
}