// MFCSampleClient.h : main header file for the MFCSAMPLECLIENT application
//


#if !defined(AFX_MFCSAMPLECLIENT_H__3B4F8EAA_80C1_11D4_A23D_02608CACEDBB__INCLUDED_)
#define AFX_MFCSAMPLECLIENT_H__3B4F8EAA_80C1_11D4_A23D_02608CACEDBB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCSampleClientApp:
// See MFCSampleClient.cpp for the implementation of this class
//

class CMFCSampleClientApp : public CWinApp
{
public:
	CMFCSampleClientApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCSampleClientApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CMFCSampleClientApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCSAMPLECLIENT_H__3B4F8EAA_80C1_11D4_A23D_02608CACEDBB__INCLUDED_)
