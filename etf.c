/**
 * MIT License
 * 
 * Copyright (c) 2023 My Techno Talent
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

/**
 * @file etf.c
 *
 * @brief Functions for the ETF testing framework.
 * 
 * This contains the functions for the Embedded Test Framework.
 *
 * @author Kevin Thomas
 * @date   11/14/2023
 */

#include "etf.h"


static void test_result(bool pass, const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result) {
    if (pass)
        printf("test %s passed!\r\n", test_name);
    else
        printf("test %s failed!\r\n", test_name);
    printf("expected result: %d\r\n", expected_result);
    printf("actual result: %d\r\n", actual_result);
    printf("\r\n");
}


void assert_true_int32(const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result) {
    if (!condition) 
        test_result(false, test_name, condition, expected_result, actual_result);
    else
        test_result(true, test_name, condition, expected_result, actual_result);
}

void assert_false_int32(const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result) {
    if (condition) 
        test_result(false, test_name, condition, expected_result, actual_result);
    else
        test_result(true, test_name, condition, expected_result, actual_result);
}
