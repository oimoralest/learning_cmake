#include "main.h"

int is_number(char *num) {
    while (*num) {
        if (!isdigit(*num)) {
            return FALSE;
        }
        num++;
    }

    return TRUE;
}

void check_numbers(char* num_1, char* num_2) {
    int right_arguments = 0;

    right_arguments = is_number(num_1) & is_number(num_2);

    if (right_arguments) {
        return;
    }

    fprintf(
        stderr,
        "Bad Usage: Wrong arguments!\n"
        "%s or %s are not valid numbers\n"
        "++++++++++++++++++++++++++++++\n",
        num_1,
        num_2
    );
    usage();

    exit(FAIL);
}
