#include <stdio.h>

struct ListStruct {
    unsigned int DataH;
    unsigned int DataL;
    unsigned int NextPtr;
};

#define NULL 0xFFFF

struct ListStruct ListArray[1000];
unsigned int ListHead = 0;

void Q3(unsigned int DATA_A, unsigned int DATA_B) {
    unsigned int found_entry = ListHead;
    unsigned int pre_entry = NULL;
    unsigned int next_entry;

    while (found_entry != NULL) {
        if (ListArray[found_entry].DataH == DATA_A && ListArray[found_entry].DataL == DATA_B) {
            if (pre_entry == NULL)
                printf("pre_entry = NULL, found_entry = ListHead\n");
            else
                printf("pre_entry = %u, found_entry = %u\n", pre_entry, found_entry);
            
            printf("Found it!\n");

            // 檢查條件二
            next_entry = ListArray[found_entry].NextPtr;
            if (next_entry != NULL && 
                ((ListArray[next_entry].DataH << 16) + ListArray[next_entry].DataL) > ((DATA_A << 16) + DATA_B)) {
                printf("Next entry %u satisfies condition 2.\n", next_entry);
            }
            return; // 找到後直接返回
        }
        // 更新 entry
        pre_entry = found_entry;
        found_entry = ListArray[found_entry].NextPtr;
    }
    printf("No found\n");
}
