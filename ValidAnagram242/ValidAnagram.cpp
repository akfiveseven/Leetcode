
#include <iostream>
#include <unordered_map>
#include <string>


using namespace std;


class Solution {
  public:
    bool inMap(unordered_map<char, int> input, char key) {
      auto it = input.find(key);
      if (it != input.end()) {
        return true;
      }
      else {
        return false;
      }
    }


    bool isAnagram(string s, string t) {

      if (s.length() != t.length())
        return false;

      unordered_map<char, int> map_1;
      unordered_map<char, int> map_2;




      for (int i = 0; i < s.length(); i++) {
        if (inMap(map_1, s[i]) == false) { // not in map already
          map_1.insert(make_pair(s[i], 1)); 
        }
        else {
          map_1[s[i]]++;
        }
        if (inMap(map_2, t[i]) == false) {
          map_2.insert(make_pair(t[i], 1));
        }
        else {
          map_2[t[i]]++;
        }
      }

      if (map_1 == map_2)
        return true;

      return false;

  
    }
};


int main() {
  Solution s;

  //cout << s.isAnagram("billy", "ailly") << endl;

  unordered_map<char, int> m;

  m.insert(make_pair('b', 2));

  cout << m.contains('b') << endl;
}

