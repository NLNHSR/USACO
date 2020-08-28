#include <iostream>

using namespace std;
int main() {
  
  // input
  int p[4][2];
  for(int x = 0; x <= 3; x++){
    for(int y = 0; y <= 1; y++){
      cout << "Enter number: ";
      cin >> p[x][y];
    }
  }

  // initialize promotion counts
  int sc, gc, pc;

  // calculate promotions
  sc = (p[1][1] - p[1][0]) + (p[2][1] - p[2][0]) + (p[3][1] - p[3][0]); // add silver, gold and platinum
  gc = (p[2][1] - p[2][0]) + (p[3][1] - p[3][0]); // add gold and platinum
  pc = (p[3][1] - p[3][0]); // add platinum

  // output
  cout << sc << endl;
  cout << gc << endl;
  cout << pc << endl;

}