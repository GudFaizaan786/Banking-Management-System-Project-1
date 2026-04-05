#include<stdio.h>
long long acc_no;
char name[50];
int balance = 0;
int account_created = 0;
int amount = 0;
int option;

int Bank_Menu_Bar()
{
    printf("\n---------------- Banking Management System project ---------------------\n");
    printf("--------------------------------------------------------------------------\n");
    printf("-----------------------  Banking Menu  ---------------------------------\n\n");
    printf("------------------- Press 1 to Create Account          -------------------\n");
    printf("******************* Press 2 to Deposit                 *******************\n");
    printf("------------------- Press 3 to Withdraw                -------------------\n");
    printf("******************* Press 4 to Check balance           *******************\n");
    printf("------------------- Press 5 to Display Account Details -------------------\n");
    printf("******************* Press 6 to Exit                    *******************\n");
    printf("--------------------------------------------------------------------------\n");

    printf("\n\n Please select your option from Menu: ");
    scanf("%d",&option);

    return option;

}


int Create_Account()
{
  int count ;

  while(1) 
{
   count=0;

  printf("\nPlease enter your (11 digits) Account number: ");
  scanf("%lld",&acc_no);
  
  long long num = acc_no;
  while(num!=0) 
  {
      count++;
      num /= 10;
  }
  
  if(count != 11)
  {
    printf("Error: Account number must be 11 digits only! Retry \n");
    continue;
  }
  
  printf("\nPlease enter your Good name: ");
  scanf("%s", name);
  
  while(1)
  {

  printf("\nPlease enter your initial amount: ");
  scanf("%d",&amount);

  if(amount < 500)
  {
    printf("Error: Minimum amount should be 500 \n");
    continue;
  }
   break;
}
   
   
  balance = amount;
  account_created = 1;

  printf("\nAccount Created successfully!\n ");

  break;
}
  return 0;
}

int Deposit ()
{
  while(1)
  {

  printf("\nPlease enter the amount to be deposit: ");
  scanf("%d",&amount);

  if(amount < 100)
  {
    printf("Error: Deposit amount should be atleast 100 \n");
    return 0;
  }
  
  balance += amount;
  
  printf("\n------- Amount of %d Depositted Successfully! ---------- \n",amount);
 
  break;

}
   
  return 0;
}

int Withdraw()
{
  printf("\nPlease enter amount to be withdraw: ");
  scanf("%d",&amount);

  if(amount > balance)
  {
    printf("\n****** Error: Insufficient balance! ********* \n");
  }
  else
  {
    balance -= amount;
    printf("\n----------- Withdrawal of amount %d successfully done ------------- \n",amount);
  }
  return 0;
}


int Check_Balance()
{
  printf("\n Your Current Balance is: %d \n",balance);

  return 0; 
}
 
  int Display_Acc_Details()
 {
    printf("\n ----------- Account Details ---------------- \n");
    printf("\n ----- Account Number: %lld    ------- \n",acc_no);
    printf("\n ----- Account Holder Name: %s ------- \n",name);
    printf("\n ----- Account Balance: %d     ------- \n",balance);

    return 0;
 }
 
 int Exit()
  {
   
    return  0;
  }



int main()
{
 int output;
 

while (1)
 {
    output = Bank_Menu_Bar() ;
    
   if (output==1)
    {
       Create_Account();
    }

    else if (output==2)
    {
      if(!account_created)
      {
        printf("\n Error: Please create an account first\n");
      }
      else
      {
        Deposit();
      }
    }

    else if (output==3)
    {
      if(!account_created)
      {
        printf("\n Error: Please create an account first\n");
      }
      else
      {
        Withdraw();
      }
    }

    else if (output==4)
    {
      if(!account_created)
      {
        printf("\n Error: Please create an account first\n");
      }
      else
      {
        Check_Balance();
      }
    }

    else if (output==5)
    {
      if(!account_created)
      {
        printf("\n Error: Please create an account first\n");
      }
      else
      {
        Display_Acc_Details();
      }
    }

    else if (output==6)
    {
      printf("\n Exiting.....\n\n\n");  
      break;
       
    }
     else
      {
        printf("\n Invalid option entered try entering again\n ");
      }
  }
  return 0;

}


