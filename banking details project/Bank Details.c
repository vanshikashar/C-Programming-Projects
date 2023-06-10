#include<stdio.h>
#include<conio.h>
int list();
void deposit();
void last();
void transfer();
void withdraw();
void checkDetail();
int TotalAmount=1000,Amount,Amo,Tr,TotalDeposit=0,TotalWith=0;
int TotalTr=0;
int Acc;
char a[50];
void main()
{
    printf("\nEnter your Name: ");
    gets(a);
    printf("\nEnter your Acc Number: ");
    scanf("%d",&Acc);
    while(1)
    {
        switch(list())
        {
        case 1:
            deposit();
            TotalDeposit+=Amount;
            break;
        case 2:
            withdraw();
            if(Amo<=TotalAmount)
                TotalWith+=Amo;
            break;
        case 3:
            transfer();
            if(Tr<=TotalAmount)
                TotalTr+=Tr;
            break;
        case 4:
            checkDetail();
            break;
        case 5:
            last();
            getch();
            exit(0);
        default:
            printf("\nInvalid choice");
        }
        getch();
    }
}
int list()
{
    int ch;
    printf("\n1. Deposit Amount: ");
    printf("\n2. Withdraw Amount: ");
    printf("\n3. Transfer Amount: ");
    printf("\n4. Check Detail: ");
    printf("\n5. Exit: ");
    printf("\nEnter your choice: ");
    scanf("%d",&ch);
    return(ch);
}
void deposit()
{
    printf("\nEnter the amount you want to deposit: ");
    scanf("%d",&Amount);
    TotalAmount+=Amount;
}
void withdraw()
{
    printf("\nEnter the amount you wish to withdraw: ");
    scanf("%d",&Amo);
    if(Amo<=TotalAmount)
        TotalAmount-=Amo;
    else
            printf("\nLess amount Withdraw is not possible");
}
void transfer()
{
    printf("Enter the amount you want to Transfer: ");
    scanf("%d",&Tr);
    if(Tr<=TotalAmount)
        TotalAmount-=Tr;
    else
        printf("\nLess amount Transfer is not possible");
}
void checkDetail()
{
    printf("\nTotal amount=%d",TotalAmount);
    printf("\nTotal Deposited amount=%d",TotalDeposit);
    printf("\nTotal withdraw amount=%d",TotalWith);
    printf("\nTotal transfered amount=%d",TotalTr);
}
void last()
{
    printf("\n*****************************************************\n");
    printf("\nYour Name=%s",a);
    printf("\nAccount Number=%d",Acc);
    printf("\nTotal amount=%d",TotalAmount);
    printf("\nTotal Deposited amount=%d",TotalDeposit);
    printf("\nTotal withdraw amount=%d",TotalWith);
    printf("\nTotal transfered amount=%d",TotalTr);
    printf("\n\n*******************THANKS**************************\n");
}
