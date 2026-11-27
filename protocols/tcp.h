/* Transmission Control Protocol */
#define TCP_PROTOCOL	6

struct tcp_hdr {
	__net16 src_port;
	__net16 dst_port;
};
