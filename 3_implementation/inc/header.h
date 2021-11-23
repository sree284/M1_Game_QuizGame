#ifndef __HEADER_H__
#define __HEADER_H__
/**
 * @file header.h
 * @author Shiva S
 * @brief 
 * @version 0.1
 * @date 2021-04-15
 * 
 *  @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/**
 * @brief Function Declarations
 * 
 * @param s1 
 * @return int 
 */
int score_pos_r1(int s1);
int score_neg_r1(int s2);
int score_pos_r2(int s3);
int score_neg_r2(int s4);
int final_score(int m1, int m2, int m3);

#endif