/* Label Distribution Protocol */

#define LDP_PORT							646

enum {
	LDP_MSG_TYPE_T_UNSPEC						= 0x0000,
#define LDP_MSG_TYPE_UNSPEC						LDP_MSG_TYPE_T_UNSPEC
	LDP_MSG_TYPE_T_Notification					= 0x0001,
#define LDP_MSG_TYPE_Notification					LDP_MSG_TYPE_T_Notification
	LDP_MSG_TYPE_T_Hello						= 0x0100,
#define LDP_MSG_TYPE_Hello						LDP_MSG_TYPE_T_Hello
	LDP_MSG_TYPE_T_Initialization					= 0x0200,
#define LDP_MSG_TYPE_Initialization					LDP_MSG_TYPE_T_Initialization
	LDP_MSG_TYPE_T_KeepAlive					= 0x0201,
#define LDP_MSG_TYPE_KeepAlive						LDP_MSG_TYPE_T_KeepAlive
	LDP_MSG_TYPE_T_Capability					= 0x0202,
#define LDP_MSG_TYPE_Capability						LDP_MSG_TYPE_T_Capability
	LDP_MSG_TYPE_T_Address						= 0x0300,
#define LDP_MSG_TYPE_Address						LDP_MSG_TYPE_T_Address
	LDP_MSG_TYPE_T_Address_Withdraw					= 0x0301,
#define LDP_MSG_TYPE_Address_Withdraw					LDP_MSG_TYPE_T_Address_Withdraw
	LDP_MSG_TYPE_T_Label_Mapping					= 0x0400,
#define LDP_MSG_TYPE_Label_Mapping					LDP_MSG_TYPE_T_Label_Mapping
	LDP_MSG_TYPE_T_Label_Request					= 0x0401,
#define LDP_MSG_TYPE_Label_Request					LDP_MSG_TYPE_T_Label_Request
	LDP_MSG_TYPE_T_Label_Withdraw					= 0x0402,
#define LDP_MSG_TYPE_Label_Withdraw					LDP_MSG_TYPE_T_Label_Withdraw
	LDP_MSG_TYPE_T_Label_Release					= 0x0403,
#define LDP_MSG_TYPE_Label_Release					LDP_MSG_TYPE_T_Label_Release
	LDP_MSG_TYPE_T_Label_Abort_Request				= 0x0404,
#define LDP_MSG_TYPE_Label_Abort_Request				LDP_MSG_TYPE_T_Label_Abort_Request
	LDP_MSG_TYPE_T_Call_Setup					= 0x0500,
#define LDP_MSG_TYPE_Call_Setup						LDP_MSG_TYPE_T_Call_Setup
	LDP_MSG_TYPE_T_Call_Release					= 0x0501,
#define LDP_MSG_TYPE_Call_Release					LDP_MSG_TYPE_T_Call_Release
	LDP_MSG_TYPE_T_RG_Connect					= 0x0700,
#define LDP_MSG_TYPE_RG_Connect						LDP_MSG_TYPE_T_RG_Connect
	LDP_MSG_TYPE_T_RG_Disconnect					= 0x0701,
#define LDP_MSG_TYPE_RG_Disconnect					LDP_MSG_TYPE_T_RG_Disconnect
	LDP_MSG_TYPE_T_RG_Notification					= 0x0702,
#define LDP_MSG_TYPE_RG_Notification					LDP_MSG_TYPE_T_RG_Notification
	LDP_MSG_TYPE_T_RG_Application_Data				= 0x0703,
#define LDP_MSG_TYPE_RG_Application_Data				LDP_MSG_TYPE_T_RG_Application_Data
	__LDP_MSG_TYPE_T_MAX__
};

#define LDP_MSG_TYPE_MAX						(__LDP_MSG_TYPE_T_MAX__ - 1)

enum {
	LDP_TLV_T_UNSPEC 						= 0x0000,
#define LDP_TLV_UNSPEC							LDP_TLV_T_UNSPEC
	LDP_TLV_T_Sequence_Number 					= 0x0001,
#define LDP_TLV_Sequence_Number						LDP_TLV_T_Sequence_Number
	LDP_TLV_T_FEC 							= 0x0100,
#define LDP_TLV_FEC							LDP_TLV_T_FEC
	LDP_TLV_T_Address_List 						= 0x0101,
#define LDP_TLV_Address_List						LDP_TLV_T_Address_List
	LDP_TLV_T_Hop_Count 						= 0x0103,
#define LDP_TLV_Hop_Count						LDP_TLV_T_Hop_Count
	LDP_TLV_T_Path_Vector 						= 0x0104,
#define LDP_TLV_Path_Vector						LDP_TLV_T_Path_Vector
	LDP_TLV_T_Generic_Label 					= 0x0200,
#define LDP_TLV_Generic_Label						LDP_TLV_T_Generic_Label
	LDP_TLV_T_ATM_Label 						= 0x0201,
#define LDP_TLV_ATM_Label						LDP_TLV_T_ATM_Label
	LDP_TLV_T_Frame_Relay_Label 					= 0x0202,
#define LDP_TLV_Frame_Relay_Label					LDP_TLV_T_Frame_Relay_Label
	LDP_TLV_T_FT_Protection 					= 0x0203,
#define LDP_TLV_FT_Protection						LDP_TLV_T_FT_Protection
	LDP_TLV_T_Upstream_Assigned_Label 				= 0x0204,
#define LDP_TLV_Upstream_Assigned_Label					LDP_TLV_T_Upstream_Assigned_Label
	LDP_TLV_T_Upstream_Assigned_Label_Request 			= 0x0205,
#define LDP_TLV_Upstream_Assigned_Label_Request				LDP_TLV_T_Upstream_Assigned_Label_Request
	LDP_TLV_T_Entropy_Label_Capability 				= 0x0206,
#define LDP_TLV_Entropy_Label_Capability				LDP_TLV_T_Entropy_Label_Capability
	LDP_TLV_T_Status 						= 0x0300,
#define LDP_TLV_Status							LDP_TLV_T_Status
	LDP_TLV_T_Extended_Status 					= 0x0301,
#define LDP_TLV_Extended_Status						LDP_TLV_T_Extended_Status
	LDP_TLV_T_Returned_PDU 						= 0x0302,
#define LDP_TLV_Returned_PDU						LDP_TLV_T_Returned_PDU
	LDP_TLV_T_Returned_Message 					= 0x0303,
#define LDP_TLV_Returned_Message					LDP_TLV_T_Returned_Message
	LDP_TLV_T_Returned_TLVs 					= 0x0304,
#define LDP_TLV_Returned_TLVs						LDP_TLV_T_Returned_TLVs
	LDP_TLV_T_Common_Hello_Parameters 				= 0x0400,
#define LDP_TLV_Common_Hello_Parameters					LDP_TLV_T_Common_Hello_Parameters
	LDP_TLV_T_IPv4_Transport_Address 				= 0x0401,
#define LDP_TLV_IPv4_Transport_Address					LDP_TLV_T_IPv4_Transport_Address
	LDP_TLV_T_Configuration_Sequence_Number 			= 0x0402,
#define LDP_TLV_Configuration_Sequence_Number				LDP_TLV_T_Configuration_Sequence_Number
	LDP_TLV_T_IPv6_Transport_Address 				= 0x0403,
#define LDP_TLV_IPv6_Transport_Address					LDP_TLV_T_IPv6_Transport_Address
	LDP_TLV_T_MAC 							= 0x0404,
#define LDP_TLV_MAC							LDP_TLV_T_MAC
	LDP_TLV_T_Cryptographic_Authentication 				= 0x0405,
#define LDP_TLV_Cryptographic_Authentication				LDP_TLV_T_Cryptographic_Authentication
	LDP_TLV_T_MAC_Flush_Parameters 					= 0x0406,
#define LDP_TLV_MAC_Flush_Parameters					LDP_TLV_T_MAC_Flush_Parameters
	LDP_TLV_T_PBB_B_MAC_List 					= 0x0407,
#define LDP_TLV_PBB_B_MAC_List						LDP_TLV_T_PBB_B_MAC_List
	LDP_TLV_T_PBB_I_SID_List 					= 0x0408,
#define LDP_TLV_PBB_I_SID_List						LDP_TLV_T_PBB_I_SID_List
	LDP_TLV_T_Common_Session_Parameters 				= 0x0500,
#define LDP_TLV_Common_Session_Parameters				LDP_TLV_T_Common_Session_Parameters
	LDP_TLV_T_ATM_Session_Parameters 				= 0x0501,
#define LDP_TLV_ATM_Session_Parameters					LDP_TLV_T_ATM_Session_Parameters
	LDP_TLV_T_Frame_Relay_Session_Parameters 			= 0x0502,
#define LDP_TLV_Frame_Relay_Session_Parameters				LDP_TLV_T_Frame_Relay_Session_Parameters
	LDP_TLV_T_FT_Session 						= 0x0503,
#define LDP_TLV_FT_Session						LDP_TLV_T_FT_Session
	LDP_TLV_T_FT_Ack 						= 0x0504,
#define LDP_TLV_FT_Ack							LDP_TLV_T_FT_Ack
	LDP_TLV_T_FT_Cork 						= 0x0505,
#define LDP_TLV_FT_Cork							LDP_TLV_T_FT_Cork
	LDP_TLV_T_Dynamic_Capability_Announcement 			= 0x0506,
#define LDP_TLV_Dynamic_Capability_Announcement				LDP_TLV_T_Dynamic_Capability_Announcement
	LDP_TLV_T_Upstream_Label_Assignment_Capability 			= 0x0507,
#define LDP_TLV_Upstream_Label_Assignment_Capability			LDP_TLV_T_Upstream_Label_Assignment_Capability
	LDP_TLV_T_P2MP_Capability_Parameter 				= 0x0508,
#define LDP_TLV_P2MP_Capability_Parameter				LDP_TLV_T_P2MP_Capability_Parameter
	LDP_TLV_T_MP2MP_Capability_Parameter 				= 0x0509,
#define LDP_TLV_MP2MP_Capability_Parameter				LDP_TLV_T_MP2MP_Capability_Parameter
	LDP_TLV_T_MBB_Capability_Parameter 				= 0x050A,
#define LDP_TLV_MBB_Capability_Parameter				LDP_TLV_T_MBB_Capability_Parameter
	LDP_TLV_T_Typed_Wildcard_FEC_Capability 			= 0x050B,
#define LDP_TLV_Typed_Wildcard_FEC_Capability				LDP_TLV_T_Typed_Wildcard_FEC_Capability
	LDP_TLV_T_Multi_Topology_Capability 				= 0x050C,
#define LDP_TLV_Multi_Topology_Capability				LDP_TLV_T_Multi_Topology_Capability
	LDP_TLV_T_State_Advertisement_Control_Capability 		= 0x050D,
#define LDP_TLV_State_Advertisement_Control_Capability			LDP_TLV_T_State_Advertisement_Control_Capability
	LDP_TLV_T_MRT_Capability 					= 0x050E,
#define LDP_TLV_MRT_Capability						LDP_TLV_T_MRT_Capability
	LDP_TLV_T_Targeted_Application_Capability 			= 0x050F,
#define LDP_TLV_Targeted_Application_Capability				LDP_TLV_T_Targeted_Application_Capability
	LDP_TLV_T_MT_Multipoint_Capability 				= 0x0510,
#define LDP_TLV_MT_Multipoint_Capability				LDP_TLV_T_MT_Multipoint_Capability
	LDP_TLV_T_Label_Request_Message_ID 				= 0x0600,
#define LDP_TLV_Label_Request_Message_ID				LDP_TLV_T_Label_Request_Message_ID
	LDP_TLV_T_MTU 							= 0x0601,
#define LDP_TLV_MTU							LDP_TLV_T_MTU
	LDP_TLV_T_Unrecognized_Notification_Capability 			= 0x0603,
#define LDP_TLV_Unrecognized_Notification_Capability			LDP_TLV_T_Unrecognized_Notification_Capability
	LDP_TLV_T_ICCP_Capability 					= 0x0700,
#define LDP_TLV_ICCP_Capability						LDP_TLV_T_ICCP_Capability
	LDP_TLV_T_Dual_Stack_Capability 				= 0x0701,
#define LDP_TLV_Dual_Stack_Capability					LDP_TLV_T_Dual_Stack_Capability
	LDP_TLV_T_P2MP_PW_Capability 					= 0x0703,
#define LDP_TLV_P2MP_PW_Capability					LDP_TLV_T_P2MP_PW_Capability
	LDP_TLV_T_Explicit_Route 					= 0x0800,
#define LDP_TLV_Explicit_Route						LDP_TLV_T_Explicit_Route
	LDP_TLV_T_IPv4_Prefix_ER_Hop 					= 0x0801,
#define LDP_TLV_IPv4_Prefix_ER_Hop					LDP_TLV_T_IPv4_Prefix_ER_Hop
	LDP_TLV_T_IPv6_Prefix_ER_Hop 					= 0x0802,
#define LDP_TLV_IPv6_Prefix_ER_Hop					LDP_TLV_T_IPv6_Prefix_ER_Hop
	LDP_TLV_T_ASN_ER_Hop 						= 0x0803,
#define LDP_TLV_ASN_ER_Hop						LDP_TLV_T_ASN_ER_Hop
	LDP_TLV_T_LSP_ID_ER_Hop 					= 0x0804,
#define LDP_TLV_LSP_ID_ER_Hop						LDP_TLV_T_LSP_ID_ER_Hop
	LDP_TLV_T_L2_PW_Address_of_Switching_Point 			= 0x0805,
#define LDP_TLV_L2_PW_Address_of_Switching_Point			LDP_TLV_T_L2_PW_Address_of_Switching_Point
	LDP_TLV_T_Traffic_Parameters 					= 0x0810,
#define LDP_TLV_Traffic_Parameters					LDP_TLV_T_Traffic_Parameters
	LDP_TLV_T_Preemption 						= 0x0820,
#define LDP_TLV_Preemption						LDP_TLV_T_Preemption
	LDP_TLV_T_LSPID 						= 0x0821,
#define LDP_TLV_LSPID							LDP_TLV_T_LSPID
	LDP_TLV_T_Resource_Class 					= 0x0822,
#define LDP_TLV_Resource_Class						LDP_TLV_T_Resource_Class
	LDP_TLV_T_Route_Pinning 					= 0x0823,
#define LDP_TLV_Route_Pinning						LDP_TLV_T_Route_Pinning
	LDP_TLV_T_Generalized_Label_Request 				= 0x0824,
#define LDP_TLV_Generalized_Label_Request				LDP_TLV_T_Generalized_Label_Request
	LDP_TLV_T_Generalized_Label 					= 0x0825,
#define LDP_TLV_Generalized_Label					LDP_TLV_T_Generalized_Label
	LDP_TLV_T_Upstream_Label 					= 0x0826,
#define LDP_TLV_Upstream_Label						LDP_TLV_T_Upstream_Label
	LDP_TLV_T_Label_Set 						= 0x0827,
#define LDP_TLV_Label_Set						LDP_TLV_T_Label_Set
	LDP_TLV_T_Waveband_Label 					= 0x0828,
#define LDP_TLV_Waveband_Label						LDP_TLV_T_Waveband_Label
	LDP_TLV_T_ER_Hop 						= 0x0829,
#define LDP_TLV_ER_Hop							LDP_TLV_T_ER_Hop
	LDP_TLV_T_Acceptable_Label_Set 					= 0x082A,
#define LDP_TLV_Acceptable_Label_Set					LDP_TLV_T_Acceptable_Label_Set
	LDP_TLV_T_Admin_Status 						= 0x082B,
#define LDP_TLV_Admin_Status						LDP_TLV_T_Admin_Status
	LDP_TLV_T_Interface_ID 						= 0x082C,
#define LDP_TLV_Interface_ID						LDP_TLV_T_Interface_ID
	LDP_TLV_T_IPv4_Interface_ID 					= 0x082D,
#define LDP_TLV_IPv4_Interface_ID					LDP_TLV_T_IPv4_Interface_ID
	LDP_TLV_T_IPv6_Interface_ID 					= 0x082E,
#define LDP_TLV_IPv6_Interface_ID					LDP_TLV_T_IPv6_Interface_ID
	LDP_TLV_T_IPv4_IF_ID_Status 					= 0x082F,
#define LDP_TLV_IPv4_IF_ID_Status					LDP_TLV_T_IPv4_IF_ID_Status
	LDP_TLV_T_IPv6_IF_ID_Status 					= 0x0830,
#define LDP_TLV_IPv6_IF_ID_Status					LDP_TLV_T_IPv6_IF_ID_Status
	LDP_TLV_T_Op_Sp_Call_ID 					= 0x0831,
#define LDP_TLV_Op_Sp_Call_ID						LDP_TLV_T_Op_Sp_Call_ID
	LDP_TLV_T_GU_Call_ID 						= 0x0832,
#define LDP_TLV_GU_Call_ID						LDP_TLV_T_GU_Call_ID
	LDP_TLV_T_Call_Capability 					= 0x0833,
#define LDP_TLV_Call_Capability						LDP_TLV_T_Call_Capability
	LDP_TLV_T_Crankback 						= 0x0834,
#define LDP_TLV_Crankback						LDP_TLV_T_Crankback
	LDP_TLV_T_Protection 						= 0x0835,
#define LDP_TLV_Protection						LDP_TLV_T_Protection
	LDP_TLV_T_LSP_TUNNEL_INTERFACE_ID 				= 0x0836,
#define LDP_TLV_LSP_TUNNEL_INTERFACE_ID					LDP_TLV_T_LSP_TUNNEL_INTERFACE_ID
	LDP_TLV_T_Unnumbered_Interface_ID 				= 0x0837,
#define LDP_TLV_Unnumbered_Interface_ID					LDP_TLV_T_Unnumbered_Interface_ID
	LDP_TLV_T_SONET_Traffic_Parameters 				= 0x0838,
#define LDP_TLV_SONET_Traffic_Parameters				LDP_TLV_T_SONET_Traffic_Parameters
	LDP_TLV_T_Diff_Serv 						= 0x0901,
#define LDP_TLV_Diff_Serv						LDP_TLV_T_Diff_Serv
	LDP_TLV_T_HSMP_LSP_Capability_Parameter 			= 0x0902,
#define LDP_TLV_HSMP_LSP_Capability_Parameter				LDP_TLV_T_HSMP_LSP_Capability_Parameter
	LDP_TLV_T_IPv4_Source_ID 					= 0x0960,
#define LDP_TLV_IPv4_Source_ID						LDP_TLV_T_IPv4_Source_ID
	LDP_TLV_T_IPv6_Source_ID 					= 0x0961,
#define LDP_TLV_IPv6_Source_ID						LDP_TLV_T_IPv6_Source_ID
	LDP_TLV_T_NSAP_Source_ID 					= 0x0962,
#define LDP_TLV_NSAP_Source_ID						LDP_TLV_T_NSAP_Source_ID
	LDP_TLV_T_IPv4_Destination_ID 					= 0x0963,
#define LDP_TLV_IPv4_Destination_ID					LDP_TLV_T_IPv4_Destination_ID
	LDP_TLV_T_IPv6_Destination_ID 					= 0x0964,
#define LDP_TLV_IPv6_Destination_ID					LDP_TLV_T_IPv6_Destination_ID
	LDP_TLV_T_NSAP_Destination_ID 					= 0x0965,
#define LDP_TLV_NSAP_Destination_ID					LDP_TLV_T_NSAP_Destination_ID
	LDP_TLV_T_Egress_Label 						= 0x0966,
#define LDP_TLV_Egress_Label						LDP_TLV_T_Egress_Label
	LDP_TLV_T_Local_Connection_ID 					= 0x0967,
#define LDP_TLV_Local_Connection_ID					LDP_TLV_T_Local_Connection_ID
	LDP_TLV_T_Diversity 						= 0x0968,
#define LDP_TLV_Diversity						LDP_TLV_T_Diversity
	LDP_TLV_T_Contract_ID 						= 0x0969,
#define LDP_TLV_Contract_ID						LDP_TLV_T_Contract_ID
	LDP_TLV_T_PW_Status 						= 0x096A,
#define LDP_TLV_PW_Status						LDP_TLV_T_PW_Status
	LDP_TLV_T_PW_Interface_Parameters 				= 0x096B,
#define LDP_TLV_PW_Interface_Parameters					LDP_TLV_T_PW_Interface_Parameters
	LDP_TLV_T_PW_Group_ID 						= 0x096C,
#define LDP_TLV_PW_Group_ID						LDP_TLV_T_PW_Group_ID
	LDP_TLV_T_Pseudowire_Switching_Point_PE 			= 0x096D,
#define LDP_TLV_Pseudowire_Switching_Point_PE				LDP_TLV_T_Pseudowire_Switching_Point_PE
	LDP_TLV_T_Bandwidth 						= 0x096E,
#define LDP_TLV_Bandwidth						LDP_TLV_T_Bandwidth
	LDP_TLV_T_MP_Status_Type 					= 0x096F,
#define LDP_TLV_MP_Status_Type						LDP_TLV_T_MP_Status_Type
	LDP_TLV_T_UNI_Service_Level 					= 0x0970,
#define LDP_TLV_UNI_Service_Level					LDP_TLV_T_UNI_Service_Level
	LDP_TLV_T_Queue_Request 					= 0x0971,
#define LDP_TLV_Queue_Request						LDP_TLV_T_Queue_Request
	LDP_TLV_T_MP_Node_Protection_Capability 			= 0x0972,
#define LDP_TLV_MP_Node_Protection_Capability				LDP_TLV_T_MP_Node_Protection_Capability
	LDP_TLV_T_PSN_Tunnel_Binding 					= 0x0973,
#define LDP_TLV_PSN_Tunnel_Binding					LDP_TLV_T_PSN_Tunnel_Binding
	LDP_TLV_T_Egress_Protection_Capability 				= 0x0974,
#define LDP_TLV_Egress_Protection_Capability				LDP_TLV_T_Egress_Protection_Capability
	__LDP_TLV_T_MAX__
};

#define LDP_TLV_MAX							(__LDP_TLV_T_MAX__ - 1)

enum {
	LDP_FEC_TYPE_T_UNSPEC 						= 0x00,
#define LDP_FEC_TYPE_UNSPEC						LDP_FEC_TYPE_T_UNSPEC
	LDP_FEC_TYPE_T_Wildcard 					= 0x01,
#define LDP_FEC_TYPE_Wildcard						LDP_FEC_TYPE_T_Wildcard
	LDP_FEC_TYPE_T_Prefix 						= 0x02,
#define LDP_FEC_TYPE_Prefix						LDP_FEC_TYPE_T_Prefix
	LDP_FEC_TYPE_T_CR_LSP 						= 0x04,
#define LDP_FEC_TYPE_CR_LSP						LDP_FEC_TYPE_T_CR_LSP
	LDP_FEC_TYPE_T_Typed_Wildcard_Element 				= 0x05,
#define LDP_FEC_TYPE_Typed_Wildcard_Element				LDP_FEC_TYPE_T_Typed_Wildcard_Element
	LDP_FEC_TYPE_T_P2MP 						= 0x06,
#define LDP_FEC_TYPE_P2MP						LDP_FEC_TYPE_T_P2MP
	LDP_FEC_TYPE_T_MP2MP_Up 					= 0x07,
#define LDP_FEC_TYPE_MP2MP_Up						LDP_FEC_TYPE_T_MP2MP_Up
	LDP_FEC_TYPE_T_MP2MP_Down 					= 0x08,
#define LDP_FEC_TYPE_MP2MP_Down						LDP_FEC_TYPE_T_MP2MP_Down
	LDP_FEC_TYPE_T_HSMP_Upstream 					= 0x09,
#define LDP_FEC_TYPE_HSMP_Upstream					LDP_FEC_TYPE_T_HSMP_Upstream
	LDP_FEC_TYPE_T_HSMP_Downstream 					= 0x0A,
#define LDP_FEC_TYPE_HSMP_Downstream					LDP_FEC_TYPE_T_HSMP_Downstream
	LDP_FEC_TYPE_T_PWID_Element 					= 0x80,
#define LDP_FEC_TYPE_PWID_Element					LDP_FEC_TYPE_T_PWID_Element
	LDP_FEC_TYPE_T_Generalized_PWID_Element 			= 0x81,
#define LDP_FEC_TYPE_Generalized_PWID_Element				LDP_FEC_TYPE_T_Generalized_PWID_Element
	LDP_FEC_TYPE_T_P2MP_PW_Upstream_Element 			= 0x82,
#define LDP_FEC_TYPE_P2MP_PW_Upstream_Element				LDP_FEC_TYPE_T_P2MP_PW_Upstream_Element
	LDP_FEC_TYPE_T_Protection_Element 				= 0x83,
#define LDP_FEC_TYPE_Protection_Element					LDP_FEC_TYPE_T_Protection_Element
	LDP_FEC_TYPE_T_P2P_PW_Downstream_Element 			= 0x84,
#define LDP_FEC_TYPE_P2P_PW_Downstream_Element				LDP_FEC_TYPE_T_P2P_PW_Downstream_Element
	__LDP_FEC_TYPE_T_MAX__
};

#define LDP_FEC_TYPE_MAX						(__LDP_FEC_TYPE_T_MAX__ - 1)

enum {
	LDP_STATUS_T_Success 						= 0x00000000,
#define LDP_STATUS_Success						LDP_STATUS_T_Success
	LDP_STATUS_T_Bad_LDP_Identifier 				= 0x00000001,
#define LDP_STATUS_Bad_LDP_Identifier					LDP_STATUS_T_Bad_LDP_Identifier
	LDP_STATUS_T_Bad_Protocol_Version 				= 0x00000002,
#define LDP_STATUS_Bad_Protocol_Version					LDP_STATUS_T_Bad_Protocol_Version
	LDP_STATUS_T_Bad_PDU_Length 					= 0x00000003,
#define LDP_STATUS_Bad_PDU_Length					LDP_STATUS_T_Bad_PDU_Length
	LDP_STATUS_T_Unknown_Message_Type 				= 0x00000004,
#define LDP_STATUS_Unknown_Message_Type					LDP_STATUS_T_Unknown_Message_Type
	LDP_STATUS_T_Bad_Message_Length 				= 0x00000005,
#define LDP_STATUS_Bad_Message_Length					LDP_STATUS_T_Bad_Message_Length
	LDP_STATUS_T_Unknown_TLV 					= 0x00000006,
#define LDP_STATUS_Unknown_TLV						LDP_STATUS_T_Unknown_TLV
	LDP_STATUS_T_Bad_TLV_Length 					= 0x00000007,
#define LDP_STATUS_Bad_TLV_Length					LDP_STATUS_T_Bad_TLV_Length
	LDP_STATUS_T_Malformed_TLV_Value 				= 0x00000008,
#define LDP_STATUS_Malformed_TLV_Value					LDP_STATUS_T_Malformed_TLV_Value
	LDP_STATUS_T_Hold_Timer_Expired 				= 0x00000009,
#define LDP_STATUS_Hold_Timer_Expired					LDP_STATUS_T_Hold_Timer_Expired
	LDP_STATUS_T_Shutdown 						= 0x0000000A,
#define LDP_STATUS_Shutdown						LDP_STATUS_T_Shutdown
	LDP_STATUS_T_Loop_Detected 					= 0x0000000B,
#define LDP_STATUS_Loop_Detected					LDP_STATUS_T_Loop_Detected
	LDP_STATUS_T_Unknown_FEC 					= 0x0000000C,
#define LDP_STATUS_Unknown_FEC
	LDP_STATUS_T_No_Route 						= 0x0000000D,
#define LDP_STATUS_No_Route
	LDP_STATUS_T_No_Label_Resources 				= 0x0000000E,
#define LDP_STATUS_No_Label_Resources
	LDP_STATUS_T_Label_Resources_Available 				= 0x0000000F,
#define LDP_STATUS_Label_Resources_Available
	LDP_STATUS_T_Rejected_No_Hello 					= 0x00000010,
#define LDP_STATUS_Rejected_No_Hello
	LDP_STATUS_T_Rejected_Advertisement_Mode 			= 0x00000011,
#define LDP_STATUS_Rejected_Advertisement_Mode
	LDP_STATUS_T_Rejected_Max_PDU_Length 				= 0x00000012,
#define LDP_STATUS_Rejected_Max_PDU_Length
	LDP_STATUS_T_Rejected_Label_Range 				= 0x00000013,
#define LDP_STATUS_Rejected_Label_Range
	LDP_STATUS_T_KeepAlive_Timer_Expired 				= 0x00000014,
#define LDP_STATUS_Keepalive_Timer_Expired
	LDP_STATUS_T_Label_Request_Aborted 				= 0x00000015,
#define LDP_STATUS_Label_Request_Aborted
	LDP_STATUS_T_Missing_Message_Parameters 			= 0x00000016,
#define LDP_STATUS_Missing_Message_Parameters
	LDP_STATUS_T_Unsupported_Address_Family 			= 0x00000017,
#define LDP_STATUS_Unsupported_Address_Family
	LDP_STATUS_T_Rejected_Bad_KeepAlive_Time 			= 0x00000018,
#define LDP_STATUS_Rejected_Bad_KeepAlive_Time
	LDP_STATUS_T_Internal_Error 					= 0x00000019,
#define LDP_STATUS_Internal_Error
	LDP_STATUS_T_No_LDP_Session 					= 0x0000001A,
#define LDP_STATUS_No_LDP_Session
	LDP_STATUS_T_Zero_FT_SeqNum 					= 0x0000001B,
#define LDP_STATUS_Zero_FT_SeqNum
	LDP_STATUS_T_Unexpected_TLV_Session_Not_FT 			= 0x0000001C,
#define LDP_STATUS_Unexpected_TLV_Session_Not_FT
	LDP_STATUS_T_Unexpected_TLV_Label_Not_FT 			= 0x0000001D,
#define LDP_STATUS_Unexpected_TLV_Label_Not_FT
	LDP_STATUS_T_Missing_FT_Protection_TLV 				= 0x0000001E,
#define LDP_STATUS_Missing_FT_Protection_TLV
	LDP_STATUS_T_FT_ACK_Sequence_Error 				= 0x0000001F,
#define LDP_STATUS_FT_ACK_Sequence_Error
	LDP_STATUS_T_Temporary_Shutdown 				= 0x00000020,
#define LDP_STATUS_Temporary_Shutdown
	LDP_STATUS_T_FT_Seq_Numbers_Exhausted 				= 0x00000021,
#define LDP_STATUS_Seq_Numbers_Exhausted
	LDP_STATUS_T_FT_Session_Parameters_Changed 			= 0x00000022,
#define LDP_STATUS_FT_Session_Parameters_Changed
	LDP_STATUS_T_Unexpected_FT_Cork_TLV 				= 0x00000023,
#define LDP_STATUS_Unexpected_FT_Cork_TLV
	LDP_STATUS_T_Illegal_C_Bit_1 					= 0x00000024,
#define LDP_STATUS_Illegal_C_Bit_1
	LDP_STATUS_T_Wrong_C_Bit_1 					= 0x00000025,
#define LDP_STATUS_Wrong_C_Bit_1
	LDP_STATUS_T_Incompatible_Bitrate 				= 0x00000026,
#define LDP_STATUS_Incompatible_Bitrate
	LDP_STATUS_T_CEP_TDM_Misconfiguration 				= 0x00000027,
#define LDP_STATUS_CEP_TDM_Misconfiguration
	LDP_STATUS_T_PW_Status 						= 0x00000028,
#define LDP_STATUS_PW_Status
	LDP_STATUS_T_Unassigned_Unrecognized_TAI 			= 0x00000029,
#define LDP_STATUS_Unassigned_Unrecognized_TAI
	LDP_STATUS_T_Generic_Misconfiguration_Error 			= 0x0000002A,
#define LDP_STATUS_Generic_Misconfiguration_Error
	LDP_STATUS_T_Label_Withdraw_PW_Status_Method_Unsupported 	= 0x0000002B,
#define LDP_STATUS_Label_Withdraw_PW_Status_Method_Unsupported
	LDP_STATUS_T_IP_Address_of_CE 					= 0x0000002C,
#define LDP_STATUS_IP_Address_of_CE
	LDP_STATUS_T_AC_Bound_to_Different_Remote_AC 			= 0x0000002D,
#define LDP_STATUS_AC_Bound_to_Different_Remote_AC
	LDP_STATUS_T_Unsupported_Capability 				= 0x0000002E,
#define LDP_STATUS_Unsupported_Capability
	LDP_STATUS_T_End_of_LIB 					= 0x0000002F,
#define LDP_STATUS_End_of_LIB
	LDP_STATUS_T_AC_Bound_to_Different_PE 				= 0x00000030,
#define LDP_STATUS_AC_Bound_to_Different_PE
	LDP_STATUS_T_Invalid_Topology_ID 				= 0x00000031,
#define LDP_STATUS_Invalid_Topology_ID
	LDP_STATUS_T_Transport_Connection_Mismatch 			= 0x00000032,
#define LDP_STATUS_Transport_Connection_Mismatch
	LDP_STATUS_T_Dual_Stack_Noncompliance 				= 0x00000033,
#define LDP_STATUS_Dual_Stack_Noncompliance
	LDP_STATUS_T_MRT_Capability_Negotiated_without_MT_Capability 	= 0x00000034,
#define LDP_STATUS_MRT_Capability_Negotiated_without_MT_Capability
	LDP_STATUS_T_VCCV_Type_Error 					= 0x00000035,
#define LDP_STATUS_VCCV_Type_Error
	LDP_STATUS_T_Bandwidth_Resources_Unavailable 			= 0x00000037,
#define LDP_STATUS_Bandwidth_Resources_Unavailable
	LDP_STATUS_T_Resources_Unavailable 				= 0x00000038,
#define LDP_STATUS_Resources_Unavailable
	LDP_STATUS_T_AII_Unreachable 					= 0x00000039,
#define LDP_STATUS_AII_Unreachable
	LDP_STATUS_T_PW_Loop_Detected 					= 0x0000003A,
#define LDP_STATUS_PW_Loop_Detected
	LDP_STATUS_T_Reject 						= 0x0000003B,
#define LDP_STATUS_Reject
	LDP_STATUS_T_C_Bit_or_S_Bit_Unknown 				= 0x0000003C,
#define LDP_STATUS_C_Bit_or_S_Bit_Unknown
	LDP_STATUS_T_MP_Status 						= 0x00000040,
#define LDP_STATUS_MP_Status
	LDP_STATUS_T_IP_Address_Type_Mismatch 				= 0x0000004A,
#define LDP_STATUS_IP_Address_Type_Mismatch
	LDP_STATUS_T_Wrong_IP_Address_Type 				= 0x0000004B,
#define LDP_STATUS_Wrong_IP_Address_Type
	LDP_STATUS_T_Rejected_Targeted_Application_Capability_Mismatch 	= 0x0000004C,
#define LDP_STATUS_Rejected_Targeted_Application_Capability_Mismatch
	LDP_STATUS_T_Unknown_ICCP_RG 					= 0x00010001,
#define LDP_STATUS_Unknown_ICCP_RG
	LDP_STATUS_T_ICCP_Connection_Count_Exceeded 			= 0x00010002,
#define LDP_STATUS_ICCP_Connection_Count_Exceeded
	LDP_STATUS_T_ICCP_Application_Connection_Count_Exceeded 	= 0x00010003,
#define LDP_STATUS_ICCP_Application_Connection_Count_Exceeded
	LDP_STATUS_T_ICCP_Application_not_in_RG 			= 0x00010004,
#define LDP_STATUS_ICCP_Application_not_in_RG
	LDP_STATUS_T_Incompatible_ICCP_Protocol_Version 		= 0x00010005,
#define LDP_STATUS_Incompatible_ICCP_Protocol_Version
	LDP_STATUS_T_ICCP_Rejected_Message 				= 0x00010006,
#define LDP_STATUS_ICCP_Rejected_Message
	LDP_STATUS_T_ICCP_Administratively_Disabled 			= 0x00010007,
#define LDP_STATUS_Administratively_Disabled
	LDP_STATUS_T_ICCP_RG_Removed 					= 0x00010010,
#define LDP_STATUS_ICCP_RG_Removed
	LDP_STATUS_T_ICCP_Application_Removed_from_RG 			= 0x00010011,
#define LDP_STATUS_ICCP_Application_Removed_from_RG
	LDP_STATUS_T_Unexpected_Diff_Serv_TLV 				= 0x01000001,
#define LDP_STATUS_Unexpected_Diff_Serv_TLV
	LDP_STATUS_T_Unsupported_PHB 					= 0x01000002,
#define LDP_STATUS_Unsupported_PHB
	LDP_STATUS_T_Invalid_EXP_to_PHB_Mapping 			= 0x01000003,
#define LDP_STATUS_Invalid_EXP_to_PHB_Mapping
	LDP_STATUS_T_Unsupported_PSC 					= 0x01000004,
#define LDP_STATUS_Unsupported_PSC
	LDP_STATUS_T_Per_LSP_Context_Allocation_Failure 		= 0x01000005,
#define LDP_STATUS_Per_LSP_Context_Allocation_Failure
	LDP_STATUS_T_Bad_Explicit_Routing_TLV_Error 			= 0x04000001,
#define LDP_STATUS_Bad_Explicit_Routing_TLV_Error
	LDP_STATUS_T_Bad_Strict_Node_Error 				= 0x04000002,
#define LDP_STATUS_Bad_Strict_Node_Error
	LDP_STATUS_T_Bad_Loose_Node_Error 				= 0x04000003,
#define LDP_STATUS_Bad_Loose_Node_Error
	LDP_STATUS_T_Bad_Initial_ER_Hop_Error				= 0x04000004,
#define LDP_STATUS_Bad_Initial_ER_Hop_Error
	LDP_STATUS_T_Resource_Unavailable 				= 0x04000005,
#define LDP_STATUS_Resource_Unavailable
	LDP_STATUS_T_Traffic_Parameters_Unavailable 			= 0x04000006,
#define LDP_STATUS_Traffic_Parameters_Unavailable
	LDP_STATUS_T_LSP_Preempted 					= 0x04000007,
#define LDP_STATUS_LSP_Preempted
	LDP_STATUS_T_Modify_Request_Unsupported 			= 0x04000008,
#define LDP_STATUS_Modify_Request_Unsupported
	LDP_STATUS_T_Invalid_SNP_ID 					= 0x04000009,
#define LDP_STATUS_Invalid_SNP_ID
	LDP_STATUS_T_Calling_Party_Busy 				= 0x0400000A,
#define LDP_STATUS_Calling_Party_Busy
	LDP_STATUS_T_Unavailable_SNP_ID 				= 0x0400000B,
#define LDP_STATUS_Unavailable_SNP_ID
	LDP_STATUS_T_Invalid_SNPP_ID 					= 0x0400000C,
#define LDP_STATUS_Invalid_SNPP_ID
	LDP_STATUS_T_Unavailable_SNPP_ID 				= 0x0400000D,
#define LDP_STATUS_Unavailable_SNPP_ID
	LDP_STATUS_T_Failed_to_Create_SNC 				= 0x0400000E,
#define LDP_STATUS_Failed_to_Create_SNC
	LDP_STATUS_T_Failed_to_Establish_LC 				= 0x0400000F,
#define LDP_STATUS_Failed_to_Establish_LC
	LDP_STATUS_T_Invalid_A_End_User_Name 				= 0x04000010,
#define LDP_STATUS_Invalid_A_End_User_Name
	LDP_STATUS_T_Invalid_Z_End_User_Name 				= 0x04000011,
#define LDP_STATUS_Invalid_Z_End_User_Name
	LDP_STATUS_T_Invalid_CoS 					= 0x04000012,
#define LDP_STATUS_Invalid_CoS
	LDP_STATUS_T_Unavailable_CoS 					= 0x04000013,
#define LDP_STATUS_Unavailable_CoS
	LDP_STATUS_T_Invalid_GoS 					= 0x04000014,
#define LDP_STATUS_Invalid_GoS
	LDP_STATUS_T_Unavailable_GoS 					= 0x04000015,
#define LDP_STATUS_Unavailable_GoS
	LDP_STATUS_T_Failed_Security_Check 				= 0x04000016,
#define LDP_STATUS_Failed_Security_Check
	LDP_STATUS_T_TimeOut 						= 0x04000017,
#define LDP_STATUS_TimeOut
	LDP_STATUS_T_Invalid_Call_Name 					= 0x04000018,
#define LDP_STATUS_Invalid_Call_Name
	LDP_STATUS_T_Failed_to_Release_SNC 				= 0x04000019,
#define LDP_STATUS_Failed_to_Release_SNC
	LDP_STATUS_T_Failed_to_Free_LC 					= 0x0400001A,
#define LDP_STATUS_Failed_to_Free_LC
	LDP_STATUS_T_Unknown_VPN_ID 					= 0x20000000,
#define LDP_STATUS_Unknown_VPN_ID
	LDP_STATUS_T_Illegal_C_Bit_2 					= 0x20000001,
#define LDP_STATUS_Illegal_C_Bit_2
	LDP_STATUS_T_Wrong_C_Bit_2 					= 0x20000002,
#define LDP_STATUS_Wrong_C_Bit_2
	LDP_STATUS_T_E_Tree_VLAN_Mapping_Unsupported 			= 0x20000003,
#define LDP_STATUS_E_Tree_VLAN_Mapping_Unsupported
	LDP_STATUS_T_Leaf_to_Leaf_PW_Released 				= 0x20000004,
#define LDP_STATUS_Leaf_to_Leaf_PW_Released
	__LDP_STATUS_T_MAX__
};

#define LDP_STATUS_MAX							(__LDP_STATUS_T_MAX__ - 1)

enum {
	LDP_MP_OVE_BASIC_TYPE_T_UNSPEC 					= 0,
#define LDP_MP_OVE_BASIC_TYPE_UNSPEC					LDP_MP_OVE_BASIC_TYPE_T_UNSPEC
	LDP_MP_OVE_BASIC_TYPE_T_Generic_LSP_Identifier 			= 1,
#define LDP_MP_OVE_BASIC_TYPE_Generic_LSP_Identifier			LDP_MP_OVE_BASIC_TYPE_T_Generic_LSP_Identifier
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Source_TLV 		= 3,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv4_Source_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Source_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Source_TLV 		= 4,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv6_Source_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Source_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Bidir_TLV 			= 5,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv4_Bidir_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Bidir_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Bidir_TLV 			= 6,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv6_Bidir_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Bidir_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Recursive_Opaque_Value 			= 7,
#define LDP_MP_OVE_BASIC_TYPE_Recursive_Opaque_Value			LDP_MP_OVE_BASIC_TYPE_T_Recursive_Opaque_Value
	LDP_MP_OVE_BASIC_TYPE_T_VPN_Recursive_Opaque_Value 		= 8,
#define LDP_MP_OVE_BASIC_TYPE_VPN_Recursive_Opaque_Value		LDP_MP_OVE_BASIC_TYPE_T_VPN_Recursive_Opaque_Value
	LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv4_Bidir_TLV 		= 9,
#define LDP_MP_OVE_BASIC_TYPE_Transit_VPNv4_Bidir_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv4_Bidir_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv6_Bidir_TLV 		= 10,
#define LDP_MP_OVE_BASIC_TYPE_Transit_VPNv6_Bidir_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv6_Bidir_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Shared_Tree_TLV 		= 11,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv4_Shared_Tree_TLV		LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv4_Shared_Tree_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Shared_Tree_TLV 		= 12,
#define LDP_MP_OVE_BASIC_TYPE_Transit_IPv6_Shared_Tree_TLV		LDP_MP_OVE_BASIC_TYPE_T_Transit_IPv6_Shared_Tree_TLV
	LDP_MP_OVE_BASIC_TYPE_T_L2VPN_MCAST_Application_TLV 		= 13,
#define LDP_MP_OVE_BASIC_TYPE_L2VPN_MCAST_Application_TLV		LDP_MP_OVE_BASIC_TYPE_T_L2VPN_MCAST_Application_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv4_Source_TLV 		= 250,
#define LDP_MP_OVE_BASIC_TYPE_Transit_VPNv4_Source_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv4_Source_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv6_Source_TLV 		= 251,
#define LDP_MP_OVE_BASIC_TYPE_Transit_VPNv6_Source_TLV			LDP_MP_OVE_BASIC_TYPE_T_Transit_VPNv6_Source_TLV
	LDP_MP_OVE_BASIC_TYPE_T_Extended_Type 				= 255,
#define LDP_MP_OVE_BASIC_TYPE_Extended_Type				LDP_MP_OVE_BASIC_TYPE_T_Extended_Type
	__LDP_MP_OVE_BASIC_TYPE_T_MAX__
};

#define LDP_MP_OVE_BASIC_TYPE_MAX					(__LDP_MP_OVE_BASIC_TYPE_T_MAX__ - 1)

enum {
	LDP_MP_SVE_TYPE_T_UNSPEC 					= 0,
#define LDP_MP_SVE_TYPE_UNSPEC						LDP_MP_SVE_TYPE_T_UNSPEC
	LDP_MP_SVE_TYPE_T_MBB_Status 					= 1,
#define LDP_MP_SVE_TYPE_MBB_Status					LDP_MP_SVE_TYPE_T_MBB_Status
	LDP_MP_SVE_TYPE_T_PLR_SVE 					= 2,
#define LDP_MP_SVE_TYPE_PLR_SVE						LDP_MP_SVE_TYPE_T_PLR_SVE
	LDP_MP_SVE_TYPE_T_Protected_Node_SVE 				= 3,
#define LDP_MP_SVE_TYPE_Protected_Node_SVE				LDP_MP_SVE_TYPE_T_Protected_Node_SVE
	__LDP_MP_SVE_TYPE_T_MAX__
};

#define LDP_MP_SVE_TYPE_MAX						(__LDP_MP_SVE_TYPE_T_MAX__ - 1)

enum {
	LDP_MAC_FLUSH_FLAG_F_CONTEXT					= (1 << 0),
#define LDP_MAC_FLUSH_FLAG_CONTEXT					LDP_MAC_FLUSH_FLAG_F_CONTEXT
	LDP_MAC_FLUSH_FLAG_F_NEGATIVE					= (1 << 1),
#define LDP_MAC_FLUSH_FLAG_NEGATIVE					LDP_MAC_FLUSH_FLAG_F_NEGATIVE
};

enum {
	LDP_TAID_T_UNSPEC 						= 0x0000,
#define LDP_TAID_UNSPEC							LDP_TAID_T_UNSPEC
	LDP_TAID_T_LDPv4_Tunneling 					= 0x0001,
#define LDP_TAID_LDPv4_Tunneling					LDP_TAID_T_LDPv4_Tunneling
	LDP_TAID_T_LDPv6_Tunneling 					= 0x0002,
#define LDP_TAID_LDPv6_Tunneling					LDP_TAID_T_LDPv6_Tunneling
	LDP_TAID_T_mLDP_Tunneling 					= 0x0003,
#define LDP_TAID_mLDP_Tunneling						LDP_TAID_T_mLDP_Tunneling
	LDP_TAID_T_LDPv4_Remote_LFA 					= 0x0004,
#define LDP_TAID_LDPv4_Remote_LFA					LDP_TAID_T_LDPv4_Remote_LFA
	LDP_TAID_T_LDPv6_Remote_LFA 					= 0x0005,
#define LDP_TAID_LDPv6_Remote_LFA					LDP_TAID_T_LDPv6_Remote_LFA
	LDP_TAID_T_LDP_FEC_128_PW 					= 0x0006,
#define LDP_TAID_LDP_FEC_128_PW						LDP_TAID_T_LDP_FEC_128_PW
	LDP_TAID_T_LDP_FEC_129_PW 					= 0x0007,
#define LDP_TAID_LDP_FED_129_PW						LDP_TAID_T_LDP_FEC_129_PW
	LDP_TAID_T_LDP_Session_Protection 				= 0x0008,
#define LDP_TAID_LDP_Session_Protection					LDP_TAID_T_LDP_Session_Protection
	LDP_TAID_T_LDP_ICCP 						= 0x0009,
#define LDP_TAID_LDP_ICCP						LDP_TAID_T_LDP_ICCP
	LDP_TAID_T_LDP_P2MP_PW 						= 0x000A,
#define LDP_TAID_LDP_P2MP_PW						LDP_TAID_T_LDP_P2MP_PW
	LDP_TAID_T_mLDP_Node_Protection 				= 0x000B,
#define LDP_TAID_mLDP_Node_Protection					LDP_TAID_T_mLDP_Node_Protection
	LDP_TAID_T_LDPv4_Intra_area_FECs 				= 0x000C,
#define LDP_TAID_LDPv4_Intra_area_FECs					LDP_TAID_T_LDPv4_Intra_area_FECs
	LDP_TAID_T_LDPv6_Intra_area_FECs 				= 0x000D,
#define LDP_TAID_LDPv6_Intra_area_FECs					LDP_TAID_T_LDPv6_Intra_area_FECs
	__LDP_TAID_T_MAX__
};

#define LDP_TAID_MAX							(__LDP_TAID_T_MAX__ - 1)
