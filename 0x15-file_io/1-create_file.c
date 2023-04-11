#include "main.h"
#include <string.h>
#include <errno.h>

int create_file(const char *filename, char *text_content) 
{
    if (filename == NULL) {
        return -1;
    }

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
    if (fd == -1) {
        return -1;
    }

    if (text_content != NULL) {
        size_t len = strlen(text_content);
        ssize_t nwritten = write(fd, text_content, len);
        if (nwritten == -1 || (size_t)nwritten != len) {
            close(fd);
            return -1;
        }
    }

    close(fd);
    return 1;
}
