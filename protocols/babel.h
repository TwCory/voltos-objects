/* Babel routing protocol */
#define BABEL_INFINITY		0xFFFF
#define BABEL_MAGIC		42
#define BABEL_PORT		6696
#define BABEL_VERSION		2

enum {
	BABEL_TLV_T_Pad1
	BABEL_TLV_T_PadN
	BABEL_TLV_T_Acknowledgement_Request
	BABEL_TLV_T_Acknowledgement
	BABEL_TLV_T_Hello
	BABEL_TLV_T_IHU
	BABEL_TLV_T_Router_ID
	BABEL_TLV_T_Next_Hop
	BABEL_TLV_T_Update
	BABEL_TLV_T_Route_Request
	BABEL_TLV_T_SeqNo_Request
	BABEL_TLV_T_TS_PC
	BABEL_TLV_T_HMAC
	BABEL_TLV_T_MAC
	BABEL_TLV_T_PC
	BABEL_TLV_T_Challenge_Request
	BABEL_TLV_T_Challenge_Reply
	__BABEL_TLV_T_MAX__
};

enum {
	BABEL_SUBTLV_T_
};

enum {
	BABEL_UPDATE_FLAG_F_DEFAULT_PREFIX		= (1 << 0),
	BABEL_UPDATE_FLAG_F_DEFAULT_ROUTER_ID		= (1 << 1),
};

enum {
	BABEL_AE_T_Wildcard				= 0,
	BABEL_AE_T_IPv4					= 1,
	BABEL_AE_T_IPv6					= 2,
	BABEL_AE_T_Link_Local_IPv6			= 3,
	BABEL_AE_T_v4_via_v6				= 4,
	__BABEL_AE_T_MAX__
};

enum {
	BABEL_HELLO_FLAG_F_UNICAST			= (1 << 0),
};
