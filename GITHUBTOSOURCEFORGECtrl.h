#pragma once

// GITHUBTOSOURCEFORGECtrl.h : Declaration of the CGITHUBTOSOURCEFORGECtrl ActiveX Control class.


// CGITHUBTOSOURCEFORGECtrl : See GITHUBTOSOURCEFORGECtrl.cpp for implementation.

class CGITHUBTOSOURCEFORGECtrl : public COleControl
{
	DECLARE_DYNCREATE(CGITHUBTOSOURCEFORGECtrl)

// Constructor
public:
	CGITHUBTOSOURCEFORGECtrl();

// Overrides
public:
	virtual void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid);
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void DoPropExchange(CPropExchange* pPX);
	virtual void OnResetState();

// Implementation
protected:
	~CGITHUBTOSOURCEFORGECtrl();

	DECLARE_OLECREATE_EX(CGITHUBTOSOURCEFORGECtrl)    // Class factory and guid
	DECLARE_OLETYPELIB(CGITHUBTOSOURCEFORGECtrl)      // GetTypeInfo
	DECLARE_PROPPAGEIDS(CGITHUBTOSOURCEFORGECtrl)     // Property page IDs
	DECLARE_OLECTLTYPE(CGITHUBTOSOURCEFORGECtrl)		// Type name and misc status

	// Subclassed control support
	BOOL IsSubclassedControl();
	LRESULT OnOcmCommand(WPARAM wParam, LPARAM lParam);

// Message maps
	DECLARE_MESSAGE_MAP()

// Dispatch maps
	DECLARE_DISPATCH_MAP()

	afx_msg void AboutBox();

// Event maps
	DECLARE_EVENT_MAP()

// Dispatch and event IDs
public:
	enum {
	};
};

