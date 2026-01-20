#include <stdio.h>
#include <stdbool.h>

struct employee_t{
	int id;
	float income;
	bool stuff;
};
// address of empoyee
void initialize_employee(struct employee_t *e){
    e->id = 0;
    e->income = 0;
    e->stuff = false;

    return;
};

int main(int argc, char* argv[]){
    struct employee_t Ralph;
    // setting the default value for Ralph
   // Ralph.id = 1;
    //Ralph.income = 0;

// send address of Ralph that will be used to initilize values
    initialize_employee(&Ralph);

    printf("%d %.2f %b\n", Ralph.id, Ralph.income, Ralph.stuff);



}
