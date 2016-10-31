/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Simon Olofsson
 *
 * Created on October 31, 2016, 8:48 PM
 */
#include <main.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int allocateMem(){
    int * array = malloc(10 * sizeof(int));
    //check if the memory was allocated
    if (NULL == array) {
    fprintf(stderr, "malloc failed\n");
    }
    else{
        printf("Memory allocated successfully");
    }
    free(array);
    return 0;
}
int main() {
    
    allocateMem();
    return 0;
}

