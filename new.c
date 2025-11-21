//write a cprogram with function with variadic arguments!
#include <stdio.h>
#include <stdarg.h>
void add(int count, ...)

{
    int result = 0;
    va_list list;
    va_start (list, count);
    for(int i=1; i<= count; i++)
    {
        int n = va_arg(list, int);
        result = result+n;
    }
    va_end(list);
    printf("%d ", result);
}

void main()
{
    add(5,46,67,78,89,90);
}
