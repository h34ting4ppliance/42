#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <getopt.h>
#include "lib42.h"

#define HELP    "Usage: 42 [OPTION]...\n" \
                "Returns the answer to the ultimate question of life.\n\n" \
                "   -s, --stdout        Prints the answer to stdout.\n" \
                "   -e, --stderr        Prints the answer to stderr.\n" \
                "   -n, --no-return     Returns 0 instead of the answer.\n" \
                "   -c, --custom        Custom return number.\n" \
                "   -v, --verbose       Verbose.\n" \
                "   -h, --help          Display this help and exit.\n" \
                "   -V, --version       Output version information and exit.\n\n" \
                "Examples: \n" \
                "   42      Returns the answer to the ultimate question of life.\n" \
                "   42 -n   Returns 0.\n\n" \
                "42 online help: <https://h3liu.ml/w/42.html>\n" \
                "or available locally via: man 42\n\n" \
                "Report bugs to <no@example.org>\n\n"

#define VERSION "42 Computation Program 4.2\n" \
                "Copyright (C) 2020 h34ting4ppliance.\n" \
                "Licensed under the MIT License <https://mit-license.org/>.\n" \
                "This is free software; you are free to change and redistribute it.\n" \
                "There is NO WARRANTY, to the extent permitted by law.\n\n" \
                "Written by h34ting4ppliance.\n"

static struct option long_options[] = {
    {"stdout", no_argument, NULL, 's'},
    {"stderr", no_argument, NULL, 'e'},
    {"no-return", no_argument, NULL, 'n'},
    {"custom", required_argument, NULL, 'c'},
    {"verbose", no_argument, NULL, 'v'},
    {"help", no_argument, NULL, 'h'},
    {"version", no_argument, NULL, 'V'}
};

bool verbose_logs = false;

void print_usage();
void print_version();
void generate_struct(struct42* a_struct, const int argc, char** argv)
{
    char c;
    a_struct->to_stdout = false;
    a_struct->to_stderr = false;
    a_struct->no_return = false;
    a_struct->custom_ret = false;

    while ((c = getopt_long(argc, argv, "senc:vhV", long_options, NULL)) != -1)
        switch (c)
        {
            case 's':
                a_struct->to_stdout = true;
                break;
            case 'e':
                a_struct->to_stderr = true;
                break;
            case 'n':
                a_struct->no_return = true;
                break;
            case 'c':
                a_struct->custom_ret = true;
                a_struct->return_num = atoi(optarg);
                break;
            case 'v':
                printf("You won't believe it but I was too lazy to implement verbosity.\n");
                break;
            case 'h':
                print_usage();
                exit(0);
                break;
            case 'V':
                print_version();
                exit(0);
                break;
            default:
            case '?':
                print_usage();
                exit(1);
                break;
        }
}

void print_usage()
{
    printf(HELP);
}

void print_version()
{
    printf(VERSION);
}

int main(int argc, char** argv)
{
    struct42 config;
    generate_struct(&config, argc, argv);
    
    int answer = api42(&config);
    return answer;
}
