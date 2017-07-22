// GITHUBTOSOURCEFORGECtrl.cpp : Implementation of the CGITHUBTOSOURCEFORGECtrl ActiveX Control class.

#include "stdafx.h"
#include "GITHUBTOSOURCEFORGE.h"
#include "GITHUBTOSOURCEFORGECtrl.h"
#include "GITHUBTOSOURCEFORGEPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CGITHUBTOSOURCEFORGECtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CGITHUBTOSOURCEFORGECtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CGITHUBTOSOURCEFORGECtrl, COleControl)
	DISP_FUNCTION_ID(CGITHUBTOSOURCEFORGECtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CGITHUBTOSOURCEFORGECtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CGITHUBTOSOURCEFORGECtrl, 1)
	PROPPAGEID(CGITHUBTOSOURCEFORGEPropPage::guid)
END_PROPPAGEIDS(CGITHUBTOSOURCEFORGECtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CGITHUBTOSOURCEFORGECtrl, "GITHUBTOSOURCEFO.GITHUBTOSOURCEFOCtrl.1",
	0x2369179e, 0xab7b, 0x4aae, 0x80, 0xcb, 0x15, 0x5, 0x22, 0xdd, 0x4f, 0x5e)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CGITHUBTOSOURCEFORGECtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DGITHUBTOSOURCEFORGE =
		{ 0x74F2D5E0, 0x307D, 0x4CC6, { 0x95, 0x21, 0xA1, 0x9D, 0x38, 0x15, 0xEC, 0x6C } };
const IID BASED_CODE IID_DGITHUBTOSOURCEFORGEEvents =
		{ 0xC31A1E98, 0xB757, 0x4E82, { 0x9F, 0xF8, 0x9, 0x9D, 0xBA, 0xDB, 0xCB, 0xBD } };



// Control type information

static const DWORD BASED_CODE _dwGITHUBTOSOURCEFORGEOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CGITHUBTOSOURCEFORGECtrl, IDS_GITHUBTOSOURCEFORGE, _dwGITHUBTOSOURCEFORGEOleMisc)



// CGITHUBTOSOURCEFORGECtrl::CGITHUBTOSOURCEFORGECtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CGITHUBTOSOURCEFORGECtrl

BOOL CGITHUBTOSOURCEFORGECtrl::CGITHUBTOSOURCEFORGECtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_GITHUBTOSOURCEFORGE,
			IDB_GITHUBTOSOURCEFORGE,
			afxRegApartmentThreading,
			_dwGITHUBTOSOURCEFORGEOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CGITHUBTOSOURCEFORGECtrl::CGITHUBTOSOURCEFORGECtrl - Constructor

CGITHUBTOSOURCEFORGECtrl::CGITHUBTOSOURCEFORGECtrl()
{
	InitializeIIDs(&IID_DGITHUBTOSOURCEFORGE, &IID_DGITHUBTOSOURCEFORGEEvents);
	// TODO: Initialize your control's instance data here.
}



// CGITHUBTOSOURCEFORGECtrl::~CGITHUBTOSOURCEFORGECtrl - Destructor

CGITHUBTOSOURCEFORGECtrl::~CGITHUBTOSOURCEFORGECtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CGITHUBTOSOURCEFORGECtrl::OnDraw - Drawing function

void CGITHUBTOSOURCEFORGECtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}



// CGITHUBTOSOURCEFORGECtrl::DoPropExchange - Persistence support

void CGITHUBTOSOURCEFORGECtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CGITHUBTOSOURCEFORGECtrl::OnResetState - Reset control to default state

void CGITHUBTOSOURCEFORGECtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CGITHUBTOSOURCEFORGECtrl::AboutBox - Display an "About" box to the user

void CGITHUBTOSOURCEFORGECtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_GITHUBTOSOURCEFORGE);
	dlgAbout.DoModal();
}



// CGITHUBTOSOURCEFORGECtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CGITHUBTOSOURCEFORGECtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("STATIC");
	return COleControl::PreCreateWindow(cs);
}



// CGITHUBTOSOURCEFORGECtrl::IsSubclassedControl - This is a subclassed control

BOOL CGITHUBTOSOURCEFORGECtrl::IsSubclassedControl()
{
	return TRUE;
}



// CGITHUBTOSOURCEFORGECtrl::OnOcmCommand - Handle command messages

LRESULT CGITHUBTOSOURCEFORGECtrl::OnOcmCommand(WPARAM wParam, LPARAM lParam)
{
#ifdef _WIN32
	WORD wNotifyCode = HIWORD(wParam);
#else
	WORD wNotifyCode = HIWORD(lParam);
#endif

	// TODO: Switch on wNotifyCode here.

	return 0;
}



// CGITHUBTOSOURCEFORGECtrl message handlers
