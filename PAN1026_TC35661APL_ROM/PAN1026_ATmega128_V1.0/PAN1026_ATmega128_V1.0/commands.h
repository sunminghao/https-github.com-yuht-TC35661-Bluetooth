/*
 * commands.h
 *
 * Author: Panasonic
 */ 


#ifndef COMMANDS_H_
#define COMMANDS_H_

// Remote device BD address (Please insert your remote device BD-Address here with LSB first)
unsigned char REMOTE_BDADDRESS[6] = {0x12, 0x00, 0x00, 0x43, 0x13, 0x00};

unsigned char TCU_HCI_RESET_REQ[4] = {0x01, 0x03, 0x0c, 0x00};
unsigned char TCU_HCI_GET_FIRMWARE_VERSION_REQ[13] = {0x01, 0x08, 0xfc, 0x09, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x14, 0x0d, 0xff, 0x00};
unsigned char TCU_HCI_M2_BTL_SET_I2C_ENABLE_REQ[15] = {0x01, 0x08, 0xfc, 0x0b, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x14, 0x5b, 0xff, 0x02, 0x03, 0x01};
unsigned char TCU_HCI_M2_BTL_EEPROM_WRITE_ENABLE_REQ[13] = {0x01, 0x08, 0xfc, 0x09, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x14, 0x83, 0xff, 0x00};
unsigned char TCU_HCI_M2_GENERAL_READ_EEPROM_REQ[20] = {0x01, 0x08, 0xfc, 0x10, 0x00, 0xa1, 0x00, 0x00, 0x00, 0x14, 0x88, 0xff, 0x10, 0x06, 0xa0, 0x01, 0x01, 0x06, 0x02, 0x00};
unsigned char TCU_HCI_WRITE_BD_ADDR_REQ[10] = {0x01, 0x13, 0x10, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char TCU_HCI_SET_MODE_REQ[7] = {0x01, 0x08, 0xfc, 0x03, 0x00, 0x99, 0x01};
unsigned char TCU_MNG_INIT_REQ[18] = {0x12, 0x00, 0x00, 0xe1, 0x01, 0x0b, 0x00, 0x04, 0x00, 0x08, 0x50, 0x41, 0x4e, 0x31, 0x30, 0x32, 0x36, 0x41};
unsigned char TCU_MNG_STANDARD_HCI_SET_REQ_Write_Class_of_Device[13] = {0x0d, 0x00, 0x00, 0xe1, 0x3d, 0x06, 0x00, 0x24, 0x0c, 0x03, 0x18, 0x11, 0xc0};
unsigned char TCU_SPP_SETUP_REQ[7] = {0x07, 0x00, 0x00, 0xe5, 0x01, 0x00, 0x00};
unsigned char TCU_MNG_SET_SCAN_REQ[8] = {0x08, 0x00, 0x00, 0xe1, 0x0c, 0x01, 0x00, 0x03};
unsigned char TCU_SPP_CONNECT_REQ[23] = {0x17, 0x00, 0x00, 0xe5, 0x03, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x05, 0x00};
unsigned char TCU_MNG_SSP_SET_REQ_HCI_IO_Capability_Request_Reply[19] = {0x13, 0x00, 0x00, 0xe1, 0x3d, 0x0c, 0x00, 0x2b, 0x04, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x03};
unsigned char TCU_MNG_SSP_SET_REQ_HCI_User_Confirmation_Request_Reply[17] = {0x11, 0x00, 0x00, 0xe1, 0x3d, 0x0a, 0x00, 0x2c, 0x04, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char TCU_SPP_DATA_TRANSFER_REQ[21] = {0x15, 0x00, 0x00, 0xe5, 0x08, 0x0e, 0x00, 0x0c, 0x00, 0x50, 0x41, 0x4e, 0x31, 0x30, 0x32, 0x36, 0x20, 0x54, 0x45, 0x53, 0x54};

#endif /* COMMANDS_H_ */
