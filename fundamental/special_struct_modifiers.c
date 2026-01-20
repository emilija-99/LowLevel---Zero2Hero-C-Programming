#include <stdio.h>
#include <stdbool.h>

__attribute__((__packed__))struct employee_t{
	int id;
	char first_name[64];
	char last_name[64];
	float income;
	bool is_manager;
};

int main(int argc, char* argv[]){

	struct employee_t Fred;
	printf("Size of employee_t struct is: %ld\n", sizeof(struct employee_t));
}
