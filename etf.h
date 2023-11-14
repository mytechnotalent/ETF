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
#include <string.h>
#include <stdio.h>

/**
 * @brief  Compares two blocks of memory for equality.
 *
 *         This function compares two blocks of memory, specified by pointers to
 *         the expected and actual data, for equality using the `memcmp` function.
 *         It returns true if the blocks are equal (have the same content), and
 *         false otherwise.
 *
 * @param  expected: Pointer to the expected data block.
 * @param  actual: Pointer to the actual data block.
 * @param  size: Size of the data blocks to compare in bytes.
 * @retval True if the blocks are equal, false otherwise.
 */
static bool compare(const void* expected, const void* actual, size_t size);

/**
 * @brief  Prints the hexadecimal representation of a block of memory.
 *
 *         This function prints the hexadecimal representation of a block of
 *         memory, specified by the pointer to the data and its size, to the
 *         console. Each byte is printed as a two-digit hexadecimal number
 *         followed by a space.
 *
 * @param  data: Pointer to the data block.
 * @param  size: Size of the data block in bytes.
 * @retval None
 */
static void print_bytes(const void* data, size_t size);

/**
 * @brief  Prints a pass message for a test.
 *
 *         This function prints a "PASS" message for a test along with the test
 *         name to the console.
 *
 * @param  test_name: The name or description of the test that passed.
 * @retval None
 */
static void test_pass_output(const char* test_name);

/**
 * @brief  Prints a fail message for a test along with expected and actual results.
 *
 *         This function prints a "FAIL" message for a test along with the test
 *         name and the hexadecimal representation of the expected and actual
 *         results to the console.
 *
 * @param  test_name: The name or description of the test that failed.
 * @param  expected_result: Pointer to the expected result data block.
 * @param  actual_result: Pointer to the actual result data block.
 * @param  size: Size of the data blocks to compare in bytes.
 * @retval None
 */
static void test_fail_output(const char* test_name, const void* expected_result, const void* actual_result, size_t size);

/**
 * @brief  Prints the result of a test based on pass/fail condition and comparison.
 *
 *         This function prints a message indicating whether the test passed or
 *         failed based on the provided pass condition. It also compares the
 *         expected and actual results and prints their hexadecimal
 *         representations in case of a failure.
 *
 * @param  pass: Boolean indicating whether the test passed (true) or failed (false)
 * @param  test_name: The name or description of the test
 * @param  expected_result: Pointer to the expected result data block
 * @param  actual_result: Pointer to the actual result data block
 * @param  size: Size of the data blocks to compare in bytes
 * @retval None
 */
void test(bool pass, const char* test_name, const void* expected_result, const void* actual_result, size_t size);

#endif // __ETF_H
