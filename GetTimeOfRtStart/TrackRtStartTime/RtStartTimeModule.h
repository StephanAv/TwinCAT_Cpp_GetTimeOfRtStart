///////////////////////////////////////////////////////////////////////////////
// RtStartTimeModule.h
#pragma once

#include "TrackRtStartTimeInterfaces.h"

class CRtStartTimeModule 
	: public ITComObject
	, public ITcADI
	, public ITcWatchSource
///<AutoGeneratedContent id="InheritanceList">
///</AutoGeneratedContent>
{
public:
	DECLARE_IUNKNOWN()
	DECLARE_IPERSIST_LIB()
	DECLARE_ITCOMOBJECT_LOCKOP()
	DECLARE_ITCADI()
	DECLARE_ITCWATCHSOURCE()
	DECLARE_OBJPARAWATCH_MAP()
	DECLARE_OBJDATAAREA_MAP()

	CRtStartTimeModule();
	virtual	~CRtStartTimeModule();

///<AutoGeneratedContent id="InterfaceMembers">
///</AutoGeneratedContent>

protected:
	DECLARE_ITCOMOBJECT_SETSTATE();

///<AutoGeneratedContent id="Members">
	RtStartTimeModuleOutputs m_Outputs;
///</AutoGeneratedContent>

};
