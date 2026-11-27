/* User Datagram Protocol */
#define UDP_PROTOCOL	17

struct udp_hdr {
	__net16 src_port;
	__net16 dst_port;
};
