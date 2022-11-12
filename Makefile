.SUFFIXES:
.SUFFIXES: .c .o
CLNT = ping_pong
SRVR = ping_pong_svc
CFLAGS = -g -Wall

SRVR_OBJ = ping_pong_svc_proc.o ping_pong_svc.o
CLNT_OBJ = ping_pong_clnt_proc.o ping_pong_clnt.o

.c.o:; gcc -c -o $@ $(CFLAGS) $<

default: $(CLNT) $(SRVR)

$(CLNT): $(CLNT_OBJ) ping_pong.h
	gcc -o $(CLNT) $(CLNT_OBJ)

$(SRVR): $(SRVR_OBJ) ping_pong.h
	gcc -o $(SRVR) $(SRVR_OBJ)

clean:
	rm *.o $(CLNT) $(SRVR)

xdr:
	rpcgen ping_pong.x
