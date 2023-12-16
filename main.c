#include <stdio.h>
#include <string.h>
#include <conio.h>
int main()
{
    int n,i=0,j=0;
    printf("enter numbere n :");
    scanf ("%d",&n);
    char msg[n],str[n];
    gets(msg);
    while(i<=strlen(msg))
    {
        if(msg[i]==msg[i+1])
        {
            i=i+2;
        }
         else
         {str[j]=msg[i];
         i++;
         j++;
         }
    }
    printf("%s",str);
    getch();
    return 0;
}