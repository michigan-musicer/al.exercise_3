// #include "e4_in_class_practice.h"

// // void shout() {
// //     printf("FUS RO DAH\n");
// // }

// void shoutHi() {
//     printf("HI\n");
// }

// void shoutPotato() {
//     printf("POTATO\n");
// }

// void shoutGamer() {
//     printf("GAMER\n");
// }

// void shout(char * str) {
//     printf("%s\n", str);
// }

// int main() {
//     shout("FUS RO DAH"); // will print "FUS RO DAH" to terminal
// }

// int add(int a, int b) {
//     return a + b;
// }

void countDown(int x) {
    if (x == 0) {
        printf("Blast off!\n");
        return;
    }
    else {
        printf("%d...", x);
        countDown(x - 1);
    }
}

int main() {
    countDown(5); // will count down from 5 to 1, then blast off
}



// int main() {
//     printf("%d\n", add(2, 3)); // prints 5
//     printf("%d\n", add(75, 25)); // prints 100
//     printf("%d\n", add(33, 43)); // prints 76
//     printf("%d\n", add(-70, 114)); // prints 44
// }

// void scratch() {










// }

// int main() {
//     printf("hello!\n");
//     call_some_function();
// }