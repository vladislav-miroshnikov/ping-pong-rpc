/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _PING_PONG_H_RPCGEN
#define _PING_PONG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


#define PINGPONG 0x2fffffff
#define PINGPONG_V1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ping_pong 1
extern  char ** ping_pong_1(char **, CLIENT *);
extern  char ** ping_pong_1_svc(char **, struct svc_req *);
extern int pingpong_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ping_pong 1
extern  char ** ping_pong_1();
extern  char ** ping_pong_1_svc();
extern int pingpong_1_freeresult ();
#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_PING_PONG_H_RPCGEN */
