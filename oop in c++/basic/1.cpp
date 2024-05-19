#include<bits/stdc++.h>
using namespace std;
int main()
{int x=10;
int y=20;
x=++y;
cout<<x<<endl;
x=y--;
cout<<x<<endl;
cout<<y<<endl;
}










#include <iostream>
using namespace std;

class ScholarHat {
private:
 int y; // Private attribute
public:
 int x; // Public attribute

 void display(int a) { // Public method
 y = a;
 cout << "y = " << y << ", x = " << x << endl;
 }
};

int main() {
 ScholarHat myObj;
 myObj.x = 70;
 myObj.display(80);
 return 0;
}
