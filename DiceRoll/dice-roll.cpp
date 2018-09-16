#include <emscripten/emscripten.h>
#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>

// https://tutorialzine.com/2017/06/getting-started-with-web-assembly

struct TinyStruct {
  short len;
  std::string chars;
};

extern "C" {
int example() {
  TinyStruct example;
  example.chars = "Hello World";
  example.len = example.chars.length();

  EM_ASM({debugger});

  return 0;
}

int roll_dice() {
  srand(time(NULL));
  return rand() % 6 + 1;
}

void wtf() { std::cout << "WTF!" << std::endl; }
}

// The code inside the main will be executed once the WASM module loads.
int main(int /*argc*/, char ** /*argv*/) {
  std::cout << "WebAssembly module loaded" << std::endl;
}

// Simple C function that returns a number between 1 and 6.
