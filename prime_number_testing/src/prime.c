#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "F:\codeblocks\prime\prime_number\inc\prime.h"


bool check(int num)
{
    if(num==0)
    {
        return false;
    }
    else if(num<0)
    {
        return false;
    }
    else if(num==1)
    {
        return false;
    }
    else{
        int found=0;
        int half = num/2;
        for(int i=2; i<=half;i++)
        {
            int div = num%i;
            if(div==0)
            {
                return false;
                found=1;
                break;
            }
        }
        if(found==0)
        {return true;}
    }
    return false;
}
/*int main()
{
    int number;
    printf("Enter the Number ");
    scanf("%d",&number);
    check(number);
    return 0;
}
*/
