#include<stdio.h>
int main(void)
{
    int n,row,col;
    scanf("%d", &n);
    printf("%d\n", (n * n + 1) / 2);
    for(row = 0; row < n; row++){
        for(col = 0; col < n; col++){
            if((row + col)%2){printf(".");}
            else{printf("C");}
        }
        printf("\n");
    }
    return 0;
}
