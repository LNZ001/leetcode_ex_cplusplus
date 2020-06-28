//
// Created by lnz on 2020/6/27.
//

#include<vector>
using namespace std;

class Solution{
public:
    int getKthElement(const vector<int> &nums1, const vector<int> &nums2, int k){
        int m = nums1.size();
        int n = nums2.size();
        int index1 = 0, index2 = 0;

        while(true){
            if (index1 == m){
                return nums2[index2 + k -1];
            }
            if (index2 == n){
                return nums1[index1 +k -1];
            }
            if(k == 1){
                return min(nums1[index1], nums2[index2]);
            }

            //循环
            int newIndex1 = min(index1 + k/2 - 1, m-1);
            int newIndex2 = min(index2 + k/2 - 1, n-1);
            if(nums1[newIndex1] >= nums2[newIndex2]){
                index2 = newIndex2 + 1;
                k -= newIndex2 + 1 - index2;
            }else{
                index1 = newIndex1 + 1;
                k -= newIndex1 + 1 - index1;
            }

        }
    }

    double findMedianSortedArrays(vector<int> & nums1, vector<int>& nums2){
        /* 我的思路是 */

        /* 第k小的数，折半删除。 */
        int totalLength = (int)(nums1.size() + nums2.size());
        if (totalLength%2 == 0){
            return (double)(getKthElement(nums1, nums2, totalLength/2) + getKthElement(nums1, nums2, totalLength/2+1))/2;
        }else{
            return getKthElement(nums1, nums2, totalLength/2 + 1);
        }
    }
};

int main(){

}