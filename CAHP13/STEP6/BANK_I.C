/* this file contains the actual definitions of */
/* the IIDs and CLSIDs */

/* link this file in with the server and any clients */


/* File created by MIDL compiler version 5.01.0164 */
/* at Mon Aug 28 20:21:00 2000
 */
/* Compiler settings for D:\Samples\step6\Bank.idl:
    Oicf (OptLev=i2), W1, Zp8, env=Win32, ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
*/
//@@MIDL_FILE_HEADING(  )
#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IID_DEFINED__
#define __IID_DEFINED__

typedef struct _IID
{
    unsigned long x;
    unsigned short s1;
    unsigned short s2;
    unsigned char  c[8];
} IID;

#endif // __IID_DEFINED__

#ifndef CLSID_DEFINED
#define CLSID_DEFINED
typedef IID CLSID;
#endif // CLSID_DEFINED

const IID IID_IAccount = {0x5939F230,0x7B5F,0x11D4,{0x8B,0xEC,0x34,0x8F,0xBB,0x00,0x00,0x00}};


const IID IID_IMoveMoney = {0x8D7F75C3,0x7BCE,0x11D4,{0x8B,0xF0,0xF6,0xB5,0xE8,0x00,0x00,0x00}};


const IID IID_IReceipt = {0xFA1CAAD3,0x7CAB,0x11D4,{0x8B,0xF1,0x02,0xA5,0x4B,0x00,0x00,0x00}};


const IID IID_IUpdateReceipt = {0xFA1CAAD5,0x7CAB,0x11D4,{0x8B,0xF1,0x02,0xA5,0x4B,0x00,0x00,0x00}};


const IID LIBID_BANKLib = {0x5939F221,0x7B5F,0x11D4,{0x8B,0xEC,0x34,0x8F,0xBB,0x00,0x00,0x00}};


const CLSID CLSID_Account = {0x5939F232,0x7B5F,0x11D4,{0x8B,0xEC,0x34,0x8F,0xBB,0x00,0x00,0x00}};


const CLSID CLSID_MoveMoney = {0x8D7F75C4,0x7BCE,0x11D4,{0x8B,0xF0,0xF6,0xB5,0xE8,0x00,0x00,0x00}};


const CLSID CLSID_Receipt = {0xFA1CAAD4,0x7CAB,0x11D4,{0x8B,0xF1,0x02,0xA5,0x4B,0x00,0x00,0x00}};


const CLSID CLSID_UpdateReceipt = {0xFA1CAAD6,0x7CAB,0x11D4,{0x8B,0xF1,0x02,0xA5,0x4B,0x00,0x00,0x00}};


#ifdef __cplusplus
}
#endif

