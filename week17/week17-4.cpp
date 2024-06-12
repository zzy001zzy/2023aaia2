void sortColors(int* nums, int numsSize) {
    int zero=0,one=0,two=0;
    for(int i=0;i<numsSize;i++){
        if(nums[i]==0) zero++;
        if(nums[i]==1) one++;
        if(nums[i]==2) two++;
    }
    for(int i=0;i<numsSize;i++){
        if(i<zero) nums[i]=0;
        else if(i<zero+one) nums[i]=1;
        else nums[i]=2;
    }
}