#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            auto it = m.find(complement);
            if (it != m.end()) { //exists in map
                vector<int> returnVec;
                returnVec.push_back(i);
                returnVec.push_back(m[complement]);
                return returnVec;
            }
            else {
                m.insert(make_pair(nums[i], i));
            }

        }


        vector<int> emptyVector;
        return emptyVector;
    }
};

