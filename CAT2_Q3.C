/*
Name: Shariff Lukalia
Reg No: PA106/G/28761/25
Description: Program to calculate weekly pay including overtime and taxes.
*/

#include <stdio.h>

int main() {
    float hoursWorked, hourlyWage;
    float grossPay, tax, netPay;

   
    printf("Enter total hours worked in a week: ");
    scanf("%f", &hoursWorked);

    printf("Enter hourly wage: ");
    scanf("%f", &hourlyWage);

   // Calculating gross pay with overtime consideration
    if (hoursWorked <= 40) {
        grossPay = hoursWorked * hourlyWage;
    } else {
        float overtimeHours = hoursWorked - 40;
        grossPay = (40 * hourlyWage) + (overtimeHours * hourlyWage * 1.5);
    }

    // calculating tax
    if (grossPay <= 600) {
        tax = 0.15 * grossPay;
    } else {
        tax = (0.15 * 600) + (0.20 * (grossPay - 600));
    }

    // calculating net pay
    netPay = grossPay - tax;

    // output results diplayed
    
    printf("Hours worked   : %.2f\n", hoursWorked);
    printf("Hourly wage    : $%.2f\n", hourlyWage);
    printf("Gross pay      : $%.2f\n", grossPay);
    printf("Tax deducted   : $%.2f\n", tax);
    printf("Net pay        : $%.2f\n", netPay);

    return 0;
}
