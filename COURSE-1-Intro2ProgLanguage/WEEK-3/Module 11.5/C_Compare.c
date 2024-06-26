#include<stdio.h>
int main()
{
    char a[21],b[21];
    scanf("%s%s",a,b);

    int i = 0;
    while(1)
    {
        // if(a[i] == '\0' && b[i] == '\0')
        // {
        //     break;
        // }

        // else if(a[i] == '\0')
        // {
        //     break;
        // }

        // else if(b[i] == '\0')
        // {
        //     break;
        // }

        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i] < b[i])
        {
            printf("%s\n",a);
            break;
        }
        else 
        {
            printf("%s\n",b);
            break;
        }
    }
    
    return 0;
}