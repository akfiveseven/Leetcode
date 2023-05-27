
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution
{
  public:
    bool containsDuplicate(vector<int>& nums)
    {
      unordered_map<int, int> umap;

      for (int i = 0; i < nums.size(); i++) {
        if (umap[nums[i]] == 0) {
          umap[nums[i]] = 1;
        }
        else {
          return true;
        }
      }

      return false;
    }
};

int main()
{
  vector<int> h = {1, 2, 3, 4, 2};
  Solution s;
  cout << s.containsDuplicate(h) << endl;
  return 0;
}
