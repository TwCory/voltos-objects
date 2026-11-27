/* Internet Control Message Protocol for IPv6 */
#define ICMPV6_PROTOCOL		58

struct icmpv6_hdr {
	__u8 type;
	__u8 code;
	__csum16 checksum;
};
