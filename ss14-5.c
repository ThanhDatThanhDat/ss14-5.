#include <stdio.h>
#include <ctype.h>

int main() {
    char chuoi[100];  
    int i, dem = 0;
    int trong_tu = 0;  

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin); 
    for (i = 0; chuoi[i] != '\0'; i++) {
        if (isalpha(chuoi[i])) {
            if (trong_tu == 0) {
                dem++; 
                trong_tu = 1;  
            }
        } else {
            trong_tu = 0;  
        }
    }
    printf("So luong tu: %d\n", dem);

    return 0;
}
