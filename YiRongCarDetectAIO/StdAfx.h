// stdafx.h : include file for standard system include files,
//  or project specific include files that are used frequently, but
//      are changed infrequently
//

#if !defined(AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_)
#define AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#define VC_EXTRALEAN		// Exclude rarely-used stuff from Windows headers

#include <afxwin.h>         // MFC core and standard components
#include <afxext.h>         // MFC extensions
#include <afxdtctl.h>		// MFC support for Internet Explorer 4 Common Controls
#ifndef _AFX_NO_AFXCMN_SUPPORT
#include <afxcmn.h>			// MFC support for Windows Common Controls
#endif // _AFX_NO_AFXCMN_SUPPORT


//��������̶���
#define CAMERA_INC_DAHUA 1
#define CAMERA_INC_HAIKANG 2
#define CAMERA_INC_YAAN 3

//��ǰ����ͷ����
#define ALLTAB_CAMERA_INC_TYPE CAMERA_INC_HAIKANG

//����ģʽ 1 �綯��ģʽ 0
#define ALLTAB_DETECT_CAR_MODE 1

//����ʶ�����=1 �ر�=0  �رվͿ��Բ���KEYҲ����DEBUG
#define OPEN_CARDETECT_CODE 0

//��������ƽ̨ ģʽ =1  ������=0 
#define YRVM_PINGTAI_MODE	0

//�������¼ 1 ����������¼0
#define ALLTAB_LOGIN_WIN_MODE 1

//��������Ŀ
#define MESSAGEBOX_TITLE "���ų���ʶ��ϵͳ"

//�����������
#define MAX_AREA 1024

//�����ʾ���ٸ�����ͷ����
#define MAX_DEVICE_NUM 16


//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_STDAFX_H__DA1368DB_F92F_4AAE_86E3_70C4BF842BE0__INCLUDED_)