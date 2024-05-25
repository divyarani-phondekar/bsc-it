#include <stdio.h>

void creating();
void searching();
void reversing();
void sorting();

int a[10];
int n; // Declare 'n' here so that it's accessible in all functions

int main() {
    int ch;
    do {
        printf("\n1. Creating\n2. Searching\n3. Reversing\n4. Sorting\n");
        printf("Enter a number between 1 to 4: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                creating();
                break;
            case 2:
                searching();
                break;
            case 3:
                reversing();
                break; // Add 'break' here to exit the switch statement
            case 4:
                sorting();
                break; // Add 'break' here to exit the switch statement
        }
    } while (ch != 4); // Move the loop condition outside the switch statement

    return 0;
}

void creating() {
    int i; // Declare 'i' here
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter element for index %d: ", i);
        scanf("%d", &a[i]);
    }
}

void searching() {
    int i, val; // Declare 'i' and 'val' here
    printf("Enter the value to search for: ");
    scanf("%d", &val);
    for (i = 0; i < n; i++) {
        if (val == a[i]) {
            printf("%d value found at index %d\n", val, i);
            return; // Exit the function when the value is found
        }
    }
    printf("\nElement not found\n");
}

void reversing() {
    int i; // Declare 'i' here
    printf("Elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\nReverse order is: ");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

void sorting() {
    int i, j, temp; // Declare 'i', 'j', and 'temp' here
    printf("\nEntered elements of the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting, the array is: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}
