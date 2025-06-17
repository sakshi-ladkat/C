/* 16. Read 10 integers from the user and perform addition of all even numbers and
 multiplication of all odd numbers*/

int main()
{
    int i, n, sum = 0, mul = 1;
    ;
    printf("Enter 10 integers : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            sum += n;
        }
        else
        {
            mul += n;
        }
    }
    printf("Sum of Even Numbers = %d", sum);
    printf("Multiplication of odd numbers = %d", mul);
    return 0;
}