#include <iostream>

using namespace std;

//Compiler version g++ 6.3.0

int main()

{

 int a,b,multiply,divide,add,subtract,e;



    cout << "enter first number:" <<endl;

cin >> a;

cout << "enter second number:" <<endl;

cin >> b;

cout << "choose the number if you want it to:"  <<endl;

cout << "1 multiply"  <<endl;

cout << "2 divide"  <<endl;

cout << "3 subtract"  <<endl;

cout << "4 add"  <<endl;

cin >> e;

cout << "the answer is:";

multiply=(a*b);

divide=(a/b);

subtract=(a-b);

add=(a+b);

if (e==1)

{cout << multiply <<endl;}

if (e==2)

{cout << divide <<endl;}

if (e==3)

 {cout << subtract <<endl; }

if (e==4)

  {cout << add  <<endl; }

return 0;
}
