/* AF_APPLETALK */

struct at_addr {

};

struct sockaddr_at {
	__kernel_sa_family_t sat_family;
	struct at_addr sat_addr;
};
