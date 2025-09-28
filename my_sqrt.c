#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

int ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1, "-2147483648", 11);
        return 0;
    }

    if (nb < 0)
    {
        write(1, "-", 1);
        nb = -nb;
    }
    if (nb >= 10)
    ft_putnbr(nb / 10);
    ft_putchar(nb % 10 + '0');
    return nb;
}

int ft_atoi(char *str)
{
    int result = 0;
    int sign = 1;
    int i = 0;

    //Skip White space
    while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    //Handle sign
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
    {
        i++;
    }
    // Converting digits
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }
    return (sign * result);
}

int my_sqrt(int n)
{
    if (n < 0) 
    return 0;

    if (n == 0 || n == 1) 
    return n;

    int i = 1;
    while(i * i <= n)
    {
        i++;
    }
    return i - 1;
}

int main(int argc, char **argv)
{

    if (argc < 2)
    {
        return 1;
    }

    int number = ft_atoi(argv[1]);

    if (number < 0)
    {
        write (1, "Error! Invalid Input!\n", 22);
        return 1;
    }
    int result = my_sqrt(number);

    write (1, "Square root of ", 15);
    ft_putnbr(number);
    write (1, " is: ", 5);
    ft_putnbr (result);

    return 0;
}