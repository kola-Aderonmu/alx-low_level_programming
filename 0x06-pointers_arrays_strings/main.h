#ifndef MAIN_H
#define MAIN_H
#include<stdio.h>
/**
*void prototypes()
*int prototypes()
*char prototypes()
*/
void reverse_array(int *a,int n);
void print_number(int n);
void print_buffer(char *b,int size);
int_strcmp(char *s1,char *s2);
char *_strcat(char *dst,char *src);
char *_strcat(char *dst,char *src,int n);
char*_strcpy(char *dst,char *src,int n);
char *string_toupper(char *);
char *cap_string(char *);
char *leet(char *);
char *rot13(char *);
char *infinite_add(char *n1,char *n2,char *r,int size_r);
char *add_strings(char *n1,char *n2,char *r,int r_index);

#endif/*MAIN_H*/