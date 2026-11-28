/* IANA Address Family Identifiers */
enum {
	AFI_T_UNSPEC			= 0,
/* Unknown or invalid family */
#define AFI_UNSPEC			AFI_T_UNSPEC
	AFI_T_IPv4			= 1,
/* Internet Protocol Version 4 */
#define AFI_IPv4			AFI_T_IPv4
	AFI_T_IPv6			= 2,
/* Internet Protocol Version 6 */
#define AFI_IPv6			AFI_T_IPv6
	AFI_T_NSAP			= 3,
/* Network Service Access Point */
#define AFI_NSAP			AFI_T_NSAP
	AFI_T_HDLC			= 4,
/* HDLC 8-bit multidrop */
#define AFI_HDLC			AFI_T_HDLC
	AFI_T_BBN1822			= 5,
/* BBN 1822 */
#define AFI_BBN1822			AFI_T_BBN1822
	AFI_T_IEEE802			= 6,
/* IEEE 802 */
#define AFI_IEEE802			AFI_T_IEEE802
	AFI_T_E163			= 7,
/* E.163 */
#define AFI_E163			AFI_T_E163
	AFI_T_E164			= 8,
/* E.164 */
#define AFI_E164			AFI_T_E164
	AFI_T_F69			= 9,
/* F.69 */
#define AFI_F69				AFI_T_F69
	AFI_T_X121			= 10,
/* X.121 */
#define AFI_X121			AFI_T_X121
	AFI_T_IPX			= 11,
/* Internetwork Packet eXchange */
#define AFI_IPX				AFI_T_IPX
	AFI_T_AppleTalk			= 12,
/* AppleTalk */
#define AFI_AppleTalk			AFI_T_AppleTalk
	AFI_T_DECnet			= 13,
/* DECnet IV */
#define AFI_DECnet			AFI_T_DECnet
	AFI_T_VINES			= 14,
/* Banyan VINES */
#define AFI_VINES			AFI_T_VINES
	AFI_T_DNS			= 16,
/* Domain Name System */
#define AFI_DNS				AFI_T_DNS
	AFI_T_DName			= 17,
/* Distinguished Name */
#define AFI_DName			AFI_T_DName
	AFI_T_ASN			= 18,
/* Autonomous System Number */
#define AFI_ASN				AFI_T_ASN
	AFI_T_XTPv4			= 19,
/* XTP over IPv4 */
#define AFI_XTPv4			AFI_T_XTPv4
	AFI_T_XTPv6			= 20,
/* XTP over IPv6 */
#define AFI_XTPv6			AFI_T_XTPv6
	AFI_T_XTP			= 21,
/* XTP native mode */
#define AFI_XTP				AFI_T_XTP
	AFI_T_FCPort			= 22,
/* Fibre Channel World-Wide Port number */
#define AFI_FCPort			AFI_T_FCPort
	AFI_T_FCNode			= 23,
/* Fibre Channel World-Wide Node number */
#define AFI_FCNode			AFI_T_FCNode
	AFI_T_GWID			= 24,
/* Gateway Identifier number */
#define AFI_GWID			AFI_T_GWID
	AFI_T_L2VPN			= 25,
/* Layer 2 VPN information */
#define AFI_L2VPN			AFI_T_L2VPN
	AFI_T_Section			= 26,
/* MPLS-TP Section Endpoint Identifier number */
#define AFI_Section			AFI_T_Section
	AFI_T_LSP			= 27,
/* MPLS-TP LSP Endpoint Identifier number */
#define AFI_LSP				AFI_T_LSP
	AFI_T_Pseudowire		= 28,
/* MPLS-TP Pseudowire Endpoint Identifier number */
#define AFI_Pseudowire			AFI_T_Pseudowire
	AFI_T_MTIPv4			= 29,
/* Multi-Topology IPv4 */
#define AFI_MTIPv4			AFI_T_MTIPv4
	AFI_T_MTIPv6			= 30,
/* Multi-Topology IPv6 */
#define AFI_MTIPv6			AFI_T_MTIPv6
	AFI_T_BGPSFC			= 31,
/* BGP Service Function Chaining information */
#define AFI_BGPSFC			AFI_T_BGPSFC
	AFI_T_EIGRPCommonSF		= 16384,
/* EIGRP Common Service Family */
#define AFI_EIGRPCommonSF		AFI_T_EIGRPCommonSF
	AFI_T_EIGRPv4SF			= 16385,
/* EIGRP IPv4 Service Family */
#define AFI_EIGRPv4SF			AFI_T_EIGRPv4SF
	AFI_T_EIGRPv6SF			= 16386,
/* EIGRP IPv6 Service Family */
#define AFI_EIGRPv6SF			AFI_T_EIGRPv6SF
	AFI_T_LCAF			= 16387,
/* LISP Canonical Address Format */
#define AFI_LCAF			AFI_T_LCAF
	AFI_T_BGPLS			= 16388,
/* BGP Link State */
#define AFI_BGPLS			AFI_T_BGPLS
	AFI_T_48BitMAC			= 16389,
/* 48-bit MAC address */
#define AFI_48BitMAC			AFI_T_48BitMAC
	AFI_T_64BitMAC			= 16390,
/* 64-bit MAC address */
#define AFI_64BitMAC			AFI_T_64BitMAC
	AFI_T_OUI			= 16391,
/* Organizationally Unique Identifier number */
#define AFI_OUI				AFI_T_OUI
	AFI_T_MAC24			= 16392,
/* MAC/24 */
#define AFI_MAC24			AFI_T_MAC24
	AFI_T_MAC40			= 16393,
/* MAC/40 */
#define AFI_MAC40			AFI_T_MAC40
	AFI_T_IPv664			= 16394,
/* IPv6/64 */
#define AFI_IPv664			AFI_T_IPv664
	AFI_T_RBridge			= 16395,
/* RBridge Port ID */
#define AFI_RBridge			AFI_T_RBridge
	AFI_T_TRILL			= 16396,
/* TRILL Nickname */
#define AFI_TRILL			AFI_T_TRILL
	AFI_T_UUID			= 16397,
/* Universally Unique Identifier */
#define AFI_UUID			AFI_T_UUID
	AFI_T_Policy			= 16398,
/* Routing policy information */
#define AFI_Policy			AFI_T_Policy
	AFI_T_MPLS			= 16399,
/* MPLS namespaces */
#define AFI_MPLS			AFI_T_MPLS
	__AFI_T_MAX__
};

#define AFI_MAX				(__AFI_T_MAX__ - 1)
