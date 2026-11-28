/* Internet Group Management Protocol */
#define IGMP_PROTOCOL			2

struct igmp_hdr {
	__u8 				type;
	__u8 				code;
	__csum16 			checksum;
	struct in_addr 			group_addr;
};
