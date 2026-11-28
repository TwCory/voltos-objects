/* Internet Protocol, Version 4 */
#define IPV4_ETHERTYPE			0x0800
#define IPV4_VERSION			4

struct ipv4_hdr {
	__u8 					version:4,
						ihl:4;
	__u8					dscp:6,
						ecn:2;
	__net16				total_length;
	__net16				identification;
	__u16					flags:3,
						fragment_offset:13;
	__u8				ttl;
	__u8				protocol;
	__csum16			checksum;
};
