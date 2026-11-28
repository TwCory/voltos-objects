/* AF_AX25 */

struct ax25_addr {

};

struct sockaddr_ax25 {
	__kernel_sa_family_t sax25_family;
	struct ax25_addr sax25_addr;
};
