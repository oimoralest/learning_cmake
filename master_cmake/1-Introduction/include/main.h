#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


#define SUCCESS 0
#define FAIL -1
#define FALSE 0
#define TRUE 1

char* prog_name;

void usage();
void check_numbers(char*, char*);
int is_number(char*);
void sum(long int, long int);
void div_(long int, long int);
