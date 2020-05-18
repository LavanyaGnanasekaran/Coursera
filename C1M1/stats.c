/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material.
 *
 *****************************************************************************/
 /**
  * @file: stats.c
  * @brief: stats.c is a implementation file for module 1, week 1 assignment
  *
  * It contains eight function implementations
     main() - The main entry point for your program
     print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
     print_array() - Given an array of data and a length, prints the array to the screen
     find_median() - Given an array of data and a length, returns the median value
     find_mean() - Given an array of data and a length, returns the mean
     find_maximum() - Given an array of data and a length, returns the maximum
     find_minimum() - Given an array of data and a length, returns the minimum
     sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
  *
  * @author: Lavanya Gnanasekaran
  * @date:  05/17/2020
  *
  */



#include <stdio.h>
#include "stats.h"

  /* Size of the Data Set */
#define SIZE (40)

void main() {

    unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90 };
    int n = 0;
    n = sizeof(test) / sizeof(test[0]);

    /* Other Variable Declarations Go Here */
    /* Statistics and Printing Functions Go Here */
    print_array(test, n);
    print_statistics(test, n);
    sort_array(test, n);
    printf("\n******************************************\n");
    printf("Sorted Array");
    printf("\n******************************************\n");
    print_array(test, n);
}

/* Function definition of print_statistics() */
void print_statistics(unsigned char* array, int length) {
    int median = 0, mean = 0, min = 0, max = 0;
    sort_array(array, length);
    median = find_median(array, length);
    mean = find_mean(array, length);
    max = find_maximum(array, length);
    min = find_minimum(array, length);
    printf("\n******************************************\n");
    printf("Statistics of the given data set");
    printf("\n******************************************\n");
    printf(" Median = %d \n Mean = %d \n Maximum = %d \n Minimum = %d \n", median, mean, max, min);
}

/* Function definition of print_array() */
void print_array(unsigned char* array, int length) {
    int i = 0;
    printf("\n");
    printf("The array elements are :\n");
    for (i = 0; i < length; i++) {
        printf("array[%d] : %u \n", i, array[i]);
    }

}

/* Function definition of find_median() */
int find_median(unsigned char* array, int length) {
    sort_array(array, length);
    int median = 0;
    if (length % 2 == 0)
        median = (array[(length - 1) / 2] + array[length / 2]) / 2;
    // if number of elements are odd
    else
        median = array[length / 2];

    return median;

}

/* Function definition of find_mean() */
int find_mean(unsigned char* array, int length) {
    int i = 0, mean = 0, sum = 0;
    for (i = 0; i < length; i++) {
        sum = sum + array[i];
    }
    mean = sum / SIZE;
    return mean;
}

/* Function definition of find_maximum() */
int find_maximum(unsigned char* array, int length) {
    int max = array[0], i;
    for (i = 1; i < length; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

/* Function definition of find_minimum() */
int find_minimum(unsigned char* array, int length) {
    int min = array[0], i;
    for (i = 1; i < length; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

/* Function definition of sort_array() */
void sort_array(unsigned char* array, int length) {
    int i = 0, j = 0, temp = 0;
    for (i = 0; i < length; i++) {
        for (j = 0; j < length - 1; j++) {
            if (array[j] < array[j + 1]) {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}







