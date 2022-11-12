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

2. Start the Client by runnning from another terminal `./ping_pong <HOSTNAME> <PING|PONG>`, for example `./ping_pong localhost PING`

## Example: 

Server side:

![Снимок экрана от 2022-11-12 19-50-25](https://user-images.githubusercontent.com/55508043/201485132-ab3c41de-a088-46a6-a668-d40600a856c4.png)

Client side:

![Снимок экрана от 2022-11-12 19-51-22](https://user-images.githubusercontent.com/55508043/201485158-4b711a13-ae88-45c3-acdd-6a8b5fbdee46.png)
