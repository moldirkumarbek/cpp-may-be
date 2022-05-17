#include <iostream>

using namespace std;

int main()
{
	int a,b,c,febrary;
    bool isValid;
    
    cout << "day:";
    cin >>a;
    cout <<"month:";
    cin >> b;
    cout <<"year:";
    cin>>c;
    
    if( c%4==0) febrary=29;
    else febrary = 28;
    isValid=true;
    
    if (b<1 || b>12)
    isValid=false;
    
    if (a<1||b>31)
    isValid=false;
    
    if ( b == 4|| b ==6||b==9||b==11)
    isValid=false;
    
    if(b==2&& a > febrary)
    isValid=false;
    
    if(isValid)
    cout<<"yes";
    else
    cout << " no ";
}
