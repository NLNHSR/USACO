#include <iostream>
#include <string>
#include <sstream>

using namespace std;
int main() {

  // input
  int words, length, ccount, i; string essay, word;
  cout << "Enter numbers: ";
  cin >> words >> length;
  cin.ignore();
  cout << "Enter string: ";
  getline(cin, essay);
  stringstream stm(essay);
  string wordArr[words];
  while(getline(stm, essay, ' ')){
    wordArr[i] = essay;
    i++;
  }

  // output
  cout << wordArr[0];
  ccount = wordArr[0].size();
  for (int x = 1; x < words; x++){
    if((wordArr[x].size() + ccount) > length){
      cout << endl << wordArr[x];
      ccount = wordArr[x].size();
    } else {
      cout << " " << wordArr[x];
      ccount += wordArr[x].size();
    }
  }
  
}