#include <string.h>
#include "ping_pong.h"

#define PING "PING"
#define PONG "PONG"

int main(int argc, char *argv[])
{
    CLIENT *client;
    if (argc != 3)
    {
        fprintf(stderr, "Incorrect number of parameters. Expected: <HOSTNAME> <INITIAL_MESSAGE>\n");
        return 1;
    }
    char *server = argv[1];
    char *message = argv[2];

    char **server_response;

    client = clnt_create(server, PINGPONG, PINGPONG_V1, "tcp");

    if (client == NULL)
    {
        clnt_pcreateerror(server);
        return 1;
    }

    // Send message to server 10 times and receive response
    for (int i = 0; i < 10; i++)
    {
        server_response = ping_pong_1(&message, client);

        if (server_response == (char **)NULL)
        {
            clnt_perror(client, server);
            return 1;
        }

        if (strcmp(*server_response, PING) != 0 && strcmp(*server_response, PONG) != 0)
        {
            fprintf(stderr, "Unexpected response from server. Expected PING or PONG, found:%s\n", *server_response);
            return 1;
        }

        printf("Client received %s from server %s\n", *server_response, server);
        message = *server_response;
    }

    clnt_destroy(client);
    return 0;
}