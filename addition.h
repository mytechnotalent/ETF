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
 * @file addition.h
 *
 * @brief Function prototypes for the addition source file.
 * 
 * This contains the function prototypes for addition source file.
 *
 * @author Kevin Thomas
 * @date   11/14/2023
 */

#ifndef __ADDITION_H
#define __ADDITION_H

#include <stdint.h>
#include <stdio.h>

/**
 * @brief  Adds two integers and returns the result.
 *
 *         This function takes two integers as input parameters, adds them
 *         together, and returns the result.
 *
 * @param  a: The first integer operand.
 * @param  b: The second integer operand.
 * @retval The sum of the two input integers.
 */
int32_t add_integers(int32_t a, int32_t b);

#endif // __ADDITION_H
