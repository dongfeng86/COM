// Account.h : Declaration of the CAccount

#ifndef __ACCOUNT_H_
#define __ACCOUNT_H_

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAccount
class ATL_NO_VTABLE CAccount : 
	public CComObjectRootEx<CComSingleThreadModel>,
	public CComCoClass<CAccount, &CLSID_Account>,
	public ISupportErrorInfo,
	public IDispatchImpl<IAccount, &IID_IAccount, &LIBID_ADOSAMPLib>
{
public:
	CAccount()
	{
	}

DECLARE_REGISTRY_RESOURCEID(IDR_ACCOUNT)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CAccount)
	COM_INTERFACE_ENTRY(IAccount)
	COM_INTERFACE_ENTRY(IDispatch)
	COM_INTERFACE_ENTRY(ISupportErrorInfo)
END_COM_MAP()

// ISupportsErrorInfo
	STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid);

// IAccount
public:
	STDMETHOD(Post)(/*[in]*/long lAccount,/*[in]*/long lAmount,/*[out,retval]*/BSTR *pbstrResult);

private:

};

#endif //__ACCOUNT_H_
