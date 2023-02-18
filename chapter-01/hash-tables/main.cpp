//
// Created by andrescabana86 on 26/06/2022.
//
#include <iostream>
// #include <stdio.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 10

typedef struct {
    char name[MAX_NAME];
    int age;
} Person;

unsigned int hash(char* name) {
    int length = std::strlen(name);
    unsigned int hash_value = 0;
    for (int i=0; i < length; i++) {
        hash_value =+ name[i]; // 'a', 'n', ...
        hash_value = (hash_value * name[i]) % TABLE_SIZE;
    }
    return hash_value;
}

int main() {
    hash("andres");
    return 0;
}