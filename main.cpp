#include "mbed.h"

InterruptIn JS_up(p15);
InterruptIn JS_down(p16);
InterruptIn JS_left(p17);
InterruptIn JS_right(p18);

int main() {
    JS_up.rise([](){ printf(" The JS is Up\n"); });
    JS_down.rise([](){ printf("The JS is Down\n"); });
    JS_left.rise([](){ printf("The JS is Left\n"); });
    JS_right.rise([](){ printf("The JS is Right\n"); });

    while(1) {
        // Do nothing
    }
}
