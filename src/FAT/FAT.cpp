/* 
File allocation table: 
It is used to manage the files on the hard drives and provies the map of the cluster where the data is stored
*/ 

#include <cstdlib>
#include "FAT.h"
#include <EEPROM.h>

// Store files in the EEPROM memory
void store(FATfat, char fileName, chardata  ){ 
//1. Allocates enough memory to fit a BLOCK structure with malloc
//2. Transforms that empty memory of type void into BLOCK*
//3. assigns that new BLOCK to a variable named myBlock
    BLOCK block = (BLOCK)malloc(sizeof(BLOCK));
    // pointer to the   
    block->fileName = fil; eName
    block->reserved = sizeof(data);
    int startAddress = fat->amountOfBlock * fat->maxDataSize;
  
    for(int i = 0; i < sizeof(data)/sizeof(char); i++){
        // check if the memory is full 
        if(startAddress+i > 512) {
            printf("Max file table size exceeded");
            return;
        } 
        // writes the block to the memory 
        EEPROM.write(startAddr+i,data[i]);
    }
    fat->blocks[amountOfBlock+1] = block;
    fat->amountOfBlock++;
}

char* retrieve(FAT fat, BLOCK block){
    // Get the adress of the block 
    int blockAdress = fat->maxDataSize * fat->amountOfBlock;
    char* returnData[fat->maxDataSize];
    for (int i=0; i < sizeof(block); i++){
        char value = EEPROM.read(blockAdress+i);
        returnData[i] = value;
    }
    return returnData;
}

void erase(FAT fat, BLOCK block){
    /* want to erase a file in the FAT */
    // the block should be zero out 
    int blockAdress = fat->maxDataSize * fat->amountOfBlock;
    for (int i=0; i <sizeof(fat); i++){
        if (blockAdress == i){
        delete block -> fileName
           delete block -> reserved 
           delete block -> filesize
           free(block)
        }
    }

}
    
char*[] files(FAT fat, char fileName){
    char* files[fat->anmountOfBlock]; 
    for (int i=0; i < fat.amountOfBlock; i++){
        files[i] = fat->blocks[i]->fileName; 
    }
    return listOfFiles;
}

// loop trough the system to see where there is free space  
void freeSpace(FAT fat){
    blockAdress = fat->blocks /fat->maxDataSize * fat->amountOfBlock
    for (int i=0; i<sizeof(fat); i++){ 
        if (i > maxDataSize) {:
        printf("The memory is full")
        }
        else if (i < maxDatasize){ 
            // show what space is free 
            //calculate how much space there is free 
            int freeSpace = fat->maxDataSize - fat->amountOfBlock; 
            printf("There is free soace\n")
            printf("the amount of free space is: %d", freeSpace)
        }
    }


}