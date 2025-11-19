#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *f;
    int ch;

    f = fopen("DEMO.txt", "w");
    while ((ch = getchar()) != EOF) {
        putc(ch, f);
    }
    fclose(f);

    f = fopen("DEMO.txt", "r");
    fseek(f, 0, SEEK_END);
    long n = ftell(f);
    rewind(f);

    char *s = malloc(n + 1);
    fread(s, 1, n, f);
    s[n] = '\0';
    fclose(f);

    for (long i = n - 1; i >= 0; --i) {
        putchar(s[i]);
    }

    free(s);
      printf("Name : Vaghasiya Rudra Hiteshbhai\n");
    printf("Id   : 25CE129\n");
    printf("Batch: C-2\n");
    return 0;
}
