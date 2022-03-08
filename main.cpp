#include <iostream>
#include "YHZFindKLargest.h"
#include "YHZMedianSortedArrays.h"
#include <vector>
using namespace  std;
int main() {
    YHZFindKLargest klSo = YHZFindKLargest();
    YHZMedianSortedArrays findMid = YHZMedianSortedArrays();
    vector<int> nums1 = {2,3,4,5,6};
    vector<int> nums2 = {1};

  //  klSo.findKthLargest(nums,2);
    printf("findKthLargest:%f", findMid.findMedianSortedArrays(nums1,nums2));
  //  std::cout << "Hello, World!" << std::endl;
    return 0;
}
