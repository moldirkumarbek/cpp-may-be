#include <iostream>
using namespace std;
int sultan(int *num){
bool a ;
for (int i=0; i<4; i++){
  if (num[i]>=0 && num[i]<=255){
    a = 1;
  }
  else {
    a=0;
  }
}
cout << a ;
return 0;
}
int main() {
char dot;
int *num=new int [4];
cin>>num[0]>>dot>>num[1]>>dot>>num[2]>>dot>>num[3];
sultan(num);
}
