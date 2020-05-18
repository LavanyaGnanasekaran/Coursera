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
  * @file: stats.h
  * @brief: Header file for module_1, week_1 assignment
  *
  * It contains function declarations for following functions

     print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
     print_array() - Given an array of data and a length, prints the array to the screen
     find_median() - Given an array of data and a length, returns the median value
     find_mean() - Given an array of data and a length, returns the mean
     find_maximum() - Given an array of data and a length, returns the maximum
     find_minimum() - Given an array of data and a length, returns the minimum
     sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
  *******************************************************************************************************************
  * @author: Lavanya Gnanasekaran
  * @date: 05/17/2020
  *
  ******************************************************************************************************************/
#ifndef __STATS_H__
#define __STATS_H__



/*******************************************************************************************************************
 * @Function: print_statistics()
 *
 * Description: A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 * Return:
 * 		Doest not return any values, instead this function prints the statistics of given data set.
 ********************************************************************************************************************/

void print_statistics(unsigned char* array, int length);

/********************************************************************************************************************
 * @Function: print_array()
 *
 * Description: Given an array of data and a length, prints the array to the screen
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 *
 * Return:
 * 		does not return any values, instead the function prints the array.
 *********************************************************************************************************************/

void print_array(unsigned char* array, int length);

/*********************************************************************************************************************
 * @Function: find_median()
 *
 * Description: Given an array of data and a length, returns the median value
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 *
 * Return:
 * 		Median of the given array.
 *********************************************************************************************************************/

int find_median(unsigned char* array, int length);

/**********************************************************************************************************************
 *@Function: find_mean()
 *
 * Description: Given an array of data and a length, returns the mean
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 *
 * Return:
 * 		Mean of the given array.
 *********************************************************************************************************************/

int find_mean(unsigned char* array, int length);

/**********************************************************************************************************************
 *@Function: find_maximum()
 *
 * Description: Given an array of data and a length, returns the maximum
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 *
 * Return:
 * 		The maximum value of the given array.
 *********************************************************************************************************************/

int find_maximum(unsigned char* array, int length);

/**********************************************************************************************************************
 *@Function: find_minimum()
 *
 * Description: Given an array of data and a length, returns the minimum
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		int length: length of given array
 *
 *
 * Return:
 * 		The minimum value of the given array.
 *********************************************************************************************************************/

int find_minimum(unsigned char* array, int length);

/**********************************************************************************************************************
 *@Function: sort_array()
 *
 * Description: Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
 *
 * Parameters:
 * 		unsigned char* array: given array
 *		length: length of given array
 *
 *
 * Return:
 * 		Doesn't return any value instead it does the inplace array sort.
 *********************************************************************************************************************/

void sort_array(unsigned char* array, int length);

/********************************************************************************************************************/
/* end of the function declarations */

#endif /* __STATS_H__ */

