/*
 Design a structure named "Car" to store details like car ID, model, and rental rate per day.
Write a C program to input data for n cars, calculate the total rental cost for a specified number of
days, and display the results.
*/


#include<stdio.h>
struct car{
    int car_id;
    int model;
    int rental_perday;
};
int main(){
    struct car c[10];
    int i, n, days, trcost=0;
    printf("\t\t\t**********INPUT**********\n\n");
    printf("Enter the number of records:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the Car Id, Model and Rental rate per day for car %d \n",i+1);
        scanf("%d",&c[i].car_id);
        scanf("%d",&c[i].model);
        scanf("%d",&c[i].rental_perday);
        trcost+= c[i].rental_perday;
    }
    printf("Enter the number of days: ");
    scanf("%d",&days);
    printf("\t\t\t**********OUTPUT**********\n\n");
    printf("The total rental rate for %d days is %d ",days, trcost*days);
    return 0;
}
