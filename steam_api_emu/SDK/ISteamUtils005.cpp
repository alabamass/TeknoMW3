#include "ISteamUtils005.h"

class ISteamUtils005_wrapper
{
public:
	virtual uint32  GetSecondsSinceAppActive ()	{
		char log[1024];
		sprintf(log,"GetSecondsSinceAppActive() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetSecondsSinceAppActive();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual uint32  GetSecondsSinceComputerActive ()	{
		char log[1024];
		sprintf(log,"GetSecondsSinceComputerActive() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetSecondsSinceComputerActive();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual EUniverse  GetConnectedUniverse ()	{
		char log[1024];
		sprintf(log,"GetConnectedUniverse() "		);
		OutputDebugStringA(log);
		EUniverse  ret = m_pWrapper->GetConnectedUniverse();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual uint32  GetServerRealTime ()	{
		char log[1024];
		sprintf(log,"GetServerRealTime() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetServerRealTime();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual const char * GetIPCountry ()	{
		char log[1024];
		sprintf(log,"GetIPCountry() "		);
		OutputDebugStringA(log);
		const char * ret = m_pWrapper->GetIPCountry();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  GetImageSize ( int iImage,  uint32 *pnWidth,  uint32 *pnHeight )	{
		char log[1024];
		sprintf(log,"GetImageSize() iImage=0x%X pnWidth=0x%X pnHeight=0x%X ",
			iImage,
			pnWidth,
			pnHeight		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetImageSize(iImage, pnWidth, pnHeight);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  GetImageRGBA ( int iImage,  uint8 *pubDest,  int nDestBufferSize )	{
		char log[1024];
		sprintf(log,"GetImageRGBA() iImage=0x%X pubDest=0x%X nDestBufferSize=0x%X ",
			iImage,
			pubDest,
			nDestBufferSize		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetImageRGBA(iImage, pubDest, nDestBufferSize);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  GetCSERIPPort ( uint32 *unIP,  uint16 *usPort )	{
		char log[1024];
		sprintf(log,"GetCSERIPPort() unIP=0x%X usPort=0x%X ",
			unIP,
			usPort		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetCSERIPPort(unIP, usPort);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual uint8  GetCurrentBatteryPower ()	{
		char log[1024];
		sprintf(log,"GetCurrentBatteryPower() "		);
		OutputDebugStringA(log);
		uint8  ret = m_pWrapper->GetCurrentBatteryPower();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual uint32  GetAppID ()	{
		char log[1024];
		sprintf(log,"GetAppID() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetAppID();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  SetOverlayNotificationPosition ( ENotificationPosition eNotificationPosition )	{
		char log[1024];
		sprintf(log,"SetOverlayNotificationPosition() eNotificationPosition=0x%X ",
			eNotificationPosition		);
		OutputDebugStringA(log);
		eNotificationPosition);
		OutputDebugStringA("\n");
	}
	virtual bool  IsAPICallCompleted ( SteamAPICall_t hSteamAPICall,  bool *pbFailed )	{
		char log[1024];
		sprintf(log,"IsAPICallCompleted() hSteamAPICall=0x%X pbFailed=0x%X ",
			hSteamAPICall,
			pbFailed		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->IsAPICallCompleted(hSteamAPICall, pbFailed);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual ESteamAPICallFailure  GetAPICallFailureReason ( SteamAPICall_t hSteamAPICall )	{
		char log[1024];
		sprintf(log,"GetAPICallFailureReason() hSteamAPICall=0x%X ",
			hSteamAPICall		);
		OutputDebugStringA(log);
		ESteamAPICallFailure  ret = m_pWrapper->GetAPICallFailureReason(hSteamAPICall);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  GetAPICallResult ( SteamAPICall_t hSteamAPICall,  void *pCallback,  int cubCallback,  int iCallbackExpected,  bool *pbFailed )	{
		char log[1024];
		sprintf(log,"GetAPICallResult() hSteamAPICall=0x%X pCallback=0x%X cubCallback=0x%X iCallbackExpected=0x%X pbFailed=0x%X ",
			hSteamAPICall,
			pCallback,
			cubCallback,
			iCallbackExpected,
			pbFailed		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->GetAPICallResult(hSteamAPICall, pCallback, cubCallback, iCallbackExpected, pbFailed);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  RunFrame ()	{
		char log[1024];
		sprintf(log,"RunFrame() "		);
		OutputDebugStringA(log);
		);
		OutputDebugStringA("\n");
	}
	virtual uint32  GetIPCCallCount ()	{
		char log[1024];
		sprintf(log,"GetIPCCallCount() "		);
		OutputDebugStringA(log);
		uint32  ret = m_pWrapper->GetIPCCallCount();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual void  SetWarningMessageHook ( SteamAPIWarningMessageHook_t pFunction )	{
		char log[1024];
		sprintf(log,"SetWarningMessageHook() pFunction=0x%X ",
			pFunction		);
		OutputDebugStringA(log);
		pFunction);
		OutputDebugStringA("\n");
	}
	virtual bool  IsOverlayEnabled ()	{
		char log[1024];
		sprintf(log,"IsOverlayEnabled() "		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->IsOverlayEnabled();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual bool  BOverlayNeedsPresent ()	{
		char log[1024];
		sprintf(log,"BOverlayNeedsPresent() "		);
		OutputDebugStringA(log);
		bool  ret = m_pWrapper->BOverlayNeedsPresent();
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
	virtual SteamAPICall_t  CheckFileSignature ( const char *szFileName )	{
		char log[1024];
		sprintf(log,"CheckFileSignature() szFileName=%s ",
			szFileName		);
		OutputDebugStringA(log);
		SteamAPICall_t  ret = m_pWrapper->CheckFileSignature(szFileName);
		sprintf(log," returned 0x%X",ret);
		OutputDebugStringA(log);
		OutputDebugStringA("\n");
		return ret;
	}
};
