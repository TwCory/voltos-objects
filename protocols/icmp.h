/* Internet Control Message Protocol */
#define ICMP_PROTOCOL			1

struct icmp_hdr {
	__u8 				type;
	__u8 				code;
	__csum16 			checksum;
};
