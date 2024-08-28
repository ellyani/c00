#include<stdio.h>
#include<unistd.h>
#include<stdbool.h>
void ft_putchar(char c)
    {
        write(1,&c,1);
    }

void    ft_affiche_comb(int a, int b, bool end)
{
    ft_putchar(48+a / 10);
    ft_putchar(48+a % 10);
    ft_putchar(' ');
    ft_putchar(48+b / 10);
    ft_putchar(48+b % 10);
    if (end)
    {
        ft_putchar(',');
        ft_putchar(' ');
    }
    
}
void    ft_print_comb2(void)
{
    int a;
    int b;
    bool end;

    a = 0;
    while(a<=99)
    {
        b = a + 1;
        while(b<=99)
        {
            end = !(a==98 && b==99);
            ft_affiche_comb(a,b,end);
            b++;

        }
        a++;

    }

}
int main()
{
    ft_print_comb2();
    return 0;
}