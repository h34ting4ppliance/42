#include <stdbool.h>

#ifndef LIB42_H
#define LIB42_H


/*
 * This is a struct that allows you to customize
 * the way you want to compute the answer to the
 * ultimate question of life, universe and everything.
 */
typedef struct
{
    /*
     * This boolean allows you to output the answer
     * to stdout.
     */
    bool to_stdout;
    
    /*
     * This boolean is completely different to the
     * previous one because it allows you to output
     * it to stderr.
     */
    bool to_stderr;
    
    /*
     * In case you don't care about returning the
     * answer, set this to true.
     */
    bool no_return;
    
    /*
     * In case you want to modify the computation
     * parameters to change the results. It is still
     * possible to change this value.
     */
    int return_num;

    /*
     * If you want it to get to work, you need to set
     * this parameter to true.
     */
    bool custom_ret;

    // V e r b o s e
    bool verbose;
} struct42;
int api42(struct42 *a_struct);

#endif
