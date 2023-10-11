#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 on success, 98, 99, or 100 on failure
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    int (*oprt)(int, int);

    if (argc != 4)
    {
        printf("Error\n");
        return (98);
    }

    num1 = atoi(argv[1]);
    num2 = atoi(argv[3]);

    oprt = get_op_func(argv[2]);

    if (oprt == NULL)
    {
        printf("Error\n");
        return (99);
    }

    if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
    {
        printf("Error\n");
        return (100);
    }

    result = oprt(num1, num2);
    printf("%d\n", result);

    return (0);
}

