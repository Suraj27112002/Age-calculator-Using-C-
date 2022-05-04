#include<iostream>
#include<conio.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int b_date,b_month,b_year,c_date,c_month,c_year,days,months,years;
    cout<<"\tEnter Your Birth Date: ";
    cin>>b_date;
    cout<<"\tEnter Your Birth Month: ";
    cin>>b_month;
    cout<<"\tEnter Your Birth Year: ";
    cin>>b_year;
    cout<<"\tEnter Your Current Date: ";
    cin>>c_date;
    cout<<"\tEnter Your Current Month: ";
    cin>>c_month;
    cout<<"\tEnter Your Current Year: ";
    cin>>c_year;
    if(c_date>=b_date && c_month>=b_month && c_year>=b_year)
    {
        days=c_date-b_date;
        months=c_month-b_month;
        years=c_year-b_year;
    }
    else if (c_date < b_date && c_month>=b_month && c_year>=b_year)
    {
        days=(c_date+30)-b_date;
        if (c_month==b_month)
        {
            months=(c_month+11)-b_month;
            years=(c_year-1)-b_year;
        }
        else
        {
            months=c_month-b_month;
            years = c_year-b_year;
        }
    }
    else if (c_date >= b_date && c_month < b_month && c_year>=b_year)
    {
        days=c_date-b_date;
        months=(c_month+12)-b_month;
        years=(c_year-1)-b_year;
    }
    else
    {
        days=(c_date+30)-b_date;
        months=(c_month+11)-b_month;
        years=(c_year-1)-b_year;
    }
    cout<<"**************************************************************************";
    cout<<"\n\t Your Age :   "<<days<<" Days  "<<months<<" Months  "<<years<<" Years";
    getch();
    return 0;
}

