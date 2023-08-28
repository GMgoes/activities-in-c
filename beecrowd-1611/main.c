#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 0;
    int b = 0;
    long long int fat_one = 0;
    long long int fat_two = 0;
    long long int sum = 0;
    while(scanf("%d %d", &a, &b) != -1){
        for(fat_one = 1; a > 1; a = a - 1){
              fat_one = fat_one * a;
        }
        for(fat_two = 1; b > 1; b = b - 1){
              fat_two = fat_two * b;
        }
        sum = fat_one + fat_two;
        printf("%lld \n",sum);
    }
    return 0;
}
