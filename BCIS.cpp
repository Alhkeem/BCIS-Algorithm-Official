/* 
 * ======================================================================================
 *  ALGORITHM: Bidirectional Centripetal Insertion Sort (BCIS)
 *  AUTHOR: Ahmed Mohamed Almustafa Ahmed Mohamed Alhkeem
 *  DATE: May 2026
 *  INSTITUTION: International University of Africa
 *  
 *  LICENSE NOTICE:
 *  This code is PROPRIETARY and belongs to the author named above.
 *  - EDUCATIONAL USE: Permitted (study, research, classroom).
 *  - COMMERCIAL USE: STRICTLY PROHIBITED without a written license agreement.
 *  - REDISTRIBUTION: Not allowed without explicit permission.
 * ======================================================================================
 */

/*
 * Bidirectional Centripetal Insertion Sort (BCIS)
 * Copyright (c) 2026 Ahmed Mohamed Elmustafa Ahmed Mohamed Elhakim. 
 * All Rights Reserved.
 */
#include <vector>

template <typename T>
void bidirectionalInsertionSort(std::vector<T>& arr) {
    int left = 0;
    int right = arr.size() - 1;

    while (left < right) {
        // Left Insertion Pass
        T leftVal = arr[left];
        int i = left - 1;
        while (i >= 0 && arr[i] > leftVal) {
            arr[i + 1] = arr[i];
            i--;
        }
        arr[i + 1] = leftVal;
        
        // Right Insertion Pass
        T rightVal = arr[right];
        int j = right + 1;
        int n = arr.size();
        while (j < n && arr[j] < rightVal) {
            arr[j - 1] = arr[j];
            j++;
        }
        arr[j - 1] = rightVal;

        left++;
        right--;
    }
}
