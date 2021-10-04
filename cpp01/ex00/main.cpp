#include "Pony.hpp"


int main() {
    Pony *heap_pony = ponyOnTheHeap("Lola", 12);
    Pony stack_pony = ponyOnTheStack("Mash", 6);

    delete(heap_pony);

    return 0;
}
