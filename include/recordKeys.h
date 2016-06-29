#ifndef RECORDKEYS_H
#define RECORDKEYS_H

#define FOREACH_RECKEY(FUNC) \
				FUNC(RECKEY_IP) \
				FUNC(RECKEY_ALIVE) \
				FUNC(RECKEY_BANNER) \
				FUNC(RECKEY_SYST_RESP) \
				FUNC(RECKEY_USER_RESP) \
				FUNC(RECKEY_PASS_RESP) \
				FUNC(RECKEY_PWD_RESP) \
				FUNC(RECKEY_DIFF_DATA_IP) \
				FUNC(RECKEY_FEAT_RESP) \
				FUNC(RECKEY_STAT_RESP) \
				FUNC(RECKEY_HELP_RESP) \
				FUNC(RECKEY_LAST_STATE) \
				FUNC(RECKEY_TERM_CODE) \
				FUNC(RECKEY_TERM_DESC) \
				FUNC(RECKEY_INTEREST_MASK) \
				FUNC(RECKEY_ILLEGAL_DATA) \
				FUNC(RECKEY_TOO_MUCH_DATA) \
				FUNC(RECKEY_ROBOT_DATA) \
				FUNC(RECKEY_LIST_DATA) \
				FUNC(RECKEY_PEER_CERT) \
				FUNC(RECKEY_CERT_CHAIN) \
				FUNC(RECKEY_TLS_CIPHER) \
				FUNC(RECKEY_TLS_CIPHER_VER) \
				FUNC(RECKEY_TLS_CIPHER_BITS) \
				FUNC(RECKEY_AUTH_TLS_RESP) \
				FUNC(RECKEY_LIST_RESP) \
				FUNC(RECKEY_RETR_RESP) \
				FUNC(RECKEY_ROBOT_GROUP) \
				FUNC(RECKEY_ROBOT_NOT_ALLOW) \
				FUNC(RECKEY_QUIT_RESP) \
				FUNC(RECKEY_PROT_RESP) \
				FUNC(RECKEY_PBSZ_RESP) \
				FUNC(RECKEY_SECURITY_TYPE) \
				FUNC(RECKEY_DATA_DBUFFER_DUMP) \
				FUNC(RECKEY_CTRL_DBUFFER_DUMP) \
				FUNC(RECKEY_TOTAL_NUM_REQ) \
				FUNC(RECKEY_EXTRA_RESP) \
				FUNC(RECKEY_OPENSSL_ERROR) \
				FUNC(RECKEY_AUTH_SSL_RESP) \
				FUNC(RECKEY_DISCONNECT_RESULT) \
				FUNC(RECKEY_DURATION) \
				FUNC(RECKEY_PASV_RESP) \
				FUNC(RECKEY_LIST_DONE) \
				FUNC(RECKEY_RETR_DONE) \
				FUNC(RECKEY_LIST_ERR_COUNT) \
				FUNC(RECKEY_PORT_RESP) \
				FUNC(RECKEY_BAD_PORT_LIST_RESP) \
				FUNC(RECKEY_BAD_PORT_LIST_DONE) \
				FUNC(RECKEY_FS_TYPE) \
				FUNC(RECKEY_SITE_RESP) \
				FUNC(RECKEY_UNCRAWLED) \

#define GENERATE_ENUM(ENUM) ENUM,
#define GENERATE_STRING(STRING) #STRING,

typedef enum {
    FOREACH_RECKEY(GENERATE_ENUM)
} RecKey_e;

static const char* RecKeyStrings[] = {
    FOREACH_RECKEY(GENERATE_STRING)
};


#endif // RECORDKEYS_H