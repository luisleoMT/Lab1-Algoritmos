#include <stdio.h>

int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0) return 0;

    int unique_index = 0;

    for (int i = 1; i < numsSize; i++) {
        if (nums[i] != nums[unique_index]) {
            unique_index++;
            nums[unique_index] = nums[i];
        }
    }

    return unique_index + 1;
}

int main() {
    int nums1[] = {1, 1, 2};
    int numsSize1 = sizeof(nums1) / sizeof(nums1[0]);
    int k1 = removeDuplicates(nums1, numsSize1);
    printf("Ejemplo 1:\n");
    printf("El número de elementos únicos es %d.\n", k1);
    printf("El arreglo después de remover duplicados: ");
    for (int i = 0; i < k1; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    int nums2[] = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4};
    int numsSize2 = sizeof(nums2) / sizeof(nums2[0]);
    int k2 = removeDuplicates(nums2, numsSize2);
    printf("Ejemplo 2:\n");
    printf("El número de elementos únicos es %d.\n", k2);
    printf("El arreglo después de remover duplicados: ");
    for (int i = 0; i < k2; i++) {
        printf("%d ", nums2[i]);
    }
    printf("\n");

    return 0;
}
