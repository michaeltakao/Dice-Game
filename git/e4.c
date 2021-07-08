#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main(){
int n1,n1;
printf("Rolling the dice...\n");
srand(time(NULL));
n1 = 1 + rand() % 6;
n2 = 1 + rand() % 6;

printf("Die 1: %d\n,n1);
printf("Die 2: %d\n,n2);
printf("Total value: %d\n",n1 + n2);
return 0;
}
