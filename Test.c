#include <stdio.h>
int prime(int num)
{
    if(num == 4)
    {
        return 0;
    }
    for(int i = 2;i<num/2;i++)
    {   
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int primesum(int num) 
{
    int icheck;
    int jcheck;
    for(int i = 2;i<num;i++)
    {
        icheck = 0;
        if(i == 4)
        {
            icheck++;
        }
        for(int ic = 2;ic<i/2;ic++)
        {   
            if(i%ic == 0)
            {
                icheck++;
            }
        }
        if(icheck == 0)
        {
            for(int j = 2;j<num;j++)
            {
                jcheck = 0;
                if(j == 4)
                {
                    jcheck++;
                }
                for(int jc = 2;jc<j/2;jc++)
                {   
                    if(j%jc == 0 || j == 4)
                    {
                        jcheck++;
                    }
                }
                if(jcheck == 0 && (i+j) == num)
                {
                    if(j>=i)
                    {  
                    printf("%d is a combination of %d and %d \n",num,i,j);
                    }
                }
            }
        }
    }
}

  
void main()
{
    int prm;
    printf("enter number:");
    scanf("%d",&prm);
    if(prime(prm))
    {
        printf("number is prime \n");
    }
    else
    {   
        printf("number is composite \n");
    }
    primesum(prm);
}