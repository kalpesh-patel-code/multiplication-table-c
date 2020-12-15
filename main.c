#include <stdio.h>
#include <conio.h>

int countdigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        n /= 10;
        count++;
    }
    return count;
}

int main()
{
    int n, i, ans;
    printf("Enter a number:\t");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        ans = n * i;
        printf("\t%d x %*d = %*d\n", n, 2, i, countdigit(n) + 1, ans);
    }
    getch();
    return 0;
}