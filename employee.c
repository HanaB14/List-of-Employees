#include "employee.h"
EMPLOYEE* list_of_employees=NULL;

void printEmployee(EMPLOYEE e){
    // Your code here
    printf("Name: %s, ID: %d\n", e.name, e.id);
    if(e.payments == NULL){
        printf("No Payments..\n");
        return;
    }

    printf("-----------------------------\n");
    printf("Date        Amount\n");
    printf("----        ------\n");

    PAYMENT* p = e.payments;
    while(p != NULL){
        printf("%s  %.6f\n", p->date, p->amount);
        p = p->next;
    }
}

void addEmployee(int e_id, char* e_name){
    // Your code here
    EMPLOYEE* newEmployee = (EMPLOYEE*) malloc(sizeof(EMPLOYEE));
    newEmployee->id = e_id;
    newEmployee->name = strdup(e_name);
    newEmployee->payments = NULL;

    newEmployee->next = list_of_employees;
    list_of_employees = newEmployee;
}

void printEmployees(){
    // Your code here
    if(list_of_employees == NULL){
        printf("The list is empty..\n");
        return;
    }

    EMPLOYEE* cur = list_of_employees;
    while(cur != NULL){
        printEmployee(*cur);
        printf("=============================\n");
        cur = cur->next;
    }
}

int addPayment(int e_id, char* p_date, float p_amount){
    // Your code here
    EMPLOYEE* cur = list_of_employees;
    while(cur != NULL){
        if(cur->id == e_id){
            PAYMENT* newPayment = (PAYMENT*) malloc(sizeof(PAYMENT));
            newPayment->date = strdup(p_date);
            newPayment->amount = p_amount;

            newPayment->next = cur->payments;
            cur->payments = newPayment;

            return 1;
        }
        cur = cur->next;
    }
    return 0;

}

int deleteEmployee(int e_id, char* e_name){
    // Your code here
    EMPLOYEE* cur = list_of_employees;
    EMPLOYEE* pre = NULL;

    while(cur != NULL){
        if(cur->id == e_id){
            if(pre == NULL){
                list_of_employees = cur->next;
            }else{
                pre->next = cur->next;
            }

            PAYMENT* p = cur->payments;
            while(p!=NULL){
                PAYMENT* temp = p;
                p = p->next;
                free(temp->date);
                free(temp);
            }

            free(cur->name);
            free(cur);

            return 1;
        }
        pre = cur;
        cur = cur->next;
    }
    return 0;

}