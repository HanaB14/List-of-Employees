#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct payment{
    char* date;         //  MM/DD/YY as text
    float amount;
    struct payment* next;
}PAYMENT;

typedef struct employee{
    int id;
    char* name;
    PAYMENT* payments;
    struct employee* next;
}EMPLOYEE;

void printEmployee(EMPLOYEE e);
void printEmployees();
void addEmployee(int e_id,char* e_name);
int addPayment(int e_id, char* p_date, float p_amount);
int deleteEmployee(int e_id, char* e_name);