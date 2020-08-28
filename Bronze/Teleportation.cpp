#include <iostream>

using namespace std;
int main() {
  
// input
int a, b, x, y;
cout << "Enter numbers: ";
cin >> a >> b >> x >> y;

// output
cout << abs(min(a, b) - min(x, y) + abs(max(a,b) - max(x, y)));
  
}