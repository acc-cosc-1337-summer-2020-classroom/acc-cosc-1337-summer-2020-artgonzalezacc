#include "payroll.h"

using std::cin; using std::cout;

int main()
{
    int num = 0;

    auto hours {0};
    auto rate{0.0};
    auto choice = 'n';

    do
    {
        cout<<"Enter hours: ";
        cin>>hours;
        cout<<"Enter pay rate: ";
        cin>>rate;

        display_pay(hours, rate);
        
        cout<<"Continue enter y or Y: ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');
    
    return 0;
}