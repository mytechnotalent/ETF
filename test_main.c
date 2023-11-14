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
 * @file test_main.c
 *
 * @brief Functions to test the main source file.
 * 
 * This contains the functions to unit test the main source file
 *
 * @author Kevin Thomas
 * @date   11/14/2023
 */

#include <stdio.h>

#include "etf.h"
#include "addition.h"

void test_add_integers_valid(void) {
    int32_t expected_result = 5;
    int32_t actual_result = add_integers(2, 3);

    assert_true_int32("'test_add_integers_valid'", actual_result == expected_result, expected_result, actual_result);
}

void test_add_integers_invalid(void) {
    int32_t expected_result = 5;
    int32_t actual_result = add_integers(3, 3);

    assert_false_int32("'test_add_integers_invalid'", actual_result == expected_result, expected_result, actual_result);
}
