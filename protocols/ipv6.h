/* Internet Protocol, Version 6 */
#define IPV6_ETHERTYPE		0x86DD
#define IPV6_VERSION		6

struct ipv6_hdr {
	__u32				version:4,
					traffic_class:8,
					flow_label:20;
	__net16			payload_length;
	__u8			next_header;
	__u8			hop_limit;
};
