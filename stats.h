/******************************************************************************
 * Copyright (C) 2018 by Deepankar Maithani 
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Deepankar Maithani is not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.h> 
 * @brief <This file has function prototypes  >
 *
 * <Nil>
 *
 * @author <MAITHANI DEEPANAKR>
 * @date <15 JAN 2018 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

#define HOW_MANY 6  

/* Add Your Declarations and Function Comments here */ 
/**
 * @brief <this function calculates mean>
 *
 * <this function will add up all the input numbers and will divide them with number of inputs>
 *
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns a float vlaue which represnets mean >
 */
float find_mean(float *ptr, int count);


/**
 * @brief <This function sorts the array >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns an array which has sorted numbers in decending order >
 */
float sort_array(float *ptr,int count);


/**
 * @brief <This function finds minmum number >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns a float type minium number >
 */
float find_minimum(float *ptr,int count);



/**
 * @brief <This function finds minmum number >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns a float type maximum number >
 */
float find_maximum(float *ptr,int count);


/**
 * @brief <This function finds the median number >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns a float type number which reprents median >
 */
float find_median(float *ptr,int count);


/**
 * @brief <This function prints the statastics about the entered numbers >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns nothing >
 */

float print_statastics(float val1,float val2,float val4,float val5,float *ptr);

/**
 * @brief <This function prints the statastics about the entered numbers >
 *
 * <NIL>
 * @param <*ptr> <pointer for array holding the input numbers>
 * @param <count> <count of numbers given as input>
 * @return <returns nothing >
 */

void arrayPrinter(float *ptr,int count);




#endif /* __STATS_H__ */
