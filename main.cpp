#include <iostream>
#include "YHZFindKLargest.h"
#include <vector>
using namespace  std;
int main() {
    YHZFindKLargest klSo = YHZFindKLargest();
    vector<int> nums = {3,2,1,5,6,4};
    klSo.findKthLargest(nums,2);
    printf("findKthLargest:%d", klSo.findKthLargest(nums,2));
  //  std::cout << "Hello, World!" << std::endl;
    return 0;
}
