#include<stdio.h>
int main(){
    float cp, sp, p, l;
    printf("Enter cost price and selling price:");
    scanf("%f%f",&cp, &sp);
    p = sp - cp;
    l = cp - sp;
    if (p>0){
        printf("the seller made a profit of rs. %f\n",p);
    }
    if (l>0){
        printf("the seller made a profit of rs. %f\n",l);
    }
    if (p==0){
        printf("the seller made a profit of rs. %f\n");
    }    
    return 0;    
}    
     
