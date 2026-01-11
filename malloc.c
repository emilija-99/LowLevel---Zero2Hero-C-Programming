#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 100

struct employee_t{
	int id;
	float income;
	bool stuff;
};


void initialize_employee(struct employee_t *e){
    e->id = 0;
    e->income = 0;
    e->stuff = false;

    return;
};

int main(int argc, char* argv[]){
    int n = 3;

	struct employee_t *employee = malloc(sizeof(struct employee_t)*n);
	if(!employee){
		printf("allocator failed");
		return -1;
	}

	initialize_employee(&employee[0]);

	printf("id: %d\n", employee[0].id);
	free(employee);
	employee = NULL;

	return 0;
}
