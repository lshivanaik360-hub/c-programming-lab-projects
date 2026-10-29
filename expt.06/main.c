#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, choice;

    printf("enter two numbers:");
    scanf("%d%d", &a,&b);

    while(1)
    {
        printf("\n\n1. addition");
        printf("\n2. subtraction");
        printf("\n3. multiplication");
        printf("\n4. division");
        printf("\n5. remainder");
        printf("\n6. exit");

        printf("\n enter your choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("addition=%d", a+b);
            break;

        case 2:
            printf("subtraction=%d", a-b);
            break;

        case 3:
            printf("multiplication=%d", a*b);
            break;

        case 4:
            if(b!=0)
               printf("division=%d", a/b);
            else
                printf("cannot divide by zero.");
            break;

        case 5:
            if(b!=0)
                printf("remainder=%d", a%b);
            else
                printf("cannot find remainder with zero.");
            break;

        case 6:
            printf("program ended.");
            return 0;

        default:
            printf("invalid choice.");


      }
    }
    return 0;

}
