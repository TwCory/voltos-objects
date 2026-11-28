/* AF_INET */

struct in_addr {
	__net32 s_addr;
};

struct sockaddr_in {
	__kernel_sa_family_t sin_family;
	struct in_addr sin_addr;
};
