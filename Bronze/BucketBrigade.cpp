#include <iostream>
#include <fstream>
#include <string>
#include <bits/stdc++.h> 

using namespace std;
int main() {

  // input
  string str;
  ifstream file("buckets.in.txt");
  char arr[10][11];
  int i = 0;
  while(getline(file, str)){
    int n = str.length();  
    strcpy(arr[i], str.c_str());
    i++; 
  }

  // get positions of start and stop from the top left 
  int pos[2][2];
  for (int x = 0; x < 10; x++){
    for (int y = 0; y < 10; y++){
      if(arr[x][y] == 'B'){
        pos[0][0] = y + 1;
        pos[0][1] = x + 1;
      } else if(arr[x][y] == 'L'){
        pos[1][0] = y + 1;
        pos[1][1] = x + 1;
      }
    }
  }
  
  cout << abs(pos[0][0] - pos[1][0]) + abs(pos[0][1] - pos[1][1]) - 1;

}