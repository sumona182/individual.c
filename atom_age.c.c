#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double estimateAge(double currentAmount, double initialAmount, double halfLife) {
    double age = -halfLife * log(currentAmount / initialAmount);
    return age; }
double averageAge(double halfLife) {
     double av_age = halfLife/0.693 ;
     return av_age; }

int main() {
     int choice;
double initialAmount;
 double currentAmount;
 double halfLife;

printf ("\t\t\tATOM AGE ESTIMATION\n");
printf ("\n\t\t__________________________");
printf ("\n\t\t\t WELCOME");
printf ("\n\t\t__________________________");
printf ("\n\t__________________________________");
printf ("\n\n 1. Atom's age");
printf ("\n 2. Atom's average age");
printf("\nEnter your choice to "
           "find the task\n");;
    scanf("%d", &choice);


printf("\nEnter the initial amount of radioactive material: ");
scanf("%lf", &initialAmount);
printf("\nEnter the current amount of radioactive material: ");
scanf("%lf", &currentAmount);
printf("\nEnter the half-life of the radioactive material: ");
scanf("%lf", &halfLife);

switch (choice){

case 1: double age = estimateAge(currentAmount, initialAmount, halfLife);

printf("\nEstimated age: %.2lf years\n", age);
break;

case 2:

double av_age = averageAge(halfLife);

printf(“\nAverage age: %d years\n”, av_age); break; case 3: exit (0); break; default:

printf(“\nInvalid choice. Please try again.\n”); break; }

return 0; }


