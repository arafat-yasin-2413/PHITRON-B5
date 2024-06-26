#include<stdio.h>
int main()
{
    char a[100],b[100];
    scanf("%s%s",a,b);

    int i = 0;
    while(1)
    {
        // 1. jodi 2 tai sesh hoye jay
        if(a[i] == '\0' && b[i] == '\0')
        {
            printf("Same , i = %d\n",i);
            break;
        }

        // 2. jodi prothom ta sesh hoye jay
        else if(a[i] == '\0')
        {
            printf("A choto , i = %d\n",i);
            break;
        }

        // 3. jodi porer ta sesh hoye jay
        else if(b[i] == '\0')
        {
            printf("B choto , i = %d\n",i);
            break;
        }

        // মিল/অমিল চেক করবো এখন
        if(a[i] == b[i])
        {
            i++;
        }
        else if(a[i]<b[i])
        {
            printf("A choto (null painai), i = %d\n",i);
            break;
        }
        else if(b[i] < a[i])
        {
            printf("B choto (null painai), i = %d\n",i);
            break;
        }


    }
    
    
    return 0;
}