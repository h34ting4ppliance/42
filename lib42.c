/*
 *  42 by h34ting4ppliance.
 *
 *      This program gives you the answer to
 *      the ultimate question of life, universe
 *      and everything.
 *
 *      This file contains the 42lib, an API to
 *      embed 42 in your applications.
 */

/*

    MIT License

    Copyright (c) 2020 h34ting4ppliance

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.

*/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "lib42.h"

/*
 * This function is most important function
 * that allows the program to function correctly.
 *
 * It computes the answer to the ultimate question
 * of life, universe and everything using a very
 * complex algorithms that no one has seen before.
 */
int get_answer()
{
    /*
     * As you can see, the program uses the return
     * method to compute this answer. It took me
     * a few years to become a stable program.
     */
    return 42;
}

/*
 * In case something goes wrong in this very
 * complex calculation system, you can enable
 * the verbose parameter in the struct42 struct.
 */
void epic_log(const char* message)
{
    fprintf(stderr, "[#] %s\n", message);
}

/*
 * Ok this is where it gets serious because it is
 * all the meaning of this API. This function will
 * allow to pass the struct and returns an answer
 * corresponding to the parameters precised in
 * the struct.
 */
int api42(struct42 *a_struct)
{
    /*
     * Using get_answer to computer the answer, it
     * may take up to a second to compute. Yes it is
     * very fast to compute it. I have managed to make
     * it as fast as possible.
     */
    int answer;
    if (a_struct->custom_ret)
        answer = a_struct->return_num;
    else
        answer = get_answer();

    /*
     * Now we just need to parse the answer to match
     * the corresponding parameters that have been setted
     * up using the struct42 struct.
     */
    
    // Outputing to stdout.
    if (a_struct->to_stdout)
        printf("%d\n", answer);
    // Output to stderr.
    if (a_struct->to_stderr)
        fprintf(stderr, "%d\n", answer);

    /*
     * The program will now return an integer depending
     * what the user have setted on the no_return parameter.
     * The answer may remain extremely variable.
     */
    if (a_struct->no_return)
        return 0;
    else
        return answer;
}
