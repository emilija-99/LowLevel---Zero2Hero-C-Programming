#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }

    // int open(const char *pathname, int flags);
    // flags -> O_WRONLY, O_RDWR..
    // for opening file need to be specified premmisions
    // of the file 0644 > go to non private files
    // this create and write file > does not work on existng file!!!
    int fd = open(argv[1], O_RDWR | O_CREAT, 0644);
    if(fd == -1){
        perror("Open;");
        return -1;
    }

    char *mydata = "hello there!\n";
    write(fd, mydata, strlen(mydata));

    close(fd);
// only function allocated by malloc, calloc and realloc
// need to be free and NULL to memory > dynamic allocation
// using only *pointer is static allocation that doesn't
// implycitly means that is heap allocation
// POINTER !== ALLOCATION
// pointer only > an address holder
// it says noting about: where the memory lives, who owns it, whether it can be freed
// what happends actually
// - pointer to variable, static / read only memory > no heap involved,
// allocation not happend!!!!

// ISSUE WITH UNDERSTANDING:
    // free(mydata);
    // mydata = NULL;
    return 0;
}
