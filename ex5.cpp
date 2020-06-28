//
// Created by lnz on 2020/6/27.
//
#include<string>
#include<vector>
//#include <bool>
using  namespace std;

class Solution{
public:
    string longestPalindrome(string s){
        /* 我的思路是 zhao lianxuxiangdeng(yao1youhua1duogexiangtongzhilianxu1deqingkuang) or liangbianxiangtong */

        /* dongtaiguihua. (zuiyou) */
        int len = s.length();
        if (len<2){return s;}

        int maxLen = 1;
        int begin = 0;

        //dp[i][j]
        int[][] dp = new int[len][len]; //????
        for (int i = 0; i < len; ++i) {
            dp[i][i] = true;
        }

        char[] charArray = s.toCharArray();
        for (int j = 1; j < len; ++j) {
            for (int i = 0; i < j; ++i) {
                if (charArray[i] != charArray[j]){
                    dp[i][j] = false;
                }else{
                    if (j - i < 3){
                        dp[i][j] = true;
                    }else{
                        dp[i][j] =  dp[i+1][j-1];
                    }
                }


                if(dp[i][j] == true){
                    int curLength = j-i+1;
                    if(curLength >= maxLen){
                        maxLen = curLength;
                        begin = i;
                    }

                }
            }

        }
        return s.substr(begin, begin+maxLen);



        // manacher 算法 O(n)
        // ok.
    }
};

int main(){

}