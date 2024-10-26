#include <stdio.h>
#include <stdlib.h>

int global_var1 = 1;
int global_var2 = 2;
int global_var3 = 3;
int global_var4 = 4;
int global_var5 = 5;

int stack(int x) {
  printf("Address of x (local_variable) %d: is at %p\n", x, (void*)&x);
  if (x == 0) return 0;
  return stack(x - 1);
}

int main() {
    
    printf("\nGlobal Variable\n");
    printf("Address of global_var1: %p\n", (void*)&global_var1);
    printf("Address of global_var2: %p\n", (void*)&global_var2);
    printf("Address of global_var3: %p\n", (void*)&global_var3);
    printf("Address of global_var4: %p\n", (void*)&global_var4);
    printf("Address of global_var5: %p\n", (void*)&global_var5);

    printf("\nHeap\n");
    int* heap1 = (int*)malloc(sizeof(int));
    int* heap2 = (int*)malloc(sizeof(int));
    int* heap3 = (int*)malloc(sizeof(int));
    int* heap4 = (int*)malloc(sizeof(int));
    int* heap5 = (int*)malloc(sizeof(int));

    printf("Address of heap1 (malloc): %p\n", (void*)heap_var1);
    printf("Address of heap2 (malloc): %p\n", (void*)heap_var2);
    printf("Address of heap3 (malloc): %p\n", (void*)heap_var3);
    printf("Address of heap4 (malloc): %p\n", (void*)heap_var4);
    printf("Address of heap5 (malloc): %p\n", (void*)heap_var5);

    printf("\nStack\n");
    stack(5);

    free(heap_var1);
    free(heap_var2);
    free(heap_var3);
    free(heap_var4);
    free(heap_var5);

    return 0;
}
