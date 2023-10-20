#include <stddef.h>
#include <stdio.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t sze)
{
    size_t        i;
    char        *dst2;
    const char    *src2;

    dst2 = dst;
    src2 = src;
    i = 0;
    while (i < sze)
    {
        dst2[i] = src2[i];
        i++;
    }
    return (dst2);
}


int main() {
    unsigned char buffer[] = {'a', 'b', 'c', 'd', 'e'};
    for (int i = 0; i < 5; i++) {
    printf("%c\n", buffer[i]);
    }
    printf("\n");

    memcpy(buffer + 1, buffer, 4);

    for (int i = 0; i < 5; i++) {
    printf("%c\n", buffer[i]);
    }
    printf("\n");
    return 0;
}
