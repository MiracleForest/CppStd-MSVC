

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0628 */
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 501
#endif

/* verify that the <rpcsal.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCSAL_H_VERSION__
#define __REQUIRED_RPCSAL_H_VERSION__ 100
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __msdasc_h__
#define __msdasc_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

#ifndef DECLSPEC_XFGVIRT
#if defined(_CONTROL_FLOW_GUARD_XFG)
#define DECLSPEC_XFGVIRT(base, func) __declspec(xfg_virtual(base, func))
#else
#define DECLSPEC_XFGVIRT(base, func)
#endif
#endif

/* Forward Declarations */ 

#ifndef __IService_FWD_DEFINED__
#define __IService_FWD_DEFINED__
typedef interface IService IService;

#endif 	/* __IService_FWD_DEFINED__ */


#ifndef __IDBPromptInitialize_FWD_DEFINED__
#define __IDBPromptInitialize_FWD_DEFINED__
typedef interface IDBPromptInitialize IDBPromptInitialize;

#endif 	/* __IDBPromptInitialize_FWD_DEFINED__ */


#ifndef __IDataInitialize_FWD_DEFINED__
#define __IDataInitialize_FWD_DEFINED__
typedef interface IDataInitialize IDataInitialize;

#endif 	/* __IDataInitialize_FWD_DEFINED__ */


#ifndef __IDataSourceLocator_FWD_DEFINED__
#define __IDataSourceLocator_FWD_DEFINED__
typedef interface IDataSourceLocator IDataSourceLocator;

#endif 	/* __IDataSourceLocator_FWD_DEFINED__ */


#ifndef __DataLinks_FWD_DEFINED__
#define __DataLinks_FWD_DEFINED__

#ifdef __cplusplus
typedef class DataLinks DataLinks;
#else
typedef struct DataLinks DataLinks;
#endif /* __cplusplus */

#endif 	/* __DataLinks_FWD_DEFINED__ */


#ifndef __MSDAINITIALIZE_FWD_DEFINED__
#define __MSDAINITIALIZE_FWD_DEFINED__

#ifdef __cplusplus
typedef class MSDAINITIALIZE MSDAINITIALIZE;
#else
typedef struct MSDAINITIALIZE MSDAINITIALIZE;
#endif /* __cplusplus */

#endif 	/* __MSDAINITIALIZE_FWD_DEFINED__ */


#ifndef __PDPO_FWD_DEFINED__
#define __PDPO_FWD_DEFINED__

#ifdef __cplusplus
typedef class PDPO PDPO;
#else
typedef struct PDPO PDPO;
#endif /* __cplusplus */

#endif 	/* __PDPO_FWD_DEFINED__ */


#ifndef __RootBinder_FWD_DEFINED__
#define __RootBinder_FWD_DEFINED__

#ifdef __cplusplus
typedef class RootBinder RootBinder;
#else
typedef struct RootBinder RootBinder;
#endif /* __cplusplus */

#endif 	/* __RootBinder_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "oledb.h"

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_msdasc_0000_0000 */
/* [local] */ 

//-----------------------------------------------------------------------------
// File:				.C or .H file generated by msdasc.idl 
//
// Copyright:		Copyright (c) 1998-1999 Microsoft Corporation
//
// Contents: 		.C or .H file generated by msdasc.idl
//
// Comments: 		
//
//-----------------------------------------------------------------------------
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifdef _WIN64

typedef LONGLONG			COMPATIBLE_LONG;

#else

typedef LONG COMPATIBLE_LONG;

#endif	// _WIN64
typedef 
enum tagEBindInfoOptions
    {
        BIO_BINDER	= 0x1
    } 	EBindInfoOptions;

#define STGM_COLLECTION		0x00002000L
#define STGM_OUTPUT			0x00008000L
#define STGM_OPEN			0x80000000L
#define STGM_RECURSIVE		0x01000000L
#define STGM_STRICTOPEN		0x40000000L


extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0000_v0_0_s_ifspec;

#ifndef __IService_INTERFACE_DEFINED__
#define __IService_INTERFACE_DEFINED__

/* interface IService */
/* [object][unique][helpstring][uuid] */ 


EXTERN_C const IID IID_IService;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("06210E88-01F5-11D1-B512-0080C781C384")
    IService : public IUnknown
    {
    public:
        virtual /* [local] */ HRESULT STDMETHODCALLTYPE InvokeService( 
            /* [annotation][in] */ 
            _In_  IUnknown *pUnkInner) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IServiceVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IService * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IService * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IService * This);
        
        DECLSPEC_XFGVIRT(IService, InvokeService)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *InvokeService )( 
            IService * This,
            /* [annotation][in] */ 
            _In_  IUnknown *pUnkInner);
        
        END_INTERFACE
    } IServiceVtbl;

    interface IService
    {
        CONST_VTBL struct IServiceVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IService_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IService_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IService_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IService_InvokeService(This,pUnkInner)	\
    ( (This)->lpVtbl -> InvokeService(This,pUnkInner) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IService_INTERFACE_DEFINED__ */


/* interface __MIDL_itf_msdasc_0000_0001 */
/* [local] */ 

typedef DWORD DBPROMPTOPTIONS;

typedef 
enum tagDBPROMPTOPTIONSENUM
    {
        DBPROMPTOPTIONS_NONE	= 0,
        DBPROMPTOPTIONS_WIZARDSHEET	= 0x1,
        DBPROMPTOPTIONS_PROPERTYSHEET	= 0x2,
        DBPROMPTOPTIONS_BROWSEONLY	= 0x8,
        DBPROMPTOPTIONS_DISABLE_PROVIDER_SELECTION	= 0x10,
        DBPROMPTOPTIONS_DISABLESAVEPASSWORD	= 0x20
    } 	DBPROMPTOPTIONSENUM;



extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0001_v0_0_s_ifspec;

#ifndef __IDBPromptInitialize_INTERFACE_DEFINED__
#define __IDBPromptInitialize_INTERFACE_DEFINED__

/* interface IDBPromptInitialize */
/* [restricted][local][unique][helpstring][uuid][object] */ 


EXTERN_C const IID IID_IDBPromptInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2206CCB0-19C1-11D1-89E0-00C04FD7A829")
    IDBPromptInitialize : public IUnknown
    {
    public:
        virtual /* [local][helpstring] */ HRESULT STDMETHODCALLTYPE PromptDataSource( 
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pUnkOuter,
            /* [in] */ HWND hWndParent,
            /* [in] */ DBPROMPTOPTIONS dwPromptOptions,
            /* [in] */ ULONG cSourceTypeFilter,
            /* [annotation][size_is][in] */ 
            _In_reads_opt_(cSourceTypeFilter)  DBSOURCETYPE *rgSourceTypeFilter,
            /* [annotation][in] */ 
            _In_opt_z_  LPCOLESTR pwszszzProviderFilter,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out][in] */ 
            _Inout_  IUnknown **ppDataSource) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PromptFileName( 
            /* [in] */ HWND hWndParent,
            /* [in] */ DBPROMPTOPTIONS dwPromptOptions,
            /* [in] */ LPCOLESTR pwszInitialDirectory,
            /* [in] */ LPCOLESTR pwszInitialFile,
            /* [annotation][out] */ 
            _Outptr_  LPOLESTR *ppwszSelectedFile) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDBPromptInitializeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IDBPromptInitialize * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IDBPromptInitialize * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IDBPromptInitialize * This);
        
        DECLSPEC_XFGVIRT(IDBPromptInitialize, PromptDataSource)
        /* [local][helpstring] */ HRESULT ( STDMETHODCALLTYPE *PromptDataSource )( 
            IDBPromptInitialize * This,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pUnkOuter,
            /* [in] */ HWND hWndParent,
            /* [in] */ DBPROMPTOPTIONS dwPromptOptions,
            /* [in] */ ULONG cSourceTypeFilter,
            /* [annotation][size_is][in] */ 
            _In_reads_opt_(cSourceTypeFilter)  DBSOURCETYPE *rgSourceTypeFilter,
            /* [annotation][in] */ 
            _In_opt_z_  LPCOLESTR pwszszzProviderFilter,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out][in] */ 
            _Inout_  IUnknown **ppDataSource);
        
        DECLSPEC_XFGVIRT(IDBPromptInitialize, PromptFileName)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PromptFileName )( 
            IDBPromptInitialize * This,
            /* [in] */ HWND hWndParent,
            /* [in] */ DBPROMPTOPTIONS dwPromptOptions,
            /* [in] */ LPCOLESTR pwszInitialDirectory,
            /* [in] */ LPCOLESTR pwszInitialFile,
            /* [annotation][out] */ 
            _Outptr_  LPOLESTR *ppwszSelectedFile);
        
        END_INTERFACE
    } IDBPromptInitializeVtbl;

    interface IDBPromptInitialize
    {
        CONST_VTBL struct IDBPromptInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDBPromptInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDBPromptInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDBPromptInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDBPromptInitialize_PromptDataSource(This,pUnkOuter,hWndParent,dwPromptOptions,cSourceTypeFilter,rgSourceTypeFilter,pwszszzProviderFilter,riid,ppDataSource)	\
    ( (This)->lpVtbl -> PromptDataSource(This,pUnkOuter,hWndParent,dwPromptOptions,cSourceTypeFilter,rgSourceTypeFilter,pwszszzProviderFilter,riid,ppDataSource) ) 

#define IDBPromptInitialize_PromptFileName(This,hWndParent,dwPromptOptions,pwszInitialDirectory,pwszInitialFile,ppwszSelectedFile)	\
    ( (This)->lpVtbl -> PromptFileName(This,hWndParent,dwPromptOptions,pwszInitialDirectory,pwszInitialFile,ppwszSelectedFile) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDBPromptInitialize_INTERFACE_DEFINED__ */


#ifndef __IDataInitialize_INTERFACE_DEFINED__
#define __IDataInitialize_INTERFACE_DEFINED__

/* interface IDataInitialize */
/* [unique][helpstring][uuid][object] */ 




EXTERN_C const IID IID_IDataInitialize;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2206CCB1-19C1-11D1-89E0-00C04FD7A829")
    IDataInitialize : public IUnknown
    {
    public:
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetDataSource( 
            /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszInitializationString,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out][in] */ __RPC__deref_inout_opt IUnknown **ppDataSource) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE GetInitializationString( 
            /* [in] */ __RPC__in_opt IUnknown *pDataSource,
            /* [in] */ boolean fIncludePassword,
            /* [out] */ __RPC__deref_out_opt LPOLESTR *ppwszInitString) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE CreateDBInstance( 
            /* [in] */ __RPC__in REFCLSID clsidProvider,
            /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [unique][in] */ __RPC__in_opt LPOLESTR pwszReserved,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt IUnknown **ppDataSource) = 0;
        
        virtual /* [local][helpstring] */ HRESULT STDMETHODCALLTYPE CreateDBInstanceEx( 
            /* [in] */ REFCLSID clsidProvider,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [annotation][unique][in] */ 
            _In_opt_z_  LPOLESTR pwszReserved,
            /* [annotation][unique][in] */ 
            _In_  COSERVERINFO *pServerInfo,
            /* [in] */ ULONG cmq,
            /* [annotation][size_is][out][in] */ 
            _Out_writes_(cmq)  MULTI_QI *rgmqResults) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE LoadStringFromStorage( 
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszFileName,
            /* [out] */ __RPC__deref_out_opt LPOLESTR *ppwszInitializationString) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE WriteStringToStorage( 
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszFileName,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszInitializationString,
            /* [in] */ DWORD dwCreationDisposition) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataInitializeVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDataInitialize * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDataInitialize * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDataInitialize * This);
        
        DECLSPEC_XFGVIRT(IDataInitialize, GetDataSource)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetDataSource )( 
            __RPC__in IDataInitialize * This,
            /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszInitializationString,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out][in] */ __RPC__deref_inout_opt IUnknown **ppDataSource);
        
        DECLSPEC_XFGVIRT(IDataInitialize, GetInitializationString)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *GetInitializationString )( 
            __RPC__in IDataInitialize * This,
            /* [in] */ __RPC__in_opt IUnknown *pDataSource,
            /* [in] */ boolean fIncludePassword,
            /* [out] */ __RPC__deref_out_opt LPOLESTR *ppwszInitString);
        
        DECLSPEC_XFGVIRT(IDataInitialize, CreateDBInstance)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDBInstance )( 
            __RPC__in IDataInitialize * This,
            /* [in] */ __RPC__in REFCLSID clsidProvider,
            /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [unique][in] */ __RPC__in_opt LPOLESTR pwszReserved,
            /* [in] */ __RPC__in REFIID riid,
            /* [iid_is][out] */ __RPC__deref_out_opt IUnknown **ppDataSource);
        
        DECLSPEC_XFGVIRT(IDataInitialize, CreateDBInstanceEx)
        /* [local][helpstring] */ HRESULT ( STDMETHODCALLTYPE *CreateDBInstanceEx )( 
            IDataInitialize * This,
            /* [in] */ REFCLSID clsidProvider,
            /* [annotation][in] */ 
            _In_opt_  IUnknown *pUnkOuter,
            /* [in] */ DWORD dwClsCtx,
            /* [annotation][unique][in] */ 
            _In_opt_z_  LPOLESTR pwszReserved,
            /* [annotation][unique][in] */ 
            _In_  COSERVERINFO *pServerInfo,
            /* [in] */ ULONG cmq,
            /* [annotation][size_is][out][in] */ 
            _Out_writes_(cmq)  MULTI_QI *rgmqResults);
        
        DECLSPEC_XFGVIRT(IDataInitialize, LoadStringFromStorage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *LoadStringFromStorage )( 
            __RPC__in IDataInitialize * This,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszFileName,
            /* [out] */ __RPC__deref_out_opt LPOLESTR *ppwszInitializationString);
        
        DECLSPEC_XFGVIRT(IDataInitialize, WriteStringToStorage)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *WriteStringToStorage )( 
            __RPC__in IDataInitialize * This,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszFileName,
            /* [unique][in] */ __RPC__in_opt LPCOLESTR pwszInitializationString,
            /* [in] */ DWORD dwCreationDisposition);
        
        END_INTERFACE
    } IDataInitializeVtbl;

    interface IDataInitialize
    {
        CONST_VTBL struct IDataInitializeVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataInitialize_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataInitialize_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataInitialize_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataInitialize_GetDataSource(This,pUnkOuter,dwClsCtx,pwszInitializationString,riid,ppDataSource)	\
    ( (This)->lpVtbl -> GetDataSource(This,pUnkOuter,dwClsCtx,pwszInitializationString,riid,ppDataSource) ) 

#define IDataInitialize_GetInitializationString(This,pDataSource,fIncludePassword,ppwszInitString)	\
    ( (This)->lpVtbl -> GetInitializationString(This,pDataSource,fIncludePassword,ppwszInitString) ) 

#define IDataInitialize_CreateDBInstance(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,riid,ppDataSource)	\
    ( (This)->lpVtbl -> CreateDBInstance(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,riid,ppDataSource) ) 

#define IDataInitialize_CreateDBInstanceEx(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,pServerInfo,cmq,rgmqResults)	\
    ( (This)->lpVtbl -> CreateDBInstanceEx(This,clsidProvider,pUnkOuter,dwClsCtx,pwszReserved,pServerInfo,cmq,rgmqResults) ) 

#define IDataInitialize_LoadStringFromStorage(This,pwszFileName,ppwszInitializationString)	\
    ( (This)->lpVtbl -> LoadStringFromStorage(This,pwszFileName,ppwszInitializationString) ) 

#define IDataInitialize_WriteStringToStorage(This,pwszFileName,pwszInitializationString,dwCreationDisposition)	\
    ( (This)->lpVtbl -> WriteStringToStorage(This,pwszFileName,pwszInitializationString,dwCreationDisposition) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */



/* [call_as] */ HRESULT STDMETHODCALLTYPE IDataInitialize_RemoteCreateDBInstanceEx_Proxy( 
    __RPC__in IDataInitialize * This,
    /* [in] */ __RPC__in REFCLSID clsidProvider,
    /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
    /* [in] */ DWORD dwClsCtx,
    /* [unique][in] */ __RPC__in_opt LPOLESTR pwszReserved,
    /* [unique][in] */ __RPC__in_opt COSERVERINFO *pServerInfo,
    /* [in] */ ULONG cmq,
    /* [size_is][in] */ __RPC__in_ecount_full(cmq) const IID **rgpIID,
    /* [size_is][out] */ __RPC__out_ecount_full(cmq) IUnknown **rgpItf,
    /* [size_is][out] */ __RPC__out_ecount_full(cmq) HRESULT *rghr);


void __RPC_STUB IDataInitialize_RemoteCreateDBInstanceEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);



#endif 	/* __IDataInitialize_INTERFACE_DEFINED__ */



#ifndef __MSDASC_LIBRARY_DEFINED__
#define __MSDASC_LIBRARY_DEFINED__

/* library MSDASC */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_MSDASC;

#ifndef __IDataSourceLocator_INTERFACE_DEFINED__
#define __IDataSourceLocator_INTERFACE_DEFINED__

/* interface IDataSourceLocator */
/* [unique][helpstring][dual][uuid][object] */ 


EXTERN_C const IID IID_IDataSourceLocator;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("2206CCB2-19C1-11D1-89E0-00C04FD7A829")
    IDataSourceLocator : public IDispatch
    {
    public:
        virtual /* [helpstring][propget] */ HRESULT STDMETHODCALLTYPE get_hWnd( 
            /* [retval][out] */ __RPC__out COMPATIBLE_LONG *phwndParent) = 0;
        
        virtual /* [helpstring][propput] */ HRESULT STDMETHODCALLTYPE put_hWnd( 
            /* [in] */ COMPATIBLE_LONG hwndParent) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PromptNew( 
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppADOConnection) = 0;
        
        virtual /* [helpstring] */ HRESULT STDMETHODCALLTYPE PromptEdit( 
            /* [out][in] */ __RPC__deref_inout_opt IDispatch **ppADOConnection,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbSuccess) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IDataSourceLocatorVtbl
    {
        BEGIN_INTERFACE
        
        DECLSPEC_XFGVIRT(IUnknown, QueryInterface)
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            __RPC__in IDataSourceLocator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        DECLSPEC_XFGVIRT(IUnknown, AddRef)
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            __RPC__in IDataSourceLocator * This);
        
        DECLSPEC_XFGVIRT(IUnknown, Release)
        ULONG ( STDMETHODCALLTYPE *Release )( 
            __RPC__in IDataSourceLocator * This);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfoCount)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            __RPC__in IDataSourceLocator * This,
            /* [out] */ __RPC__out UINT *pctinfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetTypeInfo)
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            __RPC__in IDataSourceLocator * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ __RPC__deref_out_opt ITypeInfo **ppTInfo);
        
        DECLSPEC_XFGVIRT(IDispatch, GetIDsOfNames)
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            __RPC__in IDataSourceLocator * This,
            /* [in] */ __RPC__in REFIID riid,
            /* [size_is][in] */ __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
            /* [range][in] */ __RPC__in_range(0,16384) UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ __RPC__out_ecount_full(cNames) DISPID *rgDispId);
        
        DECLSPEC_XFGVIRT(IDispatch, Invoke)
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IDataSourceLocator * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        DECLSPEC_XFGVIRT(IDataSourceLocator, get_hWnd)
        /* [helpstring][propget] */ HRESULT ( STDMETHODCALLTYPE *get_hWnd )( 
            __RPC__in IDataSourceLocator * This,
            /* [retval][out] */ __RPC__out COMPATIBLE_LONG *phwndParent);
        
        DECLSPEC_XFGVIRT(IDataSourceLocator, put_hWnd)
        /* [helpstring][propput] */ HRESULT ( STDMETHODCALLTYPE *put_hWnd )( 
            __RPC__in IDataSourceLocator * This,
            /* [in] */ COMPATIBLE_LONG hwndParent);
        
        DECLSPEC_XFGVIRT(IDataSourceLocator, PromptNew)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PromptNew )( 
            __RPC__in IDataSourceLocator * This,
            /* [retval][out] */ __RPC__deref_out_opt IDispatch **ppADOConnection);
        
        DECLSPEC_XFGVIRT(IDataSourceLocator, PromptEdit)
        /* [helpstring] */ HRESULT ( STDMETHODCALLTYPE *PromptEdit )( 
            __RPC__in IDataSourceLocator * This,
            /* [out][in] */ __RPC__deref_inout_opt IDispatch **ppADOConnection,
            /* [retval][out] */ __RPC__out VARIANT_BOOL *pbSuccess);
        
        END_INTERFACE
    } IDataSourceLocatorVtbl;

    interface IDataSourceLocator
    {
        CONST_VTBL struct IDataSourceLocatorVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IDataSourceLocator_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IDataSourceLocator_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IDataSourceLocator_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IDataSourceLocator_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IDataSourceLocator_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IDataSourceLocator_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IDataSourceLocator_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define IDataSourceLocator_get_hWnd(This,phwndParent)	\
    ( (This)->lpVtbl -> get_hWnd(This,phwndParent) ) 

#define IDataSourceLocator_put_hWnd(This,hwndParent)	\
    ( (This)->lpVtbl -> put_hWnd(This,hwndParent) ) 

#define IDataSourceLocator_PromptNew(This,ppADOConnection)	\
    ( (This)->lpVtbl -> PromptNew(This,ppADOConnection) ) 

#define IDataSourceLocator_PromptEdit(This,ppADOConnection,pbSuccess)	\
    ( (This)->lpVtbl -> PromptEdit(This,ppADOConnection,pbSuccess) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IDataSourceLocator_INTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_DataLinks;

#ifdef __cplusplus

class DECLSPEC_UUID("2206CDB2-19C1-11D1-89E0-00C04FD7A829")
DataLinks;
#endif

EXTERN_C const CLSID CLSID_MSDAINITIALIZE;

#ifdef __cplusplus

class DECLSPEC_UUID("2206CDB0-19C1-11D1-89E0-00C04FD7A829")
MSDAINITIALIZE;
#endif

EXTERN_C const CLSID CLSID_PDPO;

#ifdef __cplusplus

class DECLSPEC_UUID("CCB4EC60-B9DC-11D1-AC80-00A0C9034873")
PDPO;
#endif

EXTERN_C const CLSID CLSID_RootBinder;

#ifdef __cplusplus

class DECLSPEC_UUID("FF151822-B0BF-11D1-A80D-000000000000")
RootBinder;
#endif
#endif /* __MSDASC_LIBRARY_DEFINED__ */

/* interface __MIDL_itf_msdasc_0000_0004 */
/* [local] */ 

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion


extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msdasc_0000_0004_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* [local][helpstring] */ HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Proxy( 
    IDataInitialize * This,
    /* [in] */ REFCLSID clsidProvider,
    /* [annotation][in] */ 
    _In_opt_  IUnknown *pUnkOuter,
    /* [in] */ DWORD dwClsCtx,
    /* [annotation][unique][in] */ 
    _In_opt_z_  LPOLESTR pwszReserved,
    /* [annotation][unique][in] */ 
    _In_  COSERVERINFO *pServerInfo,
    /* [in] */ ULONG cmq,
    /* [annotation][size_is][out][in] */ 
    _Out_writes_(cmq)  MULTI_QI *rgmqResults);


/* [call_as] */ HRESULT STDMETHODCALLTYPE IDataInitialize_CreateDBInstanceEx_Stub( 
    __RPC__in IDataInitialize * This,
    /* [in] */ __RPC__in REFCLSID clsidProvider,
    /* [in] */ __RPC__in_opt IUnknown *pUnkOuter,
    /* [in] */ DWORD dwClsCtx,
    /* [unique][in] */ __RPC__in_opt LPOLESTR pwszReserved,
    /* [unique][in] */ __RPC__in_opt COSERVERINFO *pServerInfo,
    /* [in] */ ULONG cmq,
    /* [size_is][in] */ __RPC__in_ecount_full(cmq) const IID **rgpIID,
    /* [size_is][out] */ __RPC__out_ecount_full(cmq) IUnknown **rgpItf,
    /* [size_is][out] */ __RPC__out_ecount_full(cmq) HRESULT *rghr);



/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


