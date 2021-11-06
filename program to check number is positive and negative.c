#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;
    printf("\n enter number");
    scanf("%d",&no);

    if(no>0)
    {
        printf("\n %d is positive number",no);
    }
    else
    {
        printf("\n %d is negative number",no);
    }
    getch();
    return 0;

}
