//
// Created by 于洪志 on 2022/3/8.
//

#ifndef YHZLEETCODESTUDY_YHZFINDKLARGEST_H
#define YHZLEETCODESTUDY_YHZFINDKLARGEST_H
#include <vector>
#include <climits>
using namespace std;
class YHZFindKLargest {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int min = 10000;
        int max = -10000;

        for (int value: nums) {
            if (value< min){
                min = value;
            }

        }
        for (int value: nums) {
            if (value > max){
                max = value;
            }
        }
        int left = min;
        int right = max;
        int countOfnums = 0;
        int mid = 0;
        while (left<right){
            mid = right - ((right - left)/2);
            for (int i = 0; i < nums.size(); ++i) {
                if(nums[i]>=mid){
                    countOfnums ++;
                }

            }
            if (countOfnums<k)//说明"右边（最大值）"选大了导致最大和最小之间mid的值比k少
            {
                right = mid-1;
                countOfnums = 0;
            }
            else{
                left = mid;
                countOfnums = 0;
            }
        }
        return left;


    }
};


#endif //YHZLEETCODESTUDY_YHZFINDKLARGEST_H
