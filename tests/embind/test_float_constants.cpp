#include <emscripten/bind.h>
#include <emscripten/emscripten.h>

#define PI 3.1416
#define EULER 2.7182818
const float pi = 3.1416;
const double euler = 2.7182818;

EMSCRIPTEN_BINDINGS(constants) {
  emscripten::constant("PI", PI);
  emscripten::constant("EULER", EULER);
  emscripten::constant("pi", pi);
  emscripten::constant("euler", euler);
}

int main() {
    EM_ASM(
        console.log("PI (as double) = " + Module['PI']);
        console.log("EULER = " + Module['EULER']);
        console.log("pi (as float) = " + Module['pi']);
        console.log("euler = " + Module['euler']);
    );
}