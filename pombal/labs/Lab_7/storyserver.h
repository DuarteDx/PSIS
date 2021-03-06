#ifndef _STORYSERVER_H_
#define _STORYSERVER_H_
#endif

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <sys/un.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

#include "./linked_list.h"

#ifndef NO_FLAGS
#define NO_FLAGS 0
#endif

#ifndef DEFAULT_PROTOCOL
#define DEFAULT_PROTOCOL 0
#endif

#ifndef MESSAGE_LEN
#define MESSAGE_LEN 100
#endif

#ifndef MESSAGE_GW_LEN
#define MESSAGE_GW_LEN 20
#endif

#ifndef BACKLOG_MAX
#define BACKLOG_MAX 10
#endif

#ifndef BASE_PORT
#define BASE_PORT 3000
#endif

#ifndef CHAR_BUFFER_SIZE
#define CHAR_BUFFER_SIZE 1024
#endif

#ifndef SERVER_UNAVAILABLE
#define SERVER_UNAVAILABLE -1
#endif

#ifndef SERVER_ADDRESS
#define SERVER_ADDRESS 0
#endif

#ifndef CLIENT_ADDRESS
#define CLIENT_ADDRESS 1
#endif

#ifndef AVAILABLE
#define AVAILABLE 1
#endif

#ifndef UNAVAILABLE
#define UNAVAILABLE 0
#endif

typedef struct _message{
    char buffer[MESSAGE_LEN];
} Message;

typedef struct _message_gw{
    int type;
    unsigned int address;
    int port;
} Message_gw;

typedef struct _server_properties{
    struct sockaddr_in server_socket_address;
    int status;
} ServerProperties;
