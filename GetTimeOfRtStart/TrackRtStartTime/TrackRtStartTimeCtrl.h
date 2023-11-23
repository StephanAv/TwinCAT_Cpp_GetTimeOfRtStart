///////////////////////////////////////////////////////////////////////////////
// TrackRtStartTimeCtrl.h

#ifndef __TRACKRTSTARTTIMECTRL_H__
#define __TRACKRTSTARTTIMECTRL_H__

#include <atlbase.h>
#include <atlcom.h>


#include "resource.h"       // main symbols
#include "TrackRtStartTimeW32.h"
#include "TcBase.h"
#include "TrackRtStartTimeClassFactory.h"
#include "TcOCFCtrlImpl.h"

class CTrackRtStartTimeCtrl 
	: public CComObjectRootEx<CComMultiThreadModel>
	, public CComCoClass<CTrackRtStartTimeCtrl, &CLSID_TrackRtStartTimeCtrl>
	, public ITrackRtStartTimeCtrl
	, public ITcOCFCtrlImpl<CTrackRtStartTimeCtrl, CTrackRtStartTimeClassFactory>
{
public:
	CTrackRtStartTimeCtrl();
	virtual ~CTrackRtStartTimeCtrl();

DECLARE_REGISTRY_RESOURCEID(IDR_TRACKRTSTARTTIMECTRL)
DECLARE_NOT_AGGREGATABLE(CTrackRtStartTimeCtrl)

DECLARE_PROTECT_FINAL_CONSTRUCT()

BEGIN_COM_MAP(CTrackRtStartTimeCtrl)
	COM_INTERFACE_ENTRY(ITrackRtStartTimeCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl)
	COM_INTERFACE_ENTRY(ITcCtrl2)
END_COM_MAP()

};

#endif // #ifndef __TRACKRTSTARTTIMECTRL_H__
