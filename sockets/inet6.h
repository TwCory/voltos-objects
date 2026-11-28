/* AF_INET6 */

struct in6_addr {

};

struct sockaddr_in6 {
	__kernel_sa_family_t sin6_family;
	struct in6_addr sin6_addr;
};
