//
// Created by lnz on 2020/6/27.
//

#include<vector>
#include<string>
#include<unordered_map>
using namespace std;

class Solution{
public:
    int lengthOfLongestSubstring(string s){
        /* 我的思路是, 利用一个map记录上一次出现该字母的位置，如果遇到重复（shifouzai1dangshiweizhizhogn1），就从上一次的这个位置开始。记录 */
        int start(0), end(0), length(0), result(0);
        int sSize(int(s.size()));
        unordered_map<char, int> hash;
        while (end < sSize)
        {
            char tmpChar = s[end];
            // hash.end() might means the end of hashmap, "tmpChar" not found.
            if (hash.find(tmpChar) != hash.end() && hash[tmpChar] >= start){
                start = hash[tmpChar] + 1;
            }
            hash[tmpChar] = end;
            end ++;

            length = end - start + 1;
            result = max(result, length);

        }
        return result;
    }
};

int main(){

}