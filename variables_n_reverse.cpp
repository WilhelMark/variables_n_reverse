#include <iostream>

/**
 * Reverses the order of 10 integers in-place using pointer arithmetic
 * @param arr Pointer to the first element of the array of 10 integers
 *
 * The function uses two pointers starting at opposite ends of the array
 * and swaps their values until they meet in the middle
 */
void reverseTen(int* arr) {
    // Initialize pointer to start of array
    int* start = arr;
    
    // Initialize pointer to end of array (start + 9 elements offset)
    int* end = arr + 9;

    // Swap elements until pointers meet in middle
    while (start < end) {
        // Temporary storage for swap operation
        int temp = *start;
        
        // Swap front element with back element
        *start = *end;
        *end = temp;

        // Move pointers towards center
        start++;
        end--;
    }
}

// Example usage
int main() {
    // Create and initialize array with 10 elements
    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Original array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    // Reverse the array using pointer
    reverseTen(numbers);

    std::cout << "\nReversed array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }

    return 0;
}
