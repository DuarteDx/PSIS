#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/un.h>

#define SOCKET_NAME "/tmp/lab_6_socket"
#define MESSAGE_LEN 100
#define STORY_LEN 10000

typedef struct message{
    char buffer[MESSAGE_LEN];
} message;
