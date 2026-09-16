# include<stdio.h>
int main()
{
    int pass;
    printf("enter the marks");
    scanf("%d",&pass);
    if(pass>=50)
    {
        printf("your pass\n");
        return 0;
    }
       printf("your fail \n");
       return 0;
}