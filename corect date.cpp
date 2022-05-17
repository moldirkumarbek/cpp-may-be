#include <iostream>
using namespace std;

int main()
{
	unsigned int day, month, year;
    cout<< "Enter day, month and year through a cpase: \n";
    cin >> day >> month >>year;
    if(month > 12) goto loop;
    if(!(month%2))
    {
        if(day > 30) goto loop;
    }
    else 
        if(day > 31) goto loop;
 
    if(month == 2)
    {
        if(year%4)
        {
            if(day > 28) goto loop;
        }
        else 
            if(day > 29) goto loop;
    }
 
    cout <<"Yes\n";
    _getch();
    return 0;
 
loop:
    cout << "No\n";
_getch();
return 0;
}
