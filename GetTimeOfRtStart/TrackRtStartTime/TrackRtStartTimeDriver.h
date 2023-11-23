///////////////////////////////////////////////////////////////////////////////
// TrackRtStartTimeDriver.h

#ifndef __TRACKRTSTARTTIMEDRIVER_H__
#define __TRACKRTSTARTTIMEDRIVER_H__

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "TcBase.h"

#define TRACKRTSTARTTIMEDRV_NAME        "TRACKRTSTARTTIME"
#define TRACKRTSTARTTIMEDRV_Major       1
#define TRACKRTSTARTTIMEDRV_Minor       0

#define DEVICE_CLASS CTrackRtStartTimeDriver

#include "ObjDriver.h"

class CTrackRtStartTimeDriver : public CObjDriver
{
public:
	virtual IOSTATUS	OnLoad();
	virtual VOID		OnUnLoad();

	//////////////////////////////////////////////////////
	// VxD-Services exported by this driver
	static unsigned long	_cdecl TRACKRTSTARTTIMEDRV_GetVersion();
	//////////////////////////////////////////////////////
	
};

Begin_VxD_Service_Table(TRACKRTSTARTTIMEDRV)
	VxD_Service( TRACKRTSTARTTIMEDRV_GetVersion )
End_VxD_Service_Table


#endif // ifndef __TRACKRTSTARTTIMEDRIVER_H__