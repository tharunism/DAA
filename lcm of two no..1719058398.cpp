
#include <stdio.h>
int main()
{
    int n1, n2, max;
    printf("Enter two positive integers: ");
    scanf("%d %d", &n1, &n2);
    max = (n1>n2) ? n1 : n2;

    while(1)
    {
        if( max%n1==0 && max%n2==0 )          
            printf("The LCM of two numbers is: %d",max);
            break;
        }
        ++max;
    }
    return = 0;
}

    
