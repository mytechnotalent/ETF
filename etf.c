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

static bool compare(const void* expected, const void* actual, size_t size) {
    return memcmp(expected, actual, size) == 0;
}

static void print_bytes(const void* data, size_t size) {
    printf("bytes: ");
    for (size_t i = 0; i < size; i++) {
        printf("%02X ", ((const unsigned char*)data)[i]);
    }
    printf("\n");
}

void test(const char* test_name, const void* expected_result, const void* actual_result, size_t size) {
    bool condition = compare(expected_result, actual_result, size);

    if (!condition) {
        printf("FAIL: %s\n", test_name);
        printf("      expected: ");
        print_bytes(expected_result, size);
        printf("      actual  : ");
        print_bytes(actual_result, size);
    } else {
        printf("PASS: %s\n", test_name);
    }
}