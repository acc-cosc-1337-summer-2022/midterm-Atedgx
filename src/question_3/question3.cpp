#include "question3.h"
#include <iostream>

bool test_config()
{
    return true;
}

double get_sales_commission(double sales){
    double sales_payment;
    if(sales >= 0 && sales <= 499){
        sales_payment = sales * 0.05;
        return sales_payment;
    }
    else if(sales >= 500 && sales <= 999){
        sales_payment = sales * 0.06;
        return sales_payment;
    }
    else if(sales >= 1000 && sales <= 1499){
        sales_payment = sales * 0.07;
        return sales_payment;
    }
    else if(sales >= 1500){
        sales_payment = sales * 0.08;
        return sales_payment;
    }

    else if(sales <= 0){
        sales_payment = sales * 0;
        return sales_payment;
    }
    return 0;
}