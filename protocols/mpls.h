/* Multi-Protocol Label Switching */
#define MPLS_ETHERTYPE				0x8847
#define MPLS_UA_ETHERTYPE			0x8848

#define MPLS_PROTOCOL				137

enum {
	MPLS_MSG_TYPE_T_UNSPEC			= 0,
#define MPLS_MSG_TYPE_UNSPEC			MPLS_MSG_TYPE_T_UNSPEC
	MPLS_MSG_TYPE_T_Echo_Request		= 1,
#define MPLS_MSG_TYPE_Echo_Request		MPLS_MSG_TYPE_T_Echo_Request
	MPLS_MSG_TYPE_T_Echo_Reply		= 2,
#define MPLS_MSG_TYPE_Echo_Reply		MPLS_MSG_TYPE_T_Echo_Reply
	MPLS_MSG_TYPE_T_Proxy_Ping_Request	= 3,
#define MPLS_MSG_TYPE_Proxy_Ping_Request	MPLS_MSG_TYPE_T_Proxy_Ping_Request
	MPLS_MSG_TYPE_T_Proxy_Ping_Reply	= 4,
#define MPLS_MSG_TYPE_Proxy_Ping_Reply		MPLS_MSG_TYPE_T_Proxy_Ping_Reply
	MPLS_MSG_TYPE_T_Relayed_Echo_Reply	= 5,
#define MPLS_MSG_TYPE_Relayed_Echo_Reply	MPLS_MSG_TYPE_T_Relayed_Echo_Reply
	__MPLS_MSG_TYPE_T_MAX__
};

#define MPLS_MSG_TYPE_MAX			(__MPLS_MSG_TYPE_T_MAX__ - 1)
