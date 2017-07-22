

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


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

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __GITHUBTOSOURCEFORGEidl_h__
#define __GITHUBTOSOURCEFORGEidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DGITHUBTOSOURCEFORGE_FWD_DEFINED__
#define ___DGITHUBTOSOURCEFORGE_FWD_DEFINED__
typedef interface _DGITHUBTOSOURCEFORGE _DGITHUBTOSOURCEFORGE;
#endif 	/* ___DGITHUBTOSOURCEFORGE_FWD_DEFINED__ */


#ifndef ___DGITHUBTOSOURCEFORGEEvents_FWD_DEFINED__
#define ___DGITHUBTOSOURCEFORGEEvents_FWD_DEFINED__
typedef interface _DGITHUBTOSOURCEFORGEEvents _DGITHUBTOSOURCEFORGEEvents;
#endif 	/* ___DGITHUBTOSOURCEFORGEEvents_FWD_DEFINED__ */


#ifndef __GITHUBTOSOURCEFORGE_FWD_DEFINED__
#define __GITHUBTOSOURCEFORGE_FWD_DEFINED__

#ifdef __cplusplus
typedef class GITHUBTOSOURCEFORGE GITHUBTOSOURCEFORGE;
#else
typedef struct GITHUBTOSOURCEFORGE GITHUBTOSOURCEFORGE;
#endif /* __cplusplus */

#endif 	/* __GITHUBTOSOURCEFORGE_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 

void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * ); 


#ifndef __GITHUBTOSOURCEFORGELib_LIBRARY_DEFINED__
#define __GITHUBTOSOURCEFORGELib_LIBRARY_DEFINED__

/* library GITHUBTOSOURCEFORGELib */
/* [control][helpstring][helpfile][version][uuid] */ 


EXTERN_C const IID LIBID_GITHUBTOSOURCEFORGELib;

#ifndef ___DGITHUBTOSOURCEFORGE_DISPINTERFACE_DEFINED__
#define ___DGITHUBTOSOURCEFORGE_DISPINTERFACE_DEFINED__

/* dispinterface _DGITHUBTOSOURCEFORGE */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DGITHUBTOSOURCEFORGE;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("74F2D5E0-307D-4CC6-9521-A19D3815EC6C")
    _DGITHUBTOSOURCEFORGE : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DGITHUBTOSOURCEFORGEVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DGITHUBTOSOURCEFORGE * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DGITHUBTOSOURCEFORGE * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DGITHUBTOSOURCEFORGE * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DGITHUBTOSOURCEFORGE * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DGITHUBTOSOURCEFORGE * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DGITHUBTOSOURCEFORGE * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DGITHUBTOSOURCEFORGE * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DGITHUBTOSOURCEFORGEVtbl;

    interface _DGITHUBTOSOURCEFORGE
    {
        CONST_VTBL struct _DGITHUBTOSOURCEFORGEVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DGITHUBTOSOURCEFORGE_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DGITHUBTOSOURCEFORGE_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DGITHUBTOSOURCEFORGE_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DGITHUBTOSOURCEFORGE_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DGITHUBTOSOURCEFORGE_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DGITHUBTOSOURCEFORGE_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DGITHUBTOSOURCEFORGE_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DGITHUBTOSOURCEFORGE_DISPINTERFACE_DEFINED__ */


#ifndef ___DGITHUBTOSOURCEFORGEEvents_DISPINTERFACE_DEFINED__
#define ___DGITHUBTOSOURCEFORGEEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DGITHUBTOSOURCEFORGEEvents */
/* [helpstring][uuid] */ 


EXTERN_C const IID DIID__DGITHUBTOSOURCEFORGEEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("C31A1E98-B757-4E82-9FF8-099DBADBCBBD")
    _DGITHUBTOSOURCEFORGEEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DGITHUBTOSOURCEFORGEEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DGITHUBTOSOURCEFORGEEvents * This,
            /* [in] */ REFIID riid,
            /* [iid_is][out] */ void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DGITHUBTOSOURCEFORGEEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DGITHUBTOSOURCEFORGEEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DGITHUBTOSOURCEFORGEEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DGITHUBTOSOURCEFORGEEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DGITHUBTOSOURCEFORGEEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DGITHUBTOSOURCEFORGEEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DGITHUBTOSOURCEFORGEEventsVtbl;

    interface _DGITHUBTOSOURCEFORGEEvents
    {
        CONST_VTBL struct _DGITHUBTOSOURCEFORGEEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DGITHUBTOSOURCEFORGEEvents_QueryInterface(This,riid,ppvObject)	\
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)

#define _DGITHUBTOSOURCEFORGEEvents_AddRef(This)	\
    (This)->lpVtbl -> AddRef(This)

#define _DGITHUBTOSOURCEFORGEEvents_Release(This)	\
    (This)->lpVtbl -> Release(This)


#define _DGITHUBTOSOURCEFORGEEvents_GetTypeInfoCount(This,pctinfo)	\
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)

#define _DGITHUBTOSOURCEFORGEEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)

#define _DGITHUBTOSOURCEFORGEEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)

#define _DGITHUBTOSOURCEFORGEEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DGITHUBTOSOURCEFORGEEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_GITHUBTOSOURCEFORGE;

#ifdef __cplusplus

class DECLSPEC_UUID("2369179E-AB7B-4AAE-80CB-150522DD4F5E")
GITHUBTOSOURCEFORGE;
#endif
#endif /* __GITHUBTOSOURCEFORGELib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


