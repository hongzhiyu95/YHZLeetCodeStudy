//
// Created by 于洪志 on 2022/3/8.
//

#ifndef YHZLEETCODESTUDY_YHZMEDIANSORTEDARRAYS_H
#define YHZLEETCODESTUDY_YHZMEDIANSORTEDARRAYS_H

#include <vector>
using namespace  std;
class YHZMedianSortedArrays {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int countOfNums1 = nums1.size();
        int countOfNums2 = nums2.size();
        int kOfNums1 = (countOfNums1 + countOfNums2+1)/2;
        int kOfNums2 = (countOfNums1 + countOfNums2+2)/2;
        int mid1 = findMid(nums1,0,nums2,0,kOfNums1);
        int mid2 = findMid(nums1,0,nums2,0,kOfNums2);
        return (mid1+mid2)/2.0;
    }

    int findMid(vector<int>& nums1,int nums1Start,vector<int>& nums2,int nums2Start,int k){
      //  vector<int> nums1 = {1,3,4,9};
       // vector<int> nums2 = {2,5,7};
        int max = 1000000;
        int min = -1000000;
        if (nums1Start>=nums1.size())return nums2[nums2Start+k-1];
        if (nums2Start>=nums2.size())return nums1[nums1Start+k-1];
        if (k==1){

            return nums1[nums1Start]<nums2[nums2Start]?nums1[nums1Start]:nums2[nums2Start];
        }
        int indexOfnums1 = nums1Start + (k/2)-1;
        int midValue1,midValue2 = 1000000;
        if (indexOfnums1< nums1.size()){
            midValue1  = nums1[indexOfnums1];
        }else{
            midValue1 = 10000000;
        }
        int indexOfnums2 = nums2Start + (k/2)-1;
        if (indexOfnums2 < nums2.size()){
            midValue2  = nums2[indexOfnums2];
        }else{
            midValue2 = 10000000;
        }
     //   int midValue1 = (nums1Start + (k/2) )< nums1.size()?nums1[nums1Start+(k/2)-1]:max;
      //  int midValue2 = (nums2Start + (k/2) )< nums2.size()?nums2[nums2Start+(k/2)-1]:max;
        if (midValue1<midValue2){
            return findMid(nums1,nums1Start+k/2,nums2,nums2Start,k-(k/2));
        }else{
            return findMid(nums1,nums1Start,nums2,nums2Start+k/2,k-(k/2));
        }


    }

};


#endif //YHZLEETCODESTUDY_YHZMEDIANSORTEDARRAYS_H
