/* AF_ISO */

struct iso_addr {

};

struct sockaddr_iso {
	__kernel_sa_family_t siso_family;
	struct iso_addr siso_addr;
};
