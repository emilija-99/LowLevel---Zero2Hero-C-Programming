#include <stdio.h>
#include <stdbool.h>

#define MAX_EMPLOYEE 10
struct employee_t{
	int id;
	char first_name[64];
	char last_name[64];
	float income;
	bool is_manager;
};

int main(int argc, char* argv[]){

	// struct employee_t Fred;
	// Fred.income = 10000;
	// Fred.is_manager = true;

	// Array of employees
	struct employee_t employees[MAX_EMPLOYEE];

	int i = 0;
	for(i = 0; i < MAX_EMPLOYEE; i++){
	    employees[i].income = 0;
		employees[i].is_manager = false;
	}

	for(i = 0; i < MAX_EMPLOYEE; i++){
	    printf("%f\n",employees[i].income);
	}
}
