#include<stdio.h>
#include<string.h>
int main()
{
    char a[11];
    char b[11];

    scanf("%s",a);
    scanf("%s",b);

    int lenA= strlen(a);
    int lenB= strlen(b);


    // printf("%s\n",a);
    // printf("%s\n",b);
    
    char new_st[22];
    for(int i=0; i<lenA; i++)
    {
        new_st[i] = a[i];
    }
    int k = lenA;
    for(int j = 0; j<lenB; j++)
    {
        new_st[k] = b[j];
        k++;
    }
    new_st[lenA+lenB] = '\0';

    printf("%d %d\n",lenA,lenB);

    printf("%s\n",new_st); // এভাবে প্রিন্ট করলে শেষে অতিরিক্ত a আস্তেছে কেন? 


    // for(int i=0; i<lenA+lenB; i++)
    // {
    //     printf("%c",new_st[i]);
    // }
    // printf("\n");

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n",a,b);

    return 0;
}


// Solved version of AD vaiya

/*
#include<stdio.h>
#include<string.h>

int main() {
    char a[11];
    char b[11];

    scanf("%10s", a); 
    scanf("%10s", b); 

    int lenA = strlen(a);
    int lenB = strlen(b);

    char new_st[22];
    int k = 0; 

    for (int i = 0; i < lenA; i++) {
        new_st[k] = a[i];
        k++;
    }

    for (int j = 0; j < lenB; j++) {
        new_st[k] = b[j];
        k++;
    }

    new_st[k] = '\0'; 

    printf("%d %d\n", lenA, lenB);
    printf("%s\n", new_st);

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    printf("%s %s\n", a, b);

    return 0;
}
*/