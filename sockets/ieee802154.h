/* AF_IEEE802154 */

struct ieee802154_addr {

};

struct sockaddr_ieee802154 {
	__kernel_sa_family_t sieee802154_family;
	struct ieee802154_addr sieee802154_addr;
};
