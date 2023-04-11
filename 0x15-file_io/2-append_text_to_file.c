#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int append_text_to_file(const char *filename, const char *text_content) 
{
    if (filename == NULL) {
        return -1;
    }

    int file_descriptor = open(filename, O_WRONLY | O_APPEND);
    if (file_descriptor == -1) {
        return -1;
    }

    size_t text_length = strlen(text_content);
    ssize_t bytes_written = write(file_descriptor, text_content, text_length);
    if (bytes_written == -1 || (size_t) bytes_written != text_length) {
        return -1;
    }

    if (close(file_descriptor) == -1) {
        return -1;
    }

    return 0;
}
