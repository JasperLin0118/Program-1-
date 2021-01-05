#include <stdio.h>
#include <string.h>
int main()
{
    while(getchar()!=EOF)
    {
        char num=getchar();
        int count=1;
        while(num!='\n')
            count++;
        printf("%d", count);
    }
}
