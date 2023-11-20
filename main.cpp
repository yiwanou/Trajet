//
// Created by Qinshu Dai on 20/11/2023.
//
int global_array[100] = {-1};

int main(int argc, char **argv) {
    return global_array[argc + 100];  // global buffer overflow
}