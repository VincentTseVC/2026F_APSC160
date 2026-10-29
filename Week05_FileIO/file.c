#include <stdio.h>

int main() {

    FILE *f = fopen("vc.txt", "w");

    int age = 18;
    fprintf(f, "Hello, My name is Vincent, and I am %d years old\n", age);

    fclose(f);



    FILE *f2 = fopen("vc.txt", "r");

    if (f2 == NULL) {
        printf("Error: file not found.\n");
    } else {
        int vc_age;
        fscanf(f2, "Hello, My name is Vincent, and I am %d years old\n", &vc_age);

        fclose(f2);

        printf("VC's age: %d\n", vc_age);
    }

}