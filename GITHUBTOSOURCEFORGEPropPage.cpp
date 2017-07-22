// GITHUBTOSOURCEFORGEPropPage.cpp : Implementation of the CGITHUBTOSOURCEFORGEPropPage property page class.

#include "stdafx.h"
#include "GITHUBTOSOURCEFORGE.h"
#include "GITHUBTOSOURCEFORGEPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CGITHUBTOSOURCEFORGEPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CGITHUBTOSOURCEFORGEPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CGITHUBTOSOURCEFORGEPropPage, "GITHUBTOSOURCE.GITHUBTOSOURCEPropPage.1",
	0xfce91d53, 0xcd6f, 0x452a, 0xad, 0x5b, 0x10, 0x81, 0xbf, 0x8c, 0xe3, 0x64)



// CGITHUBTOSOURCEFORGEPropPage::CGITHUBTOSOURCEFORGEPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CGITHUBTOSOURCEFORGEPropPage

BOOL CGITHUBTOSOURCEFORGEPropPage::CGITHUBTOSOURCEFORGEPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_GITHUBTOSOURCEFORGE_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CGITHUBTOSOURCEFORGEPropPage::CGITHUBTOSOURCEFORGEPropPage - Constructor

CGITHUBTOSOURCEFORGEPropPage::CGITHUBTOSOURCEFORGEPropPage() :
	COlePropertyPage(IDD, IDS_GITHUBTOSOURCEFORGE_PPG_CAPTION)
{
}



// CGITHUBTOSOURCEFORGEPropPage::DoDataExchange - Moves data between page and properties

void CGITHUBTOSOURCEFORGEPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CGITHUBTOSOURCEFORGEPropPage message handlers
