#include <stdio.h>



void changeValue(int *p) {
    *p = 100;
}



int main() {


    int num = 10;
    int *ptr = &num;


    printf("Value of num: %d\n", num);   // 10
    printf("Address of num: %p\n", &num); // Address in memory
    printf("Pointer ptr stores: %p\n", ptr); // Same as &num
    printf("Value at ptr: %d\n", *ptr); // 10 (ptr)

// ____________________________________________________________________

    int arr[] = {10, 20, 30};
    int *ptr2 = arr;  // Points to first element

    printf("First element: %d\n", *ptr2);      // 10
    printf("Second element: %d\n", *(ptr2+1)); // 20
    printf("Third element: %d\n", *(ptr2+2));  // 30



// _---------------------------------------------------------------------

int num1 = 10;
printf("Before: %d\n", num1);

changeValue(&num1);  // Pass address 

printf("After: %d\n", num1); // Output: 100

// -----------------------------------------------------------------
    return 0;
}
