#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// in db header we describe 3 things
struct database_header{
    unsigned short version; // of file type we are using
    unsigned short employees; // how much we can interrate
    unsigned int filesize; // maybe our ffile is corrupter, to prevent this we will do checkers
};
//  Create db file
// echo -ne "\x01\x00\xff\x00\x08\x00\x00\x00" > ./my-db.db


int main(int argc, char *argv[]){

    struct database_header head = {0};
    struct stat dbStat = {0}; // information about db file

    if(argc != 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
// opening a file db using command line input
    int fd = open(argv[1],O_RDWR | O_CREAT , 0664);
    if(fd == -1){
        perror("Open a file.");
        return -1;
    }

// read from a file descriptor
    if(read(fd, &head, sizeof(head)) != sizeof(head)){
        perror("Head file.");
        close(fd);
        return -1;
    }

    printf("DB verions: %u",head.version);
    printf("DB Number of Employees: %u\n", head.employees);
    printf("DB File Length: %u\n",head.filesize);

    if(fstat(fd, &dbStat) < 0){
        perror("fStat");
        return -1;
    }

    printf("DB File Length: %lu\n", dbStat.st_size);

    if(dbStat.st_size != head.filesize){
        printf("GET OUT :)");
        close(fd);
        return -2;
    }
    close(fd);
    return 0;
}
