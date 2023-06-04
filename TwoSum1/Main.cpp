#include <iostream>
#include "TwoSum.cpp"

using namespace std;

int main() {
  vector<int> v;
  v.push_back(2);
  v.push_back(7);
  v.push_back(11);
  v.push_back(15);
  int target = 9;

  Solution s;
  vector<int> h = s.twoSum(v, target);
  cout << h[0] << ", " << h[1] << endl;
  return 0;
}
