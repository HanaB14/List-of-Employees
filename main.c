#include "employee.h"

int main(){
    //-----------------------------------------------------
    //testCase -1
    /*
    EMPLOYEE e;
    e.name="james";
    e.id=123456;
    e.next=NULL;
    e.payments=NULL;
    printEmployee(e);
    */
    //-----------------------------------------------------
    //testCase -2
    /*
    PAYMENT p1;
    p1.date="01/01/2010";
    p1.amount=150;
    p1.next=NULL;
    PAYMENT p2;
    p2.date="01/05/2010";
    p2.amount=200;
    p2.next=&p1;
    EMPLOYEE e;
    e.name="sarah";
    e.id=123456;
    e.payments=&p2;
    e.next=NULL;
    printEmployee(e);
    */
    //-----------------------------------------------------
    //testCase -3
    /*
    addEmployee(123,"alma");
    addEmployee(456,"mike");
    printEmployees();
    */
    //-----------------------------------------------------
    //testCase -4
    /*
    addEmployee(123,"alma");
    addPayment(123,"01/02/2020",3000);
    addPayment(123,"10/07/2021",5000);
    printEmployees();
    */
    //-----------------------------------------------------
    //testCase -5
    /*
    addEmployee(123,"alma");
    addPayment(123,"01/02/2020",3000);
    addPayment(123,"10/07/2021",5000);
    addEmployee(456,"mike");
    addPayment(456,"06/03/2020",700);
    addPayment(456,"07/02/2020",200);
    addPayment(456,"06/04/2021",600);
    printEmployees();
    */
    //-----------------------------------------------------
    //testCase -6
    /*
    addEmployee(123,"alma");
    addPayment(123,"01/02/2020",3000);
    addPayment(123,"10/07/2021",5000);
    addEmployee(456,"mike");
    addPayment(456,"06/03/2020",700);
    addPayment(456,"07/02/2020",200);
    addPayment(456,"06/04/2021",600);
    deleteEmployee(123,"alma");
    printEmployees();
    */
    //-----------------------------------------------------
    //testCase -7
    /*
    addEmployee(123,"alma");
    addPayment(123,"01/02/2020",3000);
    addPayment(123,"10/07/2021",5000);
    addEmployee(456,"mike");
    addPayment(456,"06/03/2020",700);
    addPayment(456,"07/02/2020",200);
    addPayment(456,"06/04/2021",600);
    deleteEmployee(456,"mike");
    deleteEmployee(123,"alma");
    printEmployees();
    */
}