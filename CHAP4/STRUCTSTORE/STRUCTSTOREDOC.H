// StructStoreDoc.h : interface of the CStructStoreDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_STRUCTSTOREDOC_H__BD1E8809_767E_11D4_8BD4_680DDD000000__INCLUDED_)
#define AFX_STRUCTSTOREDOC_H__BD1E8809_767E_11D4_8BD4_680DDD000000__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CStructStoreDoc : public CDocument
{
protected: // create from serialization only
	CStructStoreDoc();
	DECLARE_DYNCREATE(CStructStoreDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CStructStoreDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CStructStoreDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CStructStoreDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STRUCTSTOREDOC_H__BD1E8809_767E_11D4_8BD4_680DDD000000__INCLUDED_)
