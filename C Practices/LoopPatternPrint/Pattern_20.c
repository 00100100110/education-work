#include<stdio.h>
int main(){

    int row = 5;
    int column = 5;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",j + 64);
        }
        printf("\n");
    }
    

    return 0;
}