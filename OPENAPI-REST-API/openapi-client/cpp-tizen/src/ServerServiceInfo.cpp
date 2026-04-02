#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerServiceInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerServiceInfo::ServerServiceInfo()
{
	//__init();
}

ServerServiceInfo::~ServerServiceInfo()
{
	//__cleanup();
}

void
ServerServiceInfo::__init()
{
	//server_id = std::string();
	//server_hostname = std::string();
	//server_custid = std::string();
	//server_type = std::string();
	//server_currency = std::string();
	//server_order_date = std::string();
	//server_invoice = std::string();
	//server_coupon = std::string();
	//server_status = std::string();
	//server_root = std::string();
	//server_dedicated_tag = std::string();
	//server_custom_tag = std::string();
	//server_comment = std::string();
	//server_initial_bill = std::string();
	//server_hardware = std::string();
	//server_ips = std::string();
	//server_monthly_bill = std::string();
	//server_setup = std::string();
	//server_discount = std::string();
	//server_rep = std::string();
	//server_date = std::string();
	//server_total_cost = std::string();
	//server_location = std::string();
	//server_hardware_ordered = std::string();
	//server_billed = std::string();
	//server_welcome_email = std::string();
	//server_dedicated_cpu = std::string();
	//server_dedicated_memory = std::string();
	//server_dedicated_hd1 = std::string();
	//server_dedicated_hd2 = std::string();
	//server_dedicated_bandwidth = std::string();
	//server_dedicated_ips = std::string();
	//server_dedicated_os = std::string();
	//server_dedicated_cp = std::string();
	//server_dedicated_raid = std::string();
	//server_extra = std::string();
}

void
ServerServiceInfo::__cleanup()
{
	//if(server_id != NULL) {
	//
	//delete server_id;
	//server_id = NULL;
	//}
	//if(server_hostname != NULL) {
	//
	//delete server_hostname;
	//server_hostname = NULL;
	//}
	//if(server_custid != NULL) {
	//
	//delete server_custid;
	//server_custid = NULL;
	//}
	//if(server_type != NULL) {
	//
	//delete server_type;
	//server_type = NULL;
	//}
	//if(server_currency != NULL) {
	//
	//delete server_currency;
	//server_currency = NULL;
	//}
	//if(server_order_date != NULL) {
	//
	//delete server_order_date;
	//server_order_date = NULL;
	//}
	//if(server_invoice != NULL) {
	//
	//delete server_invoice;
	//server_invoice = NULL;
	//}
	//if(server_coupon != NULL) {
	//
	//delete server_coupon;
	//server_coupon = NULL;
	//}
	//if(server_status != NULL) {
	//
	//delete server_status;
	//server_status = NULL;
	//}
	//if(server_root != NULL) {
	//
	//delete server_root;
	//server_root = NULL;
	//}
	//if(server_dedicated_tag != NULL) {
	//
	//delete server_dedicated_tag;
	//server_dedicated_tag = NULL;
	//}
	//if(server_custom_tag != NULL) {
	//
	//delete server_custom_tag;
	//server_custom_tag = NULL;
	//}
	//if(server_comment != NULL) {
	//
	//delete server_comment;
	//server_comment = NULL;
	//}
	//if(server_initial_bill != NULL) {
	//
	//delete server_initial_bill;
	//server_initial_bill = NULL;
	//}
	//if(server_hardware != NULL) {
	//
	//delete server_hardware;
	//server_hardware = NULL;
	//}
	//if(server_ips != NULL) {
	//
	//delete server_ips;
	//server_ips = NULL;
	//}
	//if(server_monthly_bill != NULL) {
	//
	//delete server_monthly_bill;
	//server_monthly_bill = NULL;
	//}
	//if(server_setup != NULL) {
	//
	//delete server_setup;
	//server_setup = NULL;
	//}
	//if(server_discount != NULL) {
	//
	//delete server_discount;
	//server_discount = NULL;
	//}
	//if(server_rep != NULL) {
	//
	//delete server_rep;
	//server_rep = NULL;
	//}
	//if(server_date != NULL) {
	//
	//delete server_date;
	//server_date = NULL;
	//}
	//if(server_total_cost != NULL) {
	//
	//delete server_total_cost;
	//server_total_cost = NULL;
	//}
	//if(server_location != NULL) {
	//
	//delete server_location;
	//server_location = NULL;
	//}
	//if(server_hardware_ordered != NULL) {
	//
	//delete server_hardware_ordered;
	//server_hardware_ordered = NULL;
	//}
	//if(server_billed != NULL) {
	//
	//delete server_billed;
	//server_billed = NULL;
	//}
	//if(server_welcome_email != NULL) {
	//
	//delete server_welcome_email;
	//server_welcome_email = NULL;
	//}
	//if(server_dedicated_cpu != NULL) {
	//
	//delete server_dedicated_cpu;
	//server_dedicated_cpu = NULL;
	//}
	//if(server_dedicated_memory != NULL) {
	//
	//delete server_dedicated_memory;
	//server_dedicated_memory = NULL;
	//}
	//if(server_dedicated_hd1 != NULL) {
	//
	//delete server_dedicated_hd1;
	//server_dedicated_hd1 = NULL;
	//}
	//if(server_dedicated_hd2 != NULL) {
	//
	//delete server_dedicated_hd2;
	//server_dedicated_hd2 = NULL;
	//}
	//if(server_dedicated_bandwidth != NULL) {
	//
	//delete server_dedicated_bandwidth;
	//server_dedicated_bandwidth = NULL;
	//}
	//if(server_dedicated_ips != NULL) {
	//
	//delete server_dedicated_ips;
	//server_dedicated_ips = NULL;
	//}
	//if(server_dedicated_os != NULL) {
	//
	//delete server_dedicated_os;
	//server_dedicated_os = NULL;
	//}
	//if(server_dedicated_cp != NULL) {
	//
	//delete server_dedicated_cp;
	//server_dedicated_cp = NULL;
	//}
	//if(server_dedicated_raid != NULL) {
	//
	//delete server_dedicated_raid;
	//server_dedicated_raid = NULL;
	//}
	//if(server_extra != NULL) {
	//
	//delete server_extra;
	//server_extra = NULL;
	//}
	//
}

void
ServerServiceInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *server_idKey = "server_id";
	node = json_object_get_member(pJsonObject, server_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_hostnameKey = "server_hostname";
	node = json_object_get_member(pJsonObject, server_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_custidKey = "server_custid";
	node = json_object_get_member(pJsonObject, server_custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_typeKey = "server_type";
	node = json_object_get_member(pJsonObject, server_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_currencyKey = "server_currency";
	node = json_object_get_member(pJsonObject, server_currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_order_dateKey = "server_order_date";
	node = json_object_get_member(pJsonObject, server_order_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_order_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_invoiceKey = "server_invoice";
	node = json_object_get_member(pJsonObject, server_invoiceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_invoice, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_couponKey = "server_coupon";
	node = json_object_get_member(pJsonObject, server_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_statusKey = "server_status";
	node = json_object_get_member(pJsonObject, server_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_rootKey = "server_root";
	node = json_object_get_member(pJsonObject, server_rootKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_root, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_tagKey = "server_dedicated_tag";
	node = json_object_get_member(pJsonObject, server_dedicated_tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_tag, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_custom_tagKey = "server_custom_tag";
	node = json_object_get_member(pJsonObject, server_custom_tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_custom_tag, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_commentKey = "server_comment";
	node = json_object_get_member(pJsonObject, server_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_comment, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_initial_billKey = "server_initial_bill";
	node = json_object_get_member(pJsonObject, server_initial_billKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_initial_bill, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_hardwareKey = "server_hardware";
	node = json_object_get_member(pJsonObject, server_hardwareKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_hardware, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_ipsKey = "server_ips";
	node = json_object_get_member(pJsonObject, server_ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_ips, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_monthly_billKey = "server_monthly_bill";
	node = json_object_get_member(pJsonObject, server_monthly_billKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_monthly_bill, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_setupKey = "server_setup";
	node = json_object_get_member(pJsonObject, server_setupKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_setup, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_discountKey = "server_discount";
	node = json_object_get_member(pJsonObject, server_discountKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_discount, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_repKey = "server_rep";
	node = json_object_get_member(pJsonObject, server_repKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_rep, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dateKey = "server_date";
	node = json_object_get_member(pJsonObject, server_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_total_costKey = "server_total_cost";
	node = json_object_get_member(pJsonObject, server_total_costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_total_cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_locationKey = "server_location";
	node = json_object_get_member(pJsonObject, server_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_hardware_orderedKey = "server_hardware_ordered";
	node = json_object_get_member(pJsonObject, server_hardware_orderedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_hardware_ordered, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_billedKey = "server_billed";
	node = json_object_get_member(pJsonObject, server_billedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_billed, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_welcome_emailKey = "server_welcome_email";
	node = json_object_get_member(pJsonObject, server_welcome_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_welcome_email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_cpuKey = "server_dedicated_cpu";
	node = json_object_get_member(pJsonObject, server_dedicated_cpuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_cpu, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_memoryKey = "server_dedicated_memory";
	node = json_object_get_member(pJsonObject, server_dedicated_memoryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_memory, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_hd1Key = "server_dedicated_hd1";
	node = json_object_get_member(pJsonObject, server_dedicated_hd1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_hd1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_hd2Key = "server_dedicated_hd2";
	node = json_object_get_member(pJsonObject, server_dedicated_hd2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_hd2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_bandwidthKey = "server_dedicated_bandwidth";
	node = json_object_get_member(pJsonObject, server_dedicated_bandwidthKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_bandwidth, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_ipsKey = "server_dedicated_ips";
	node = json_object_get_member(pJsonObject, server_dedicated_ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_ips, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_osKey = "server_dedicated_os";
	node = json_object_get_member(pJsonObject, server_dedicated_osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_cpKey = "server_dedicated_cp";
	node = json_object_get_member(pJsonObject, server_dedicated_cpKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_cp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_dedicated_raidKey = "server_dedicated_raid";
	node = json_object_get_member(pJsonObject, server_dedicated_raidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_dedicated_raid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *server_extraKey = "server_extra";
	node = json_object_get_member(pJsonObject, server_extraKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&server_extra, node, "std::string", "");
		} else {
			
		}
	}
}

ServerServiceInfo::ServerServiceInfo(char* json)
{
	this->fromJson(json);
}

char*
ServerServiceInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_idKey = "server_id";
	json_object_set_member(pJsonObject, server_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_hostnameKey = "server_hostname";
	json_object_set_member(pJsonObject, server_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_custidKey = "server_custid";
	json_object_set_member(pJsonObject, server_custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_typeKey = "server_type";
	json_object_set_member(pJsonObject, server_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_currencyKey = "server_currency";
	json_object_set_member(pJsonObject, server_currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerOrderDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_order_dateKey = "server_order_date";
	json_object_set_member(pJsonObject, server_order_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerInvoice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_invoiceKey = "server_invoice";
	json_object_set_member(pJsonObject, server_invoiceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_couponKey = "server_coupon";
	json_object_set_member(pJsonObject, server_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_statusKey = "server_status";
	json_object_set_member(pJsonObject, server_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerRoot();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_rootKey = "server_root";
	json_object_set_member(pJsonObject, server_rootKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_tagKey = "server_dedicated_tag";
	json_object_set_member(pJsonObject, server_dedicated_tagKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerCustomTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_custom_tagKey = "server_custom_tag";
	json_object_set_member(pJsonObject, server_custom_tagKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_commentKey = "server_comment";
	json_object_set_member(pJsonObject, server_commentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerInitialBill();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_initial_billKey = "server_initial_bill";
	json_object_set_member(pJsonObject, server_initial_billKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerHardware();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_hardwareKey = "server_hardware";
	json_object_set_member(pJsonObject, server_hardwareKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerIps();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_ipsKey = "server_ips";
	json_object_set_member(pJsonObject, server_ipsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerMonthlyBill();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_monthly_billKey = "server_monthly_bill";
	json_object_set_member(pJsonObject, server_monthly_billKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerSetup();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_setupKey = "server_setup";
	json_object_set_member(pJsonObject, server_setupKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDiscount();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_discountKey = "server_discount";
	json_object_set_member(pJsonObject, server_discountKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerRep();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_repKey = "server_rep";
	json_object_set_member(pJsonObject, server_repKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dateKey = "server_date";
	json_object_set_member(pJsonObject, server_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerTotalCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_total_costKey = "server_total_cost";
	json_object_set_member(pJsonObject, server_total_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_locationKey = "server_location";
	json_object_set_member(pJsonObject, server_locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerHardwareOrdered();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_hardware_orderedKey = "server_hardware_ordered";
	json_object_set_member(pJsonObject, server_hardware_orderedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerBilled();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_billedKey = "server_billed";
	json_object_set_member(pJsonObject, server_billedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerWelcomeEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_welcome_emailKey = "server_welcome_email";
	json_object_set_member(pJsonObject, server_welcome_emailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedCpu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_cpuKey = "server_dedicated_cpu";
	json_object_set_member(pJsonObject, server_dedicated_cpuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedMemory();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_memoryKey = "server_dedicated_memory";
	json_object_set_member(pJsonObject, server_dedicated_memoryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedHd1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_hd1Key = "server_dedicated_hd1";
	json_object_set_member(pJsonObject, server_dedicated_hd1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedHd2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_hd2Key = "server_dedicated_hd2";
	json_object_set_member(pJsonObject, server_dedicated_hd2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedBandwidth();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_bandwidthKey = "server_dedicated_bandwidth";
	json_object_set_member(pJsonObject, server_dedicated_bandwidthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedIps();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_ipsKey = "server_dedicated_ips";
	json_object_set_member(pJsonObject, server_dedicated_ipsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_osKey = "server_dedicated_os";
	json_object_set_member(pJsonObject, server_dedicated_osKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedCp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_cpKey = "server_dedicated_cp";
	json_object_set_member(pJsonObject, server_dedicated_cpKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerDedicatedRaid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_dedicated_raidKey = "server_dedicated_raid";
	json_object_set_member(pJsonObject, server_dedicated_raidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServerExtra();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *server_extraKey = "server_extra";
	json_object_set_member(pJsonObject, server_extraKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerServiceInfo::getServerId()
{
	return server_id;
}

void
ServerServiceInfo::setServerId(std::string  server_id)
{
	this->server_id = server_id;
}

std::string
ServerServiceInfo::getServerHostname()
{
	return server_hostname;
}

void
ServerServiceInfo::setServerHostname(std::string  server_hostname)
{
	this->server_hostname = server_hostname;
}

std::string
ServerServiceInfo::getServerCustid()
{
	return server_custid;
}

void
ServerServiceInfo::setServerCustid(std::string  server_custid)
{
	this->server_custid = server_custid;
}

std::string
ServerServiceInfo::getServerType()
{
	return server_type;
}

void
ServerServiceInfo::setServerType(std::string  server_type)
{
	this->server_type = server_type;
}

std::string
ServerServiceInfo::getServerCurrency()
{
	return server_currency;
}

void
ServerServiceInfo::setServerCurrency(std::string  server_currency)
{
	this->server_currency = server_currency;
}

std::string
ServerServiceInfo::getServerOrderDate()
{
	return server_order_date;
}

void
ServerServiceInfo::setServerOrderDate(std::string  server_order_date)
{
	this->server_order_date = server_order_date;
}

std::string
ServerServiceInfo::getServerInvoice()
{
	return server_invoice;
}

void
ServerServiceInfo::setServerInvoice(std::string  server_invoice)
{
	this->server_invoice = server_invoice;
}

std::string
ServerServiceInfo::getServerCoupon()
{
	return server_coupon;
}

void
ServerServiceInfo::setServerCoupon(std::string  server_coupon)
{
	this->server_coupon = server_coupon;
}

std::string
ServerServiceInfo::getServerStatus()
{
	return server_status;
}

void
ServerServiceInfo::setServerStatus(std::string  server_status)
{
	this->server_status = server_status;
}

std::string
ServerServiceInfo::getServerRoot()
{
	return server_root;
}

void
ServerServiceInfo::setServerRoot(std::string  server_root)
{
	this->server_root = server_root;
}

std::string
ServerServiceInfo::getServerDedicatedTag()
{
	return server_dedicated_tag;
}

void
ServerServiceInfo::setServerDedicatedTag(std::string  server_dedicated_tag)
{
	this->server_dedicated_tag = server_dedicated_tag;
}

std::string
ServerServiceInfo::getServerCustomTag()
{
	return server_custom_tag;
}

void
ServerServiceInfo::setServerCustomTag(std::string  server_custom_tag)
{
	this->server_custom_tag = server_custom_tag;
}

std::string
ServerServiceInfo::getServerComment()
{
	return server_comment;
}

void
ServerServiceInfo::setServerComment(std::string  server_comment)
{
	this->server_comment = server_comment;
}

std::string
ServerServiceInfo::getServerInitialBill()
{
	return server_initial_bill;
}

void
ServerServiceInfo::setServerInitialBill(std::string  server_initial_bill)
{
	this->server_initial_bill = server_initial_bill;
}

std::string
ServerServiceInfo::getServerHardware()
{
	return server_hardware;
}

void
ServerServiceInfo::setServerHardware(std::string  server_hardware)
{
	this->server_hardware = server_hardware;
}

std::string
ServerServiceInfo::getServerIps()
{
	return server_ips;
}

void
ServerServiceInfo::setServerIps(std::string  server_ips)
{
	this->server_ips = server_ips;
}

std::string
ServerServiceInfo::getServerMonthlyBill()
{
	return server_monthly_bill;
}

void
ServerServiceInfo::setServerMonthlyBill(std::string  server_monthly_bill)
{
	this->server_monthly_bill = server_monthly_bill;
}

std::string
ServerServiceInfo::getServerSetup()
{
	return server_setup;
}

void
ServerServiceInfo::setServerSetup(std::string  server_setup)
{
	this->server_setup = server_setup;
}

std::string
ServerServiceInfo::getServerDiscount()
{
	return server_discount;
}

void
ServerServiceInfo::setServerDiscount(std::string  server_discount)
{
	this->server_discount = server_discount;
}

std::string
ServerServiceInfo::getServerRep()
{
	return server_rep;
}

void
ServerServiceInfo::setServerRep(std::string  server_rep)
{
	this->server_rep = server_rep;
}

std::string
ServerServiceInfo::getServerDate()
{
	return server_date;
}

void
ServerServiceInfo::setServerDate(std::string  server_date)
{
	this->server_date = server_date;
}

std::string
ServerServiceInfo::getServerTotalCost()
{
	return server_total_cost;
}

void
ServerServiceInfo::setServerTotalCost(std::string  server_total_cost)
{
	this->server_total_cost = server_total_cost;
}

std::string
ServerServiceInfo::getServerLocation()
{
	return server_location;
}

void
ServerServiceInfo::setServerLocation(std::string  server_location)
{
	this->server_location = server_location;
}

std::string
ServerServiceInfo::getServerHardwareOrdered()
{
	return server_hardware_ordered;
}

void
ServerServiceInfo::setServerHardwareOrdered(std::string  server_hardware_ordered)
{
	this->server_hardware_ordered = server_hardware_ordered;
}

std::string
ServerServiceInfo::getServerBilled()
{
	return server_billed;
}

void
ServerServiceInfo::setServerBilled(std::string  server_billed)
{
	this->server_billed = server_billed;
}

std::string
ServerServiceInfo::getServerWelcomeEmail()
{
	return server_welcome_email;
}

void
ServerServiceInfo::setServerWelcomeEmail(std::string  server_welcome_email)
{
	this->server_welcome_email = server_welcome_email;
}

std::string
ServerServiceInfo::getServerDedicatedCpu()
{
	return server_dedicated_cpu;
}

void
ServerServiceInfo::setServerDedicatedCpu(std::string  server_dedicated_cpu)
{
	this->server_dedicated_cpu = server_dedicated_cpu;
}

std::string
ServerServiceInfo::getServerDedicatedMemory()
{
	return server_dedicated_memory;
}

void
ServerServiceInfo::setServerDedicatedMemory(std::string  server_dedicated_memory)
{
	this->server_dedicated_memory = server_dedicated_memory;
}

std::string
ServerServiceInfo::getServerDedicatedHd1()
{
	return server_dedicated_hd1;
}

void
ServerServiceInfo::setServerDedicatedHd1(std::string  server_dedicated_hd1)
{
	this->server_dedicated_hd1 = server_dedicated_hd1;
}

std::string
ServerServiceInfo::getServerDedicatedHd2()
{
	return server_dedicated_hd2;
}

void
ServerServiceInfo::setServerDedicatedHd2(std::string  server_dedicated_hd2)
{
	this->server_dedicated_hd2 = server_dedicated_hd2;
}

std::string
ServerServiceInfo::getServerDedicatedBandwidth()
{
	return server_dedicated_bandwidth;
}

void
ServerServiceInfo::setServerDedicatedBandwidth(std::string  server_dedicated_bandwidth)
{
	this->server_dedicated_bandwidth = server_dedicated_bandwidth;
}

std::string
ServerServiceInfo::getServerDedicatedIps()
{
	return server_dedicated_ips;
}

void
ServerServiceInfo::setServerDedicatedIps(std::string  server_dedicated_ips)
{
	this->server_dedicated_ips = server_dedicated_ips;
}

std::string
ServerServiceInfo::getServerDedicatedOs()
{
	return server_dedicated_os;
}

void
ServerServiceInfo::setServerDedicatedOs(std::string  server_dedicated_os)
{
	this->server_dedicated_os = server_dedicated_os;
}

std::string
ServerServiceInfo::getServerDedicatedCp()
{
	return server_dedicated_cp;
}

void
ServerServiceInfo::setServerDedicatedCp(std::string  server_dedicated_cp)
{
	this->server_dedicated_cp = server_dedicated_cp;
}

std::string
ServerServiceInfo::getServerDedicatedRaid()
{
	return server_dedicated_raid;
}

void
ServerServiceInfo::setServerDedicatedRaid(std::string  server_dedicated_raid)
{
	this->server_dedicated_raid = server_dedicated_raid;
}

std::string
ServerServiceInfo::getServerExtra()
{
	return server_extra;
}

void
ServerServiceInfo::setServerExtra(std::string  server_extra)
{
	this->server_extra = server_extra;
}


