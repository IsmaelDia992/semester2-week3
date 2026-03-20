#include <stdio.h>

/*
 * Portfolio submission
 * Name: Ismael Charly Diarrassouba
 * ID: 201952742
 */

int main( void ) {

    // Define and initialise variables for the problem data 
    double salary = 36250.00;
    double ni_rate = 8.0;
    double tax_rate = 15.0;
    double tax_free_allowance = 12500.00;

    // Variables for results
    double ni_contribution;
    double tax_contribution;
    double remaining_after_ni;
    double taxable_income;
    double take_home_salary;

    // 1. Calculate the NI contribution (applied to total salary)
    ni_contribution = salary * (ni_rate / 100.0);

    // 2. Calculate salary remaining after NI deduction
    remaining_after_ni = salary - ni_contribution;

    // 3. Calculate Tax (applied only to amount over £12,500 after NI)
    if (remaining_after_ni > tax_free_allowance) {
        taxable_income = remaining_after_ni - tax_free_allowance;
        tax_contribution = taxable_income * (tax_rate / 100.0);
    } else {
        tax_contribution = 0.0;
    }

    // 4. Calculate final take-home salary
    take_home_salary = remaining_after_ni - tax_contribution;

    // Output data to 2 decimal places
    printf("Salary £%.2f\n", salary);
    printf("NI contribution £%.2f\n", ni_contribution);
    printf("Tax contribution £%.2f\n", tax_contribution);
    printf("Take home salary £%.2f\n", take_home_salary);

    return 0;
}