// NEDIest.cpp : This file contains the 'main' function. Program execution
// begins and ends there.
//

#include <stdio.h>

#define MAX_INPUT_SIZE 36
#define MAX_NUM_PIXELS_PER_BLOCK 16
#define NUM_NEIGHBOURS 4

void process_ir_super_resolution(void) {
  int ir_in_height = 6;
  int ir_in_width = 6;

  int blockSize = 4;
  int i = 0;
  int j = 0;
  int numPixelsPerBlock = blockSize * blockSize;
  int k = 0;
  int a = 0;
  int b = 0;
  int pixels[MAX_NUM_PIXELS_PER_BLOCK] = {0};
  int neighbours[MAX_NUM_PIXELS_PER_BLOCK][NUM_NEIGHBOURS] = {0};

  int data[MAX_INPUT_SIZE] = {1,  2,  3,  4,  5,  6,  7,  8,  9,  10, 12, 13,
                              14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25,
                              26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36};

  for (i = 2; i < ir_in_height - 2; i = i + blockSize) {
    for (j = 2; j < ir_in_width - 2; j = j + blockSize) {
      for (k = 0; k < numPixelsPerBlock; k++) {
        a = k % blockSize;
        b = k / blockSize;

        pixels[k] = data[j + a + ((i + b) * ir_in_width)];
        neighbours[k][0] = data[(j + a - 1) + ((i + b - 1) * ir_in_width)];
        neighbours[k][1] = data[(j + a + 1) + ((i + b - 1) * ir_in_width)];
        neighbours[k][2] = data[(j + a - 1) + ((i + b + 1) * ir_in_width)];
        neighbours[k][3] = data[(j + a + 1) + ((i + b + 1) * ir_in_width)];
      }
    }
  }
  for (i = 0; i < sizeof(neighbours); i++) {
    printf("%d\t", neighbours[i]);
  }
}
int main() {
  process_ir_super_resolution();
  return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started:
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add
//   Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project
//   and select the .sln file
