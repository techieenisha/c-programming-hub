/*0,1,1,2,3,5,8...upto n terms.W.C.P to display the given sequence*/
#include <stdio.h>

int main()
{
    int n, i, a = 0, b = 1, c;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("%d %d ", a, b);

    for (i = 3; i <= n; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    return 0;
}
