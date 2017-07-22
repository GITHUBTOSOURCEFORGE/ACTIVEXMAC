

/* this ALWAYS GENERATED file contains the IIDs and CLSIDs */

/* link this file in with the server and any clients */


 /* File created by MIDL compiler version 6.00.0361 */
/* at Fri Jul 21 22:14:15 2017
 */
/* Compiler settings for .\GITHUBTOSOURCEFORGE.idl:
    Oicf, W1, Zp8, env=Win32 (32b run)
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
//@@MIDL_FILE_HEADING(  )

#if !defined(_M_IA64) && !defined(_M_AMD64)


#pragma warning( disable: 4049 )  /* more than 64k source lines */


#ifdef __cplusplus
extern "C"{
#endif 


#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#else // !_MIDL_USE_GUIDDEF_

#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
        const type name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif !_MIDL_USE_GUIDDEF_

MIDL_DEFINE_GUID(IID, LIBID_GITHUBTOSOURCEFORGELib,0xD80DD658,0xF26B,0x4949,0x86,0x41,0x0D,0xC6,0xEA,0x08,0x83,0x60);


MIDL_DEFINE_GUID(IID, DIID__DGITHUBTOSOURCEFORGE,0x74F2D5E0,0x307D,0x4CC6,0x95,0x21,0xA1,0x9D,0x38,0x15,0xEC,0x6C);


MIDL_DEFINE_GUID(IID, DIID__DGITHUBTOSOURCEFORGEEvents,0xC31A1E98,0xB757,0x4E82,0x9F,0xF8,0x09,0x9D,0xBA,0xDB,0xCB,0xBD);


MIDL_DEFINE_GUID(CLSID, CLSID_GITHUBTOSOURCEFORGE,0x2369179E,0xAB7B,0x4AAE,0x80,0xCB,0x15,0x05,0x22,0xDD,0x4F,0x5E);

#undef MIDL_DEFINE_GUID

#ifdef __cplusplus
}
#endif



#endif /* !defined(_M_IA64) && !defined(_M_AMD64)*/

