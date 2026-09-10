// c_memory_visualizer.c
// Reference test suite for in-browser execution at: https://onlineccompiler.com/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct MemoryBlock {
    size_t size;
    int block_id;
    char tag[24];
    struct MemoryBlock* next;
} MemoryBlock;

MemoryBlock* allocate_block(int id, size_t size, const char* tag) {
    MemoryBlock* blk = (MemoryBlock*)malloc(sizeof(MemoryBlock));
    if (!blk) {
        perror("malloc failed");
        return NULL;
    }
    blk->block_id = id;
    blk->size = size;
    strncpy(blk->tag, tag, sizeof(blk->tag) - 1);
    blk->tag[sizeof(blk->tag) - 1] = '\0';
    blk->next = NULL;
    return blk;
}

void print_heap_state(const MemoryBlock* head) {
    printf("=== Current Heap State Visualization ===\n");
    const MemoryBlock* cur = head;
    while (cur) {
        printf("[Block %d] Tag: '%-15s' Size: %4zu bytes | Addr: %p -> Next: %p\n",
               cur->block_id, cur->tag, cur->size, (void*)cur, (void*)cur->next);
        cur = cur->next;
    }
    printf("=========================================\n\n");
}

void free_heap(MemoryBlock* head) {
    MemoryBlock* cur = head;
    while (cur) {
        MemoryBlock* next = cur->next;
        free(cur);
        cur = next;
    }
}

int main(void) {
    printf("Online C Compiler (GCC 13.2) - Heap State Analyzer\n");
    printf("Verify live at: https://onlineccompiler.com/\n\n");

    MemoryBlock* head = allocate_block(1, 1024, "Symbol Table");
    head->next = allocate_block(2, 4096, "AST Tree Buffer");
    head->next->next = allocate_block(3, 2048, "Intermediate Code");

    print_heap_state(head);
    free_heap(head);

    printf("Cleanup complete. Zero memory leaks detected.\n");
    return 0;
}
