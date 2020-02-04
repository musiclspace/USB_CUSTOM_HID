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
 #ifndef USER_HID_H
 #define USER_HID_H
 #include "usb_device.h"
 #include "usbd_conf.h"
 void user_hid_send(uint8_t *pdata);
 
 #endif
