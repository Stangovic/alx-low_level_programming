#include "main.h"

int create_file(const char *filename, const char *text_content) 
{
    if (filename == NULL) {
        return -1;
    }

    int fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;
    }

    ssize_t nwritten = 0;
    if (text_content != NULL) {
        while (text_content[nwritten] != '\0') {
            nwritten++;
        }
        nwritten = write(fd, text_content, nwritten);
    }

    close(fd);
    return nwritten == -1 ? -1 : 0;
}
