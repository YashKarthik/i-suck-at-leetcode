#include <stdlib.h>

int* two_sum(int* nums, int nums_size, int target, int* return_size) {
    int* ret = malloc(sizeof(int) * 2);
    ret[0] = -1;
    ret[1] = -1;
    *return_size = 2;

    for (int i = 0; i < nums_size; i++) {
        for (int j = 0; j < nums_size; j++) {
            if (i == j) continue;
            
            if (nums[i] + nums[j] == target) {
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }

    return ret;
}
