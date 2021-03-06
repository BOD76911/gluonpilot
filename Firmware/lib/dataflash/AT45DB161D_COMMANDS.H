#ifndef AT45DB161D_COMMANDS_H 
#define AT45DB161D_COMMANDS_H 

#define AT45DB161D_PAGE_READ 0xD2 

#define AT45DB161D_CONTINUOUS_READ_LOW_FREQ 0x03 

#define AT45DB161D_CONTINUOUS_READ_HIGH_FREQ 0x0B 

#define AT45DB161D_BUFFER_1_READ_LOW_FREQ 0xD1 

#define AT45DB161D_BUFFER_2_READ_LOW_FREQ 0xD3 

#define AT45DB161D_BUFFER_1_READ 0xD4 

#define AT45DB161D_BUFFER_2_READ 0xD6 

#define AT45DB161D_BUFFER_1_WRITE 0x84 

#define AT45DB161D_BUFFER_2_WRITE 0x87 

#define AT45DB161D_BUFFER_1_TO_PAGE_WITH_ERASE 0x83 

#define AT45DB161D_BUFFER_2_TO_PAGE_WITH_ERASE 0x86 

#define AT45DB161D_BUFFER_1_TO_PAGE_WITHOUT_ERASE 0x88 

#define AT45DB161D_BUFFER_2_TO_PAGE_WITHOUT_ERASE 0x89 

#define AT45DB161D_PAGE_ERASE 0x81 

#define AT45DB161D_BLOCK_ERASE 0x50 

#define AT45DB161D_SECTOR_ERASE 0x7C 

#define AT45DB161D_CHIP_ERASE_0 0xC7 
#define AT45DB161D_CHIP_ERASE_1 0x94 
#define AT45DB161D_CHIP_ERASE_2 0x80 
#define AT45DB161D_CHIP_ERASE_3 0x9A 

#define AT45DB161D_PAGE_THROUGH_BUFFER_1 0x82 

#define AT45DB161D_PAGE_THROUGH_BUFFER_2 0x85 

#ifdef AT45DB161D_EXPERT_MODE 
/* Use the following commands at your own risk ! */ 
#define AT45DB161D_ENABLE_SECTOR_PROTECTION_0 0x3D 
#define AT45DB161D_ENABLE_SECTOR_PROTECTION_1 0x2A 
#define AT45DB161D_ENABLE_SECTOR_PROTECTION_2 0x7F 
#define AT45DB161D_ENABLE_SECTOR_PROTECTION_3 0xA9 

#define AT45DB161D_DISABLE_SECTOR_PROTECTION_0 0x3D 
#define AT45DB161D_DISABLE_SECTOR_PROTECTION_1 0x2A 
#define AT45DB161D_DISABLE_SECTOR_PROTECTION_2 0x7F 
#define AT45DB161D_DISABLE_SECTOR_PROTECTION_3 0x9A 

#define AT45DB161D_ERASE_SECTOR_PROTECTION_REGISTER_0 0x3D 
#define AT45DB161D_ERASE_SECTOR_PROTECTION_REGISTER_0 0x2A 
#define AT45DB161D_ERASE_SECTOR_PROTECTION_REGISTER_0 0x7F 
#define AT45DB161D_ERASE_SECTOR_PROTECTION_REGISTER_0 0xCF 

#define AT45DB161D_PROGRAM_SECTOR_PROTECTION_REGISTER_0 0x3D 
#define AT45DB161D_PROGRAM_SECTOR_PROTECTION_REGISTER_1 0x2A 
#define AT45DB161D_PROGRAM_SECTOR_PROTECTION_REGISTER_2 0x7F 
#define AT45DB161D_PROGRAM_SECTOR_PROTECTION_REGISTER_3 0xFC 

#define AT45DB161D_SECTOR_LOCKDOWN_0 0X3D 
#define AT45DB161D_SECTOR_LOCKDOWN_1 0x2A 
#define AT45DB161D_SECTOR_LOCKDOWN_2 0x7F 
#define AT45DB161D_SECTOR_LOCKDOWN_3 0x30 

#define AT45DB161D_PROGRAM_SECURITY_REGISTER_0 0x9B 
#define AT45DB161D_PROGRAM_SECURITY_REGISTER_1 0x00 
#define AT45DB161D_PROGRAM_SECURITY_REGISTER_2 0x00 
#define AT45DB161D_PROGRAM_SECURITY_REGISTER_3 0x00 
#endif /* AT45DB161D_EXPERT_MODE */ 

#define AT45DB161D_READ_SECTOR_PROTECTION_REGISTER 0x32 

#define AT45DB161D_READ_SECTOR_LOCKDOWN_REGISTER 35H 

#define AT45DB161D_READ_SECURITY_REGISTER 0x77 

#define AT45DB161D_TRANSFER_PAGE_TO_BUFFER_1 0x53 

#define AT45DB161D_TRANSFER_PAGE_TO_BUFFER_2 0x55 

#define AT45DB161D_COMPARE_PAGE_TO_BUFFER_1 0x60 

#define AT45DB161D_COMPARE_PAGE_TO_BUFFER_2 0x61 

#define AT45DB161D_AUTO_PAGE_REWRITE_THROUGH_BUFFER_1 0x58 

#define AT45DB161D_AUTO_PAGE_REWRITE_THROUGH_BUFFER_2 0x59 

#define AT45DB161D_DEEP_POWER_DOWN 0xB9 

#define AT45DB161D_RESUME_FROM_DEEP_POWER_DOWN 0xAB 

#define AT45DB161D_STATUS_REGISTER_READ 0xD7 

#define AT45DB161D_READ_MANUFACTURER_AND_DEVICE_ID 0x9F 

#define AT45DB161D_BUFFER_1_READ_LEGACY 0X54 

#define AT45DB161D_BUFFER_2_READ_LEGACY 0x56 

#define AT45DB161D_PAGE_READ_LEGACY 0x52 

#define AT45DB161D_CONTINUOUS_READ_LEGACY 0x68 

#define AT45DB161D_STATUS_REGISTER_READ_LEGACY 0x57 

#endif /* AT45DB161D_COMMANDS_H */ 