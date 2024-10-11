#include<stdio.h>

int main()
{
    int customerID;
    int customername;
    int unitsconsumed,totalbill,surchargerate;
    
    //prompt the user for input
    printf("enter customer ID: ");
    scanf("%d",customerID);
    printf("enter customer name: ");
    scanf("%s",customername);
    printf("enter units consumed: ");
    scanf("%f",unitsconsumed);
    
    //calculate the bill based on units consumed
    if(unitsconsumed<200){
        totalbill=unitsconsumed*1.20;
        }
        else if(unitsconsumed>=200 && unitsconsumed<400){
        totalbill=unitsconsumed*1.50;
        }
        else if(unitsconsumed>=400 && unitsconsumed<600){
        totalbill=unitsconsumed*1.80;
        }
        else  {
        totalbill=unitsconsumed*2.00;
        }
        //apply surcharge if the bill exceeds sh 400
        if (totalbill>400){
        totalbill +=(totalbill*surchargerate);
        }
        //ensure minimum bill is sh100
        if (totalbill<100){
        totalbill=100;
        }
        //Display the output
        printf("customer ID:%d\n",customerID);
        printf("customer name:%s\n",customername);
        printf("unit consumed:%2f\n",unitsconsumed);
        printf("Total amount to pay:sh %2f\n",totalbill);
        
    return 0;
}