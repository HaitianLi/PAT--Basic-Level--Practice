#include<stdio.h>
#include<math.h>

int isPrime (int n) {

    if (n < 2) {
        return 0;
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}   


int main () {

    int m, n;
    int count = 0;
    int rowCount = 0;
    scanf("%d %d", &m, &n);

    for (int i = 2 ; count <= n ; i++) {
        if (isPrime(i)) {
            count++;
            if (count >= m && count <= n) {
                rowCount++;
                if (count == n) {
                    printf("%d", i);
                    break;
                }
                printf("%d%c",i, (rowCount % 10 == 0)?'\n':' ');
            }
            
        }
    }

    return 0;
}