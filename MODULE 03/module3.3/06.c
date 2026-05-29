#include<stdio.h>
int main() {
    int a[10][10], b[10][10], sum[10][10], sub[10][10], mul[10][10];
    int i, j, k, r, c;
    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);
    printf("\nEnter elements of first matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter elements of second matrix:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            sub[i][j] = a[i][j] - b[i][j];
        }
    }
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            mul[i][j] = 0;
            for(k = 0; k < c; k++) {
                mul[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("\nAddition of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nSubtraction of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }
    printf("\nMultiplication of matrices:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }
}