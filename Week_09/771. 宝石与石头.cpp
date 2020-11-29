//¹þÏ£±í
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        unordered_map<char, int> map;
        for (auto s : S) {
            map[s]++;
        }
        int num = 0;
        for (auto j : J) {
            num += map[j];
        }
        return num;
    }
};



//countº¯Êý
//count(begin(), end(), val)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int num = 0;
        for (auto j : J) {
            num += count(S.begin(), S.end(), j);
        }
        return num;
    }
};
