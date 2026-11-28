/* UDP-Lite protocol */
#define UDPLITE_PROTOCOL	136

struct udplite_hdr {
	__net16 		src_port;
	__net16 		dst_port;
	__net16			length;
	__csum16		checksum;
};
