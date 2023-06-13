#include <stdio.h>
int count=0;
int binarySearch(int nums[], int n, int target) {
	count++;
    int left = 0, right = n - 1;
    count++;
    while (left <= right) {
    	count++;
        int mid = left + (right - left) / 2;
        count++;
        if (nums[mid] == target)
        {
        	count++;
            return mid;
            count++;
        }
    
        else if (nums[mid] < target)
        {
        	count++;
            left = mid + 1;
            count++;
        }
        else{
		    count++;
            right = mid - 1;
            count++;
        }
    }
    return -1;
}

int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    count++;
    int n = sizeof(nums) / sizeof(nums[0]);
    count++;
    int target = 6;
    count++;
    int index = binarySearch(nums, n, target);
    count++;
    if (index == -1){
    	count++;
        printf("Target %d not found.", target);
    }
        
    else{
        count++;
        printf("Target %d found at index %d.", target, index);
        count++;
    }
    printf("time complexity is %d",count);
    return 0;
}
