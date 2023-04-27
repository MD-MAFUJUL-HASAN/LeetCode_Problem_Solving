#include <limits.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int m = nums1Size;
    int n = nums2Size;
    int left = (m + n + 1) / 2;
    int right = (m + n + 2) / 2;
    return (findKth(nums1, 0, nums1Size, nums2, 0, nums2Size, left) + findKth(nums1, 0, nums1Size, nums2, 0, nums2Size, right)) / 2.0;
}

int findKth(int* nums1, int i, int nums1Size, int* nums2, int j, int nums2Size, int k) {
    if (i >= nums1Size) return nums2[j + k - 1];
    if (j >= nums2Size) return nums1[i + k - 1];
    if (k == 1) return nums1[i] < nums2[j] ? nums1[i] : nums2[j];
    int midVal1 = i + k / 2 - 1 < nums1Size ? nums1[i + k / 2 - 1] : INT_MAX;
    int midVal2 = j + k / 2 - 1 < nums2Size ? nums2[j + k / 2 - 1] : INT_MAX;
    if (midVal1 < midVal2) return findKth(nums1, i + k / 2, nums1Size, nums2, j, nums2Size, k - k / 2);
    return findKth(nums1, i, nums1Size, nums2, j + k / 2, nums2Size, k - k / 2);
}
