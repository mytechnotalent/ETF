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
 * @file etf.h
 *
 * @brief Function prototypes for the ETF testing framework.
 * 
 * This contains the function prototypes for the Embedded Test Framework.
 *
 * @author Kevin Thomas
 * @date   11/14/2023
 */

#ifndef __ETF_H
#define __ETF_H

#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

/**
 * @brief  Prints the result of a test, including pass/fail status, expected and actual results.
 *
 *         This function takes parameters representing the result of a test,
 *         including whether it passed or failed, the name of the test, the
 *         condition tested, the expected result, and the actual result. It prints
 *         relevant information to the console.
 *
 * @param  pass: Boolean indicating whether the test passed (true) or failed (false).
 * @param  test_name: The name or description of the test.
 * @param  condition: The condition being tested (e.g., test case number).
 * @param  expected_result: The expected result of the test.
 * @param  actual_result: The actual result obtained during the test.
 * @retval None
 */
static void test_result(bool pass, const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result);

/**
 * @brief  Asserts that a given condition is true and prints the result of the test.
 *
 *         This function asserts that the specified condition is true. If the
 *         condition is true, it prints a message indicating that the test passed,
 *         along with the expected and actual results. If the condition is false,
 *         it prints a message indicating that the test failed and provides
 *         relevant information.
 *
 * @param  test_name: The name or description of the test.
 * @param  condition: The condition being tested (e.g., test case number).
 * @param  expected_result: The expected result of the test.
 * @param  actual_result: The actual result obtained during the test.
 * @retval None
 */
void assert_true_int32(const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result);

/**
 * @brief  Asserts that a given condition is false and prints the result of the test.
 *
 *         This function asserts that the specified condition is false. If the
 *         condition is false, it prints a message indicating that the test passed,
 *         along with the expected and actual results. If the condition is true,
 *         it prints a message indicating that the test failed and provides
 *         relevant information.
 *
 * @param  test_name: The name or description of the test.
 * @param  condition: The condition being tested (e.g., test case number).
 * @param  expected_result: The expected result of the test.
 * @param  actual_result: The actual result obtained during the test.
 * @retval None
 */
void assert_false_int32(const char* test_name, uint8_t condition, int32_t expected_result, int32_t actual_result);

#endif // __ETF_H
