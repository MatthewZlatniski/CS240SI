# File to Struct - C Programming Problem
## Table of Content
- [Problem Statement](#Problem Statment)
- [Objective](#Objective)
- [Existing Code Review](#Existing Code Review)
- [read_data()](#read_data(char * filename) Function Description)
- [filter_by_brand](#filter_by_brand(char * brand) Function Description)
- [Testing](#Testing)

## Problem Statement

You are provided with a C program named `file_to_struct.c`. The program is designed to read car data from a file into a struct array and allows filtering of entries based on a specified brand. However, the `read_data` and `filter_by_brand` functions are incomplete.

## Objective

Your objective is to complete the missing functionality in the `read_data` and `filter_by_brand` functions to make the program fully functional.

## Existing Code Overview

- the global structures contains variables for each data element in the input files
- The global `g_data_arr` array is used to store the car data.
- The number of cars is tracked using `g_num_cars`.

## read_data(char * filename) Function Description

Complete the `read_data` function to correctly read car data from the file. Ensure that data is stored in the global array and that error handling is implemented.

You should open the file that was passed as an argument. Then read the lines of the file while storing the contents in the global car array. If a file is misformatted, print an error statement and return -1. On success return 0.

## filter_by_brand(char * brand) Function Description

The `filter_by_brand` function is responsible for filtering and printing entries based on a specified brand passed as an argument.

Print all data relating to cars that are of the brand specified. Use the form used in the input files.


## Testing
The main function is provided for you to see the output of your code. Feel free to modify it.

It can be run using the following usage: ./file_to_struct \[filename\] \[Optional: Brand\]

Filename is required and is the file containing car data. Brand is optional and is the brand to filter by.

