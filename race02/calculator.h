#pragma once

#include <stdbool.h>
#include <unistd.h>
#include <stdlib.h>

#ifndef HEADER_H
#define HEADER_H

int result(int num1, int num2, char operation);
int q_to_num(char *s);
char sign(char *s);
int mx_atoi(const char *str);
void mx_printint(int num);
void mx_printchar(char c);
void mx_printstr(const char *s);
int main(int argc, char **argv);

#endif
