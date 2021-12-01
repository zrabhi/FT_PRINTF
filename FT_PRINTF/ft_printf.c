#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
/*static int ft_strlen(const char str)
{
    int i;
    
    i = 0;
    while(str[i])
        i++;
    return(i);
}*/
void    ft_putstr(char *s)
{
    int i;

    i = 0;
    while(s[i])
        write(1, &s[i++], 1);
}
static void    ft_putchar(char c)
 {
        write(1, &c, 1);               
 }
 //int ft_printf(const char format, int args, ...)
 //{
   // va_list
 //q
 //}
 int ft_print(char *format, ...)
 { 
    char j;
    char  *k;
    int d;
   va_list(ap);
   va_start(ap, format);
   int i = -1;
   while(format[++i] == '%')
      {
      if(format[i + 1] == 's')
        { 
         k = va_arg(ap, char *);
         ft_putstr(k);  
        }  
       if(format[i + 1] == 'c') 
        {
          j = va_arg(ap, char);
          ft_putchar(j);        
        } 
        if(format[i + 1] == 'd')
          {
            d = va_arg((ap), int);
            ft_putchar(d);
          }      
      }    
   va_end(ap);
}
int main()
{

    ft_print("%d", 1);
    return(0);
}