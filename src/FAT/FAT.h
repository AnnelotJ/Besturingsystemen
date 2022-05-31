#ifndef FAT_H
#define FAT_H

typedef struct BLOCK{
    char* fileName;
    int reserved, fileSize; 
} BLOCK_t; 

typedef struct FAT {
    int amountOfBlock;
    int maxDataSize; 
    BLOCK_t *blocks [];
} FAT_t;

void store();
void retrieve(); 
void erase();
void files();
void freeSpace(); 

#endif