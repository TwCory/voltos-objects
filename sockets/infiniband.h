/* AF_INFINIBAND */

struct ib_addr {

};

struct sockaddr_ib {
	__kernel_sa_family_t sib_family;
	struct ib_addr sib_addr;
};
