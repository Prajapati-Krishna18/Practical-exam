#include <stdio.h>
int main(){
    char op;
    printf("Enter the operator (+,-,*,/) :\n");
    scanf("%c",&op);

    int n1,n2;
    printf("Enter the two digit :\n");
    scanf("%d %d",&n1,&n2);

    switch(op){
        case '+' : printf("The sum is : %d",n1+n2);
                   break;
                   
        case '-' : printf("The Subtraction is :%d",n1-n2);
                   break;
        
        case '*' : printf("The multiplication is :%d",n1*n2);
                   break;
        
        case '/' : printf("The division is :%d",n1/n2);
                   break;
        
        default : printf("Invalide Operator");
    }
    return 0;
}