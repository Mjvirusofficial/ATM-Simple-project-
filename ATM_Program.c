//Starting ATM Program#

#include <stdio.h>

int main() {
printf("             SBI ATM\n""\n\n");



printf("Select Language. ...\n");
printf("[1].English\n");
printf("[2].Hindi\n");
int g;
scanf("%d",&g);
switch(g){
    case 1:printf("English\n");
    break;
    case 2:printf("Hindi\n");
    printf("The language is not available right now\n""\n");
    break;
 }

printf("Enter 4-Digit ATM Pin: ...\n");
int a;
scanf("%d",&a);
 
printf(" Select the type of Transaction: ...\n""\n");

 
printf("          [1].Diposite Amount\n\n");
printf("          [2].Withdrawl Amount\n\n");
printf("          [3].Transfer Amount\n\n");
printf("          [4].Balance Enquiry\n\n");
printf("          [5].Exit:\n\n");
int b,c,d,f;
int c1=20000;


scanf("%d",&f);


switch(f){
    case 1:printf("Type of Account: ...\n""\n");
     printf("[1].Current Account\n");
    printf("[2].Savings Account\n");
    break;
    
    case 2:printf("Type of Account: ...\n""\n");
     printf("[1].Current Account\n");
    printf("[2].Savings Account\n");
    break;
    
    case 3:printf("Type of Account: ...\n""\n");
     printf("[1].Current Account\n");
    printf("[2].Savings Account\n");
    break;
    
    case 4:printf("Type of Account: ...\n""\n");
     printf("[1].Current Account\n");
    printf("[2].Savings Account\n");
    break;
}




scanf("%d",&b);


switch(b) {
    
case 1: printf("\n\nEnter Amount...\n>>>\n");
scanf("%d",&c);
printf("\nYour balance ₹%d has been deposited#",c);
printf("            \n\nThank you!");
printf("\n\n\nYour deposited balance is ₹%d",c);
printf("\n\n\nYour current balance is ₹%d",c+c1);
       break;      
 
    
       
  
case 2: printf("\n\nEnter Amount...\n>>>\n");
scanf("%d",&d);

printf("\nYour tranjaction has been succesfull",d);
printf("            \n\nThank you!");
printf("\n\n\nYour Withdrawl₹%d",d);
if (c1>=d){
printf("\n\n\nYour current balance is ₹%d",d-c1);
}
else {
        printf("You don't have any balance");

}
}
    return 0;
}
