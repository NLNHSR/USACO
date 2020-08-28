#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;
int main() {
  fstream file("square.in.txt");

  // input
  int num; int nums[2][4];
  for (int x = 0; x < 2; x++){
    for (int y = 0; y < 4; y++){
      file >> nums[x][y]; 
    }
  }
  int dif[4]; 
  
  // calculate
  dif[0] = abs(nums[0][0] - nums[1][2]); 
  dif[1] = abs(nums[1][0] - nums[0][2]);
  dif[2] = abs(nums[0][1] - nums[1][3]);
  dif[3] = abs(nums[1][1] - nums[0][3]);

  // output
  cout << pow(max(max(dif[0], dif[1]), max(dif[2], dif[3])), 2);
  
}