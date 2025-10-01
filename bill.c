#include<stdio.h>
int main() {
    int a,b,c,d;
    printf("First Month Consumed Unit : ");
    scanf("%d",&a);
    printf("Second Month Consumed Unit : ");
    scanf("%d",&b);
    printf("Third Month Consumed Unit : ");
    scanf("%d",&c);
    printf("Fourth Month Consumed Unit : ");
    scanf("%d",&d);
    float total=0;
    if(a>=0){
        printf("First Month Bill :Rs. %f\n", a*0.5);
        total+=a*0.5;
    }      else printf("Invaid Unit for First Month\n");

    if(b>=0){
        printf("Second Month Bill :Rs. %f\n",b*0.75);
        total+=b*0.75;
    }      else printf("Invaid Unit for Second Month\n");

    if(c>=0){
        printf("Third Month Bill :Rs. %f\n",c*1.20);
        total+=c*1.20;
    }     else printf("Invaid Unit for Third Month\n");

    if(d>=0){
        printf("Fourth Month Bill :Rs. %f\n",d*1.50);
        total+=d*1.50;
    }     else printf("Invaid Unit for Fourth Month\n");

    //Total Bill with 20% GST
    printf("Total Bill With 20%% GST :Rs. %f\n",total*1.2);
    return 0;
}