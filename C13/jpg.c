#include <stdint.h>
#include <stdio.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[]) {
    FILE *file = fopen(argv[1], "r");
    if (!file)
        return 1;
    BYTE bytes[3];
    fread(bytes, sizeof(BYTE), 3, file);
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
        printf("Yes, possibly\n");
    fclose(file);
}
