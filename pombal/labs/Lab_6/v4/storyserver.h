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
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>


#define SOCKET_NAME "/tmp/lab_6_socket_v3"
#define MESSAGE_LEN 100
#define BACKLOG_MAX 10
#define PORT 48000

typedef struct message{
    char buffer[MESSAGE_LEN];
} message;
