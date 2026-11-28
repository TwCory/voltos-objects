/* AF_BLUETOOTH */

struct bt_addr {

};

struct sockaddr_bt {
	__kernel_sa_family_t sbt_family;
	struct bt_addr sbt_addr;
};
