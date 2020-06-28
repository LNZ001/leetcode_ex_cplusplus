//
// Created by lnz on 2020/6/27.
//
#include <vector>
using namespace std;

class Solution{
public:
    vector<int> twnSum(vector<int> &nums, int target){
        vector<int> result;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                if (i != j && nums[i] + nums[j] == target) {
                    result.push_back(i);
                    result.push_back(j);
                    return result;
                }

            }
        }
    }
};

int main(){

}