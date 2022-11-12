# ping-pong-rpc
Repository with solution of Ping-Pong task using Remote Procedure Call

## Build
1. If you want to regenerate files using RPCGen, run:

```
make xdr
```

2. To get executable files run:

```
make -f ./Makefile
```

## Run
1. Start the Server by running from terminal `./ping_pong_svc`

2. Start the Client by runnning from another terminal `./ping_pong <HOSTNAME> <PING|PONG>`

For example: `./ping_pong localhost PING`



