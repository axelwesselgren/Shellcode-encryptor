#include <stdio.h>
#include <string.h>

unsigned char shellcode[] = "";

int main() {
    const char* key = "";
    int key_length = strlen(key);
    int shellcode_length = sizeof(shellcode) / sizeof(shellcode[0]);

    printf("unsigned char shellcode[] = \"");

    for (int i = 0; i < shellcode_length; i++) {
        unsigned char encrypted_byte = shellcode[i] ^ key[i % key_length];

        printf("\\x%02x", encrypted_byte);

        if ((i + 1) % 12 == 0) {
            printf("\"\n\"");
        }
    }

    printf("\";\n");

    return 0;
}
