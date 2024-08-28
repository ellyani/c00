#include<stdio.h>
#include<unistd.h>

void    ft_putchar (char c)
{
     write(1,&c,1);
}
int i;
int i=48;
void ft_print_numbers(void)
{
    while(i<=57)
    {
        ft_putchar(i);
        i++;

    }

}
int main(){
    ft_print_numbers();


}
