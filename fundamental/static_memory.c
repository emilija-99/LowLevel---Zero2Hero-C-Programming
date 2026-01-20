#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100
// global variables
int global_n_employees = 0;

struct employee_t{
	int id;
	float income;
	bool stuff;
};


int initialize_employee(struct employee_t *e){
// static variables
    static int numEmployees = 0;
    numEmployees++;

    e->id = numEmployees;
    e->income = 0;
    e->stuff = false;
    printf("numEmployees: %d\n", numEmployees);
    return numEmployees;
};

int main(int argc, char* argv[]){
    int n = 3;

	struct employee_t *employee = malloc(sizeof(struct employee_t)*n);
	if(!employee){
		printf("allocator failed");
		return -1;
	}
/*
	initialize_employee(&employee[0]);
	initialize_employee(&employee[1]);

    numEmployees: 1
    numEmployees: 2
    id: 0
 */

    for(int i = 0; i < n; i++){
        int id = initialize_employee(&employee[i]);
        printf("i: %d, id of employee check: %d\n", id, employee[i].id);
	}
	free(employee);
	employee = NULL;

	return 0;
}
