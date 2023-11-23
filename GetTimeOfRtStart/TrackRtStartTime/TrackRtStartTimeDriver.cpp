///////////////////////////////////////////////////////////////////////////////
// TrackRtStartTimeDriver.cpp
#include "TcPch.h"
#pragma hdrstop

#include "TrackRtStartTimeDriver.h"
#include "TrackRtStartTimeClassFactory.h"

DECLARE_GENERIC_DEVICE(TRACKRTSTARTTIMEDRV)

IOSTATUS CTrackRtStartTimeDriver::OnLoad( )
{
	TRACE(_T("CObjClassFactory::OnLoad()\n") );
	m_pObjClassFactory = new CTrackRtStartTimeClassFactory();

	return IOSTATUS_SUCCESS;
}

VOID CTrackRtStartTimeDriver::OnUnLoad( )
{
	delete m_pObjClassFactory;
}

unsigned long _cdecl CTrackRtStartTimeDriver::TRACKRTSTARTTIMEDRV_GetVersion( )
{
	return( (TRACKRTSTARTTIMEDRV_Major << 8) | TRACKRTSTARTTIMEDRV_Minor );
}

