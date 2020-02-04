/* **************************************************************************************
 * All Rights Reserved
 * Pico
 * **************************************************************************************
 * Name : user_hid.c
 *
 * Description : 
 *
 * Author : Solen Liu  
 *
 * Date : 2019/04/22
 *
 * ************************************************************************************** */
 #include "user_hid.h"
 #include "usbd_customhid.h"
 extern USBD_HandleTypeDef hUsbDeviceFS;
 void user_hid_send(uint8_t *pdata)
 {
	 USBD_CUSTOM_HID_SendReport(&hUsbDeviceFS,pdata,USBD_CUSTOMHID_OUTREPORT_BUF_SIZE);
 }
