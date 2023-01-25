#include <stdio.h>
#include <stdbool.h>
int main(){
    bool status = false;
    char str[100];
    int i;
    double x;
    printf("Input something bool,char,int,double ::");
    scanf("%s %d %lf",str,&i, &x);
    printf("\n You are entered:%s\n %d \n %lf\n",str,i,x);
return 0;
}