#include "ping_pong.h"
#include <string.h>

#define PING "PING"
#define PONG "PONG"
#define SPLIT_S_ADDR_INTO_BYTES( \
    s_addr)                      \
    ((s_addr)) & 0xFF,           \
        ((s_addr) >> 8) & 0xFF,  \
        ((s_addr) >> 16) & 0xFF, \
        ((s_addr) >> 24) & 0xFF

char **ping_pong_1_svc(char **message, struct svc_req *req)
{
    static char *server_message;
    printf("Server received %s from client with address %hu.%hu.%hu.%hu\n", *message, SPLIT_S_ADDR_INTO_BYTES(req->rq_xprt->xp_raddr.sin_addr.s_addr));
    server_message = strcmp(*message, "PING") == 0 ? PONG : PING;
    return &server_message;
}