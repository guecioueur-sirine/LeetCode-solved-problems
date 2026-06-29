int findMin(int* nums, int numsSize) {
    int i;
    for(i=0;i<numsSize-1;i++){
       if (nums[i]>nums[i+1]){  // the first element which breaks the ascending order is the minimum 
        return nums[i+1];
       }
    }
    return nums[0]; //case of all elements are equal 
}
