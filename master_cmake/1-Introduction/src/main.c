#include "main.h"

int main(int argc, char* argv[]) {
    long int num_1 = 0, num_2 = 0;

    prog_name = argv[0];

    if (argc != 3) {
        usage();

        return FAIL;
    }

    check_numbers(argv[1], argv[2]);
    num_1 = atol(argv[1]);
    num_2 = atol(argv[2]);

    sum(num_1, num_2);
    div_(num_1, num_2);

    return SUCCESS;
}
