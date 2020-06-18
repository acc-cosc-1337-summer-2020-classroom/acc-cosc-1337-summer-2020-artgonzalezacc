#include "payroll.h"

using std::cout; using std::setw;

//define const fica tax rate, and ot multiplier
const double FICA_TAX_RATE = 0.062;
const double OT_MULTIPLIER = 1.5;
/*
Function regular pay returns regular pay when hours are greater than 0.
if hours > 40, it uses 40 as hours.
*/
double get_regular_pay(int hours, double pay_rate)
{
    auto regular_pay{0.0};

    if(hours > 0)
    {
        if(hours > 40)
        {
            hours = 40;
        }

        regular_pay = hours * pay_rate;
    }

    return regular_pay;
}

/*
Function get_ot_pay returns over time pay for hours over 40.
*/
double get_ot_pay(int hours, double pay_rate)
{
    auto overtime_pay{0.0};

    if(hours > 40)
    {
        overtime_pay = (hours - 40) * OT_MULTIPLIER * pay_rate;
    }

    return overtime_pay;
}

/*
1) FUNCTION VARIABLE SCOPE
    global and local
2) default parameters

Function get_fica_tax_total returns the product of gross_amount and global const
variable FICA_TAX_RATE.
*/
double get_fica_tax_total(double gross_pay)
{
    return gross_pay * FICA_TAX_RATE;
}

/*
Function display_pay uses the defined payroll functions to display pay.

use fixed, set precision, and setw to format output
*/
void display_pay(int hours, double pay_rate)
{
    auto regular_pay{0.0}, overtime_pay{0.0}, fica_tax_total{0.0},
    gross_pay{0.0}, net_pay{0.0};

    regular_pay = get_regular_pay(hours, pay_rate);
    overtime_pay = get_ot_pay(hours, pay_rate);
    gross_pay = regular_pay + overtime_pay;
    
    fica_tax_total = get_fica_tax_total(gross_pay);
    net_pay = gross_pay - fica_tax_total;

    cout<<std::fixed<<std::setprecision(2);
    cout<<setw(17)<<"Regular Pay: "<<setw(7)<<regular_pay<<"\n";
    cout<<setw(17)<<"Overtime Pay: "<<setw(7)<<overtime_pay<<"\n";
    cout<<setw(17)<<"Gross Pay:"<<setw(7)<<gross_pay<<"\n";
    cout<<setw(17)<<"FICA Deduction: "<<setw(7)<<fica_tax_total<<"\n";
    cout<<setw(17)<<"Net Pay: "<<setw(7)<<net_pay<<"\n\n";
}
