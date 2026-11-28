/* User Datagram Protocol */
#define UDP_PROTOCOL		17

enum {
	UDP_OPTION_KIND_T_
};

struct udp_hdr {
	__net16 		src_port;
	__net16 		dst_port;
	__net16			length;
	__csum16 		checksum;
};
