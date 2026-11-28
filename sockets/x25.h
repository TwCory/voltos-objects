/* AF_X25 */

struct x25_addr {

};

struct sockaddr_x25 {
	__kernel_sa_family_t sx25_family;
	struct x25_addr sx25_addr;
};
