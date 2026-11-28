/* AF_VINES */

struct vines_addr {

};

struct sockaddr_vines {
	__kernel_sa_family_t svines_family;
	struct vines_addr svines_addr;
};
