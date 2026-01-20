#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
// in db header we describe 3 things
struct database_header{ 
    unsigned short verison; // of file type we are using
    unsigned short employees; // how much we can interrate
    unsigned int filesize; // maybe our ffile is corrupter, to prevent this we will do checkers
};
//  Create db file
// echo -ne "\x01\x00\xff\x00\x08\x00\x00\x00" > ./my-db.db


int main(int argc, char *argv[]){

    struct database_header db_h = {0};

    if(argc != 2){
        printf("Usage: %s <filename>\n", argv[0]);
        return 0;
    }
    
    // read - read from a file descriptor
    
    
    
}
