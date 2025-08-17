#include<stdio.h>
#include<conio.h> 
int factorial_fun(int n) {

int factt=1;
for(int i=1; i<=n; i++) {
 factt=factt*i;
}
return factt;

}
void main() {
    int num;
    do {
    printf("Enter a non_negative integer:");
    scanf("%d",&num);
    }
    while(num<0);
    int fact= factorial_fun(num);
    printf("%d is the factorial of the %d",fact,num);
}

