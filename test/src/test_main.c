/**
 * @file test_main.c
 * @author Rob Barwell, Olumide Akinola
 * @date 17 Mar 2020, Last Updated 27 Mar 2020
 * @brief This file contains the main function to run all tests.
 */

#include <stdio.h>
#include <stdlib.h>

#include "../../include/data_types.h"
#include "../../include/common_functions.h"
#include "../../include/strat_airlift_functions.h"
#include "../../include/parse_airports.h"
#include "../include/strat_airlift_functions_tests.h"

/**
 * @brief my_sizes is used to store the sizes of the dynamic arrays used throughout the program.
 */
struct SIZES *my_sizes;

/**
 * @brief The main function to run the tests for the strategic airlift input generator.
 *
 * The following are valid command line arguments:
 * TBD - by Edwin
 *
 * @return 0 if the application executed successfully.  Any other number if their was an error.
 */
int main() {    
    int rtn_val=0;              // The current state of the function to return
    
    printf("=== Testing_parse_airports ===\n");
    if(parse_airports_test()==0) {
        printf("parse_airports test PASSED.\n");
    }else {
        printf("parse_airports test FAILED.\n");
        rtn_val=-1;
    }

    printf("=== Testing calc_shortest_path ===\n");
    if(calc_shortest_path_test()==0) {
        printf("calc_shortest_path test PASSED.\n");
    }else {
        printf("calc_shortest_path test FAILED.\n");
        rtn_val=-5;
    }

    printf("%s\n",rtn_val==0 ? "All tests PASSED." : "One or more tests FAILED.");
    
    return rtn_val;
}