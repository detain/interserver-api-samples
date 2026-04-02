#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerAsset.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerAsset::ServerAsset()
{
	//__init();
}

ServerAsset::~ServerAsset()
{
	//__cleanup();
}

void
ServerAsset::__init()
{
	//id = int(0);
	//order_id = std::string();
	//hostname = std::string();
	//status = std::string();
	//primary_ipv4 = std::string();
	//primary_ipv6 = std::string();
	//datacenter = std::string();
	//type_id = std::string();
	//asset_tag = std::string();
	//rack = std::string();
	//row = std::string();
	//col = std::string();
	//unit_start = std::string();
	//unit_end = std::string();
	//unit_sub = std::string();
	//ipmi_mac = std::string();
	//ipmi_ip = std::string();
	//ipmi_working = std::string();
	//company = std::string();
	//comments = std::string();
	//make = std::string();
	//model = std::string();
	//description = std::string();
	//customer_id = std::string();
	//external_id = std::string();
	//billing_status = std::string();
	//overdue = std::string();
	//asset_id = std::string();
	//asset_name = std::string();
	//rack_id = std::string();
	//rack_name = std::string();
	//rack_location = std::string();
	//rack_size = std::string();
	//rack_x = std::string();
	//rack_y = std::string();
	//new std::list()std::list> switchports;
	//new std::list()std::list> vlans;
	//new std::list()std::list> vlans6;
	//lease = new ServerLease();
	//mac = std::string();
	//ipmi_admin_username = std::string();
	//ipmi_admin_password = std::string();
	//ipmi_client_username = std::string();
	//ipmi_client_password = std::string();
	//ipmi_updated = std::string();
	//create_timestamp = std::string();
	//update_timestamp = std::string();
	//comment = std::string();
}

void
ServerAsset::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(order_id != NULL) {
	//
	//delete order_id;
	//order_id = NULL;
	//}
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(primary_ipv4 != NULL) {
	//
	//delete primary_ipv4;
	//primary_ipv4 = NULL;
	//}
	//if(primary_ipv6 != NULL) {
	//
	//delete primary_ipv6;
	//primary_ipv6 = NULL;
	//}
	//if(datacenter != NULL) {
	//
	//delete datacenter;
	//datacenter = NULL;
	//}
	//if(type_id != NULL) {
	//
	//delete type_id;
	//type_id = NULL;
	//}
	//if(asset_tag != NULL) {
	//
	//delete asset_tag;
	//asset_tag = NULL;
	//}
	//if(rack != NULL) {
	//
	//delete rack;
	//rack = NULL;
	//}
	//if(row != NULL) {
	//
	//delete row;
	//row = NULL;
	//}
	//if(col != NULL) {
	//
	//delete col;
	//col = NULL;
	//}
	//if(unit_start != NULL) {
	//
	//delete unit_start;
	//unit_start = NULL;
	//}
	//if(unit_end != NULL) {
	//
	//delete unit_end;
	//unit_end = NULL;
	//}
	//if(unit_sub != NULL) {
	//
	//delete unit_sub;
	//unit_sub = NULL;
	//}
	//if(ipmi_mac != NULL) {
	//
	//delete ipmi_mac;
	//ipmi_mac = NULL;
	//}
	//if(ipmi_ip != NULL) {
	//
	//delete ipmi_ip;
	//ipmi_ip = NULL;
	//}
	//if(ipmi_working != NULL) {
	//
	//delete ipmi_working;
	//ipmi_working = NULL;
	//}
	//if(company != NULL) {
	//
	//delete company;
	//company = NULL;
	//}
	//if(comments != NULL) {
	//
	//delete comments;
	//comments = NULL;
	//}
	//if(make != NULL) {
	//
	//delete make;
	//make = NULL;
	//}
	//if(model != NULL) {
	//
	//delete model;
	//model = NULL;
	//}
	//if(description != NULL) {
	//
	//delete description;
	//description = NULL;
	//}
	//if(customer_id != NULL) {
	//
	//delete customer_id;
	//customer_id = NULL;
	//}
	//if(external_id != NULL) {
	//
	//delete external_id;
	//external_id = NULL;
	//}
	//if(billing_status != NULL) {
	//
	//delete billing_status;
	//billing_status = NULL;
	//}
	//if(overdue != NULL) {
	//
	//delete overdue;
	//overdue = NULL;
	//}
	//if(asset_id != NULL) {
	//
	//delete asset_id;
	//asset_id = NULL;
	//}
	//if(asset_name != NULL) {
	//
	//delete asset_name;
	//asset_name = NULL;
	//}
	//if(rack_id != NULL) {
	//
	//delete rack_id;
	//rack_id = NULL;
	//}
	//if(rack_name != NULL) {
	//
	//delete rack_name;
	//rack_name = NULL;
	//}
	//if(rack_location != NULL) {
	//
	//delete rack_location;
	//rack_location = NULL;
	//}
	//if(rack_size != NULL) {
	//
	//delete rack_size;
	//rack_size = NULL;
	//}
	//if(rack_x != NULL) {
	//
	//delete rack_x;
	//rack_x = NULL;
	//}
	//if(rack_y != NULL) {
	//
	//delete rack_y;
	//rack_y = NULL;
	//}
	//if(switchports != NULL) {
	//switchports.RemoveAll(true);
	//delete switchports;
	//switchports = NULL;
	//}
	//if(vlans != NULL) {
	//vlans.RemoveAll(true);
	//delete vlans;
	//vlans = NULL;
	//}
	//if(vlans6 != NULL) {
	//vlans6.RemoveAll(true);
	//delete vlans6;
	//vlans6 = NULL;
	//}
	//if(lease != NULL) {
	//
	//delete lease;
	//lease = NULL;
	//}
	//if(mac != NULL) {
	//
	//delete mac;
	//mac = NULL;
	//}
	//if(ipmi_admin_username != NULL) {
	//
	//delete ipmi_admin_username;
	//ipmi_admin_username = NULL;
	//}
	//if(ipmi_admin_password != NULL) {
	//
	//delete ipmi_admin_password;
	//ipmi_admin_password = NULL;
	//}
	//if(ipmi_client_username != NULL) {
	//
	//delete ipmi_client_username;
	//ipmi_client_username = NULL;
	//}
	//if(ipmi_client_password != NULL) {
	//
	//delete ipmi_client_password;
	//ipmi_client_password = NULL;
	//}
	//if(ipmi_updated != NULL) {
	//
	//delete ipmi_updated;
	//ipmi_updated = NULL;
	//}
	//if(create_timestamp != NULL) {
	//
	//delete create_timestamp;
	//create_timestamp = NULL;
	//}
	//if(update_timestamp != NULL) {
	//
	//delete update_timestamp;
	//update_timestamp = NULL;
	//}
	//if(comment != NULL) {
	//
	//delete comment;
	//comment = NULL;
	//}
	//
}

void
ServerAsset::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *order_idKey = "order_id";
	node = json_object_get_member(pJsonObject, order_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&order_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hostnameKey = "hostname";
	node = json_object_get_member(pJsonObject, hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *primary_ipv4Key = "primary_ipv4";
	node = json_object_get_member(pJsonObject, primary_ipv4Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_ipv4, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *primary_ipv6Key = "primary_ipv6";
	node = json_object_get_member(pJsonObject, primary_ipv6Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&primary_ipv6, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *datacenterKey = "datacenter";
	node = json_object_get_member(pJsonObject, datacenterKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&datacenter, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *type_idKey = "type_id";
	node = json_object_get_member(pJsonObject, type_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *asset_tagKey = "asset_tag";
	node = json_object_get_member(pJsonObject, asset_tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&asset_tag, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rackKey = "rack";
	node = json_object_get_member(pJsonObject, rackKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rowKey = "row";
	node = json_object_get_member(pJsonObject, rowKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&row, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *colKey = "col";
	node = json_object_get_member(pJsonObject, colKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&col, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unit_startKey = "unit_start";
	node = json_object_get_member(pJsonObject, unit_startKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unit_start, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unit_endKey = "unit_end";
	node = json_object_get_member(pJsonObject, unit_endKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unit_end, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *unit_subKey = "unit_sub";
	node = json_object_get_member(pJsonObject, unit_subKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unit_sub, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_macKey = "ipmi_mac";
	node = json_object_get_member(pJsonObject, ipmi_macKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_mac, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_ipKey = "ipmi_ip";
	node = json_object_get_member(pJsonObject, ipmi_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_workingKey = "ipmi_working";
	node = json_object_get_member(pJsonObject, ipmi_workingKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_working, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *companyKey = "company";
	node = json_object_get_member(pJsonObject, companyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&company, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *commentsKey = "comments";
	node = json_object_get_member(pJsonObject, commentsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&comments, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *makeKey = "make";
	node = json_object_get_member(pJsonObject, makeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&make, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *modelKey = "model";
	node = json_object_get_member(pJsonObject, modelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&model, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *descriptionKey = "description";
	node = json_object_get_member(pJsonObject, descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *customer_idKey = "customer_id";
	node = json_object_get_member(pJsonObject, customer_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&customer_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *external_idKey = "external_id";
	node = json_object_get_member(pJsonObject, external_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&external_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *billing_statusKey = "billing_status";
	node = json_object_get_member(pJsonObject, billing_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&billing_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *overdueKey = "overdue";
	node = json_object_get_member(pJsonObject, overdueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&overdue, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *asset_idKey = "asset_id";
	node = json_object_get_member(pJsonObject, asset_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&asset_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *asset_nameKey = "asset_name";
	node = json_object_get_member(pJsonObject, asset_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&asset_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_idKey = "rack_id";
	node = json_object_get_member(pJsonObject, rack_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_nameKey = "rack_name";
	node = json_object_get_member(pJsonObject, rack_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_locationKey = "rack_location";
	node = json_object_get_member(pJsonObject, rack_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_sizeKey = "rack_size";
	node = json_object_get_member(pJsonObject, rack_sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_size, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_xKey = "rack_x";
	node = json_object_get_member(pJsonObject, rack_xKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_x, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rack_yKey = "rack_y";
	node = json_object_get_member(pJsonObject, rack_yKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rack_y, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *switchportsKey = "switchports";
	node = json_object_get_member(pJsonObject, switchportsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<int> new_list;
			int inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("int")) {
					jsonToValue(&inst, temp_json, "int", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			switchports = new_list;
		}
		
	}
	const gchar *vlansKey = "vlans";
	node = json_object_get_member(pJsonObject, vlansKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			vlans = new_list;
		}
		
	}
	const gchar *vlans6Key = "vlans6";
	node = json_object_get_member(pJsonObject, vlans6Key);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			vlans6 = new_list;
		}
		
	}
	const gchar *leaseKey = "lease";
	node = json_object_get_member(pJsonObject, leaseKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerLease")) {
			jsonToValue(&lease, node, "ServerLease", "ServerLease");
		} else {
			
			ServerLease* obj = static_cast<ServerLease*> (&lease);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *macKey = "mac";
	node = json_object_get_member(pJsonObject, macKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mac, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_admin_usernameKey = "ipmi_admin_username";
	node = json_object_get_member(pJsonObject, ipmi_admin_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_admin_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_admin_passwordKey = "ipmi_admin_password";
	node = json_object_get_member(pJsonObject, ipmi_admin_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_admin_password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_client_usernameKey = "ipmi_client_username";
	node = json_object_get_member(pJsonObject, ipmi_client_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_client_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_client_passwordKey = "ipmi_client_password";
	node = json_object_get_member(pJsonObject, ipmi_client_passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_client_password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ipmi_updatedKey = "ipmi_updated";
	node = json_object_get_member(pJsonObject, ipmi_updatedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ipmi_updated, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *create_timestampKey = "create_timestamp";
	node = json_object_get_member(pJsonObject, create_timestampKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&create_timestamp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *update_timestampKey = "update_timestamp";
	node = json_object_get_member(pJsonObject, update_timestampKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&update_timestamp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *commentKey = "comment";
	node = json_object_get_member(pJsonObject, commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&comment, node, "std::string", "");
		} else {
			
		}
	}
}

ServerAsset::ServerAsset(char* json)
{
	this->fromJson(json);
}

char*
ServerAsset::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOrderId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *order_idKey = "order_id";
	json_object_set_member(pJsonObject, order_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimaryIpv4();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_ipv4Key = "primary_ipv4";
	json_object_set_member(pJsonObject, primary_ipv4Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getPrimaryIpv6();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *primary_ipv6Key = "primary_ipv6";
	json_object_set_member(pJsonObject, primary_ipv6Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getDatacenter();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *datacenterKey = "datacenter";
	json_object_set_member(pJsonObject, datacenterKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTypeId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *type_idKey = "type_id";
	json_object_set_member(pJsonObject, type_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAssetTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *asset_tagKey = "asset_tag";
	json_object_set_member(pJsonObject, asset_tagKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRack();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rackKey = "rack";
	json_object_set_member(pJsonObject, rackKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRow();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rowKey = "row";
	json_object_set_member(pJsonObject, rowKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *colKey = "col";
	json_object_set_member(pJsonObject, colKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUnitStart();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unit_startKey = "unit_start";
	json_object_set_member(pJsonObject, unit_startKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUnitEnd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unit_endKey = "unit_end";
	json_object_set_member(pJsonObject, unit_endKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUnitSub();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unit_subKey = "unit_sub";
	json_object_set_member(pJsonObject, unit_subKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiMac();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_macKey = "ipmi_mac";
	json_object_set_member(pJsonObject, ipmi_macKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_ipKey = "ipmi_ip";
	json_object_set_member(pJsonObject, ipmi_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiWorking();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_workingKey = "ipmi_working";
	json_object_set_member(pJsonObject, ipmi_workingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCompany();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *companyKey = "company";
	json_object_set_member(pJsonObject, companyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getComments();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *commentsKey = "comments";
	json_object_set_member(pJsonObject, commentsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMake();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *makeKey = "make";
	json_object_set_member(pJsonObject, makeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getModel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *modelKey = "model";
	json_object_set_member(pJsonObject, modelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descriptionKey = "description";
	json_object_set_member(pJsonObject, descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustomerId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *customer_idKey = "customer_id";
	json_object_set_member(pJsonObject, customer_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getExternalId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *external_idKey = "external_id";
	json_object_set_member(pJsonObject, external_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBillingStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *billing_statusKey = "billing_status";
	json_object_set_member(pJsonObject, billing_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOverdue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *overdueKey = "overdue";
	json_object_set_member(pJsonObject, overdueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAssetId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *asset_idKey = "asset_id";
	json_object_set_member(pJsonObject, asset_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAssetName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *asset_nameKey = "asset_name";
	json_object_set_member(pJsonObject, asset_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_idKey = "rack_id";
	json_object_set_member(pJsonObject, rack_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_nameKey = "rack_name";
	json_object_set_member(pJsonObject, rack_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_locationKey = "rack_location";
	json_object_set_member(pJsonObject, rack_locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackSize();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_sizeKey = "rack_size";
	json_object_set_member(pJsonObject, rack_sizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackX();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_xKey = "rack_x";
	json_object_set_member(pJsonObject, rack_xKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRackY();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rack_yKey = "rack_y";
	json_object_set_member(pJsonObject, rack_yKey, node);
	if (isprimitive("int")) {
		list<int> new_list = static_cast<list <int> > (getSwitchports());
		node = converttoJson(&new_list, "int", "array");
	} else {
		node = json_node_alloc();
		list<int> new_list = static_cast<list <int> > (getSwitchports());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *switchportsKey = "switchports";
	json_object_set_member(pJsonObject, switchportsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getVlans());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getVlans());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *vlansKey = "vlans";
	json_object_set_member(pJsonObject, vlansKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getVlans6());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getVlans6());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *vlans6Key = "vlans6";
	json_object_set_member(pJsonObject, vlans6Key, node);
	if (isprimitive("ServerLease")) {
		ServerLease obj = getLease();
		node = converttoJson(&obj, "ServerLease", "");
	}
	else {
		
		ServerLease obj = static_cast<ServerLease> (getLease());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *leaseKey = "lease";
	json_object_set_member(pJsonObject, leaseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMac();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *macKey = "mac";
	json_object_set_member(pJsonObject, macKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiAdminUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_admin_usernameKey = "ipmi_admin_username";
	json_object_set_member(pJsonObject, ipmi_admin_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiAdminPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_admin_passwordKey = "ipmi_admin_password";
	json_object_set_member(pJsonObject, ipmi_admin_passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiClientUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_client_usernameKey = "ipmi_client_username";
	json_object_set_member(pJsonObject, ipmi_client_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiClientPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_client_passwordKey = "ipmi_client_password";
	json_object_set_member(pJsonObject, ipmi_client_passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIpmiUpdated();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipmi_updatedKey = "ipmi_updated";
	json_object_set_member(pJsonObject, ipmi_updatedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreateTimestamp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *create_timestampKey = "create_timestamp";
	json_object_set_member(pJsonObject, create_timestampKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUpdateTimestamp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *update_timestampKey = "update_timestamp";
	json_object_set_member(pJsonObject, update_timestampKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *commentKey = "comment";
	json_object_set_member(pJsonObject, commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServerAsset::getId()
{
	return id;
}

void
ServerAsset::setId(int  id)
{
	this->id = id;
}

std::string
ServerAsset::getOrderId()
{
	return order_id;
}

void
ServerAsset::setOrderId(std::string  order_id)
{
	this->order_id = order_id;
}

std::string
ServerAsset::getHostname()
{
	return hostname;
}

void
ServerAsset::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}

std::string
ServerAsset::getStatus()
{
	return status;
}

void
ServerAsset::setStatus(std::string  status)
{
	this->status = status;
}

std::string
ServerAsset::getPrimaryIpv4()
{
	return primary_ipv4;
}

void
ServerAsset::setPrimaryIpv4(std::string  primary_ipv4)
{
	this->primary_ipv4 = primary_ipv4;
}

std::string
ServerAsset::getPrimaryIpv6()
{
	return primary_ipv6;
}

void
ServerAsset::setPrimaryIpv6(std::string  primary_ipv6)
{
	this->primary_ipv6 = primary_ipv6;
}

std::string
ServerAsset::getDatacenter()
{
	return datacenter;
}

void
ServerAsset::setDatacenter(std::string  datacenter)
{
	this->datacenter = datacenter;
}

std::string
ServerAsset::getTypeId()
{
	return type_id;
}

void
ServerAsset::setTypeId(std::string  type_id)
{
	this->type_id = type_id;
}

std::string
ServerAsset::getAssetTag()
{
	return asset_tag;
}

void
ServerAsset::setAssetTag(std::string  asset_tag)
{
	this->asset_tag = asset_tag;
}

std::string
ServerAsset::getRack()
{
	return rack;
}

void
ServerAsset::setRack(std::string  rack)
{
	this->rack = rack;
}

std::string
ServerAsset::getRow()
{
	return row;
}

void
ServerAsset::setRow(std::string  row)
{
	this->row = row;
}

std::string
ServerAsset::getCol()
{
	return col;
}

void
ServerAsset::setCol(std::string  col)
{
	this->col = col;
}

std::string
ServerAsset::getUnitStart()
{
	return unit_start;
}

void
ServerAsset::setUnitStart(std::string  unit_start)
{
	this->unit_start = unit_start;
}

std::string
ServerAsset::getUnitEnd()
{
	return unit_end;
}

void
ServerAsset::setUnitEnd(std::string  unit_end)
{
	this->unit_end = unit_end;
}

std::string
ServerAsset::getUnitSub()
{
	return unit_sub;
}

void
ServerAsset::setUnitSub(std::string  unit_sub)
{
	this->unit_sub = unit_sub;
}

std::string
ServerAsset::getIpmiMac()
{
	return ipmi_mac;
}

void
ServerAsset::setIpmiMac(std::string  ipmi_mac)
{
	this->ipmi_mac = ipmi_mac;
}

std::string
ServerAsset::getIpmiIp()
{
	return ipmi_ip;
}

void
ServerAsset::setIpmiIp(std::string  ipmi_ip)
{
	this->ipmi_ip = ipmi_ip;
}

std::string
ServerAsset::getIpmiWorking()
{
	return ipmi_working;
}

void
ServerAsset::setIpmiWorking(std::string  ipmi_working)
{
	this->ipmi_working = ipmi_working;
}

std::string
ServerAsset::getCompany()
{
	return company;
}

void
ServerAsset::setCompany(std::string  company)
{
	this->company = company;
}

std::string
ServerAsset::getComments()
{
	return comments;
}

void
ServerAsset::setComments(std::string  comments)
{
	this->comments = comments;
}

std::string
ServerAsset::getMake()
{
	return make;
}

void
ServerAsset::setMake(std::string  make)
{
	this->make = make;
}

std::string
ServerAsset::getModel()
{
	return model;
}

void
ServerAsset::setModel(std::string  model)
{
	this->model = model;
}

std::string
ServerAsset::getDescription()
{
	return description;
}

void
ServerAsset::setDescription(std::string  description)
{
	this->description = description;
}

std::string
ServerAsset::getCustomerId()
{
	return customer_id;
}

void
ServerAsset::setCustomerId(std::string  customer_id)
{
	this->customer_id = customer_id;
}

std::string
ServerAsset::getExternalId()
{
	return external_id;
}

void
ServerAsset::setExternalId(std::string  external_id)
{
	this->external_id = external_id;
}

std::string
ServerAsset::getBillingStatus()
{
	return billing_status;
}

void
ServerAsset::setBillingStatus(std::string  billing_status)
{
	this->billing_status = billing_status;
}

std::string
ServerAsset::getOverdue()
{
	return overdue;
}

void
ServerAsset::setOverdue(std::string  overdue)
{
	this->overdue = overdue;
}

std::string
ServerAsset::getAssetId()
{
	return asset_id;
}

void
ServerAsset::setAssetId(std::string  asset_id)
{
	this->asset_id = asset_id;
}

std::string
ServerAsset::getAssetName()
{
	return asset_name;
}

void
ServerAsset::setAssetName(std::string  asset_name)
{
	this->asset_name = asset_name;
}

std::string
ServerAsset::getRackId()
{
	return rack_id;
}

void
ServerAsset::setRackId(std::string  rack_id)
{
	this->rack_id = rack_id;
}

std::string
ServerAsset::getRackName()
{
	return rack_name;
}

void
ServerAsset::setRackName(std::string  rack_name)
{
	this->rack_name = rack_name;
}

std::string
ServerAsset::getRackLocation()
{
	return rack_location;
}

void
ServerAsset::setRackLocation(std::string  rack_location)
{
	this->rack_location = rack_location;
}

std::string
ServerAsset::getRackSize()
{
	return rack_size;
}

void
ServerAsset::setRackSize(std::string  rack_size)
{
	this->rack_size = rack_size;
}

std::string
ServerAsset::getRackX()
{
	return rack_x;
}

void
ServerAsset::setRackX(std::string  rack_x)
{
	this->rack_x = rack_x;
}

std::string
ServerAsset::getRackY()
{
	return rack_y;
}

void
ServerAsset::setRackY(std::string  rack_y)
{
	this->rack_y = rack_y;
}

std::list<int>
ServerAsset::getSwitchports()
{
	return switchports;
}

void
ServerAsset::setSwitchports(std::list <int> switchports)
{
	this->switchports = switchports;
}

std::list<std::string>
ServerAsset::getVlans()
{
	return vlans;
}

void
ServerAsset::setVlans(std::list <std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerAsset::getVlans6()
{
	return vlans6;
}

void
ServerAsset::setVlans6(std::list <std::string> vlans6)
{
	this->vlans6 = vlans6;
}

ServerLease
ServerAsset::getLease()
{
	return lease;
}

void
ServerAsset::setLease(ServerLease  lease)
{
	this->lease = lease;
}

std::string
ServerAsset::getMac()
{
	return mac;
}

void
ServerAsset::setMac(std::string  mac)
{
	this->mac = mac;
}

std::string
ServerAsset::getIpmiAdminUsername()
{
	return ipmi_admin_username;
}

void
ServerAsset::setIpmiAdminUsername(std::string  ipmi_admin_username)
{
	this->ipmi_admin_username = ipmi_admin_username;
}

std::string
ServerAsset::getIpmiAdminPassword()
{
	return ipmi_admin_password;
}

void
ServerAsset::setIpmiAdminPassword(std::string  ipmi_admin_password)
{
	this->ipmi_admin_password = ipmi_admin_password;
}

std::string
ServerAsset::getIpmiClientUsername()
{
	return ipmi_client_username;
}

void
ServerAsset::setIpmiClientUsername(std::string  ipmi_client_username)
{
	this->ipmi_client_username = ipmi_client_username;
}

std::string
ServerAsset::getIpmiClientPassword()
{
	return ipmi_client_password;
}

void
ServerAsset::setIpmiClientPassword(std::string  ipmi_client_password)
{
	this->ipmi_client_password = ipmi_client_password;
}

std::string
ServerAsset::getIpmiUpdated()
{
	return ipmi_updated;
}

void
ServerAsset::setIpmiUpdated(std::string  ipmi_updated)
{
	this->ipmi_updated = ipmi_updated;
}

std::string
ServerAsset::getCreateTimestamp()
{
	return create_timestamp;
}

void
ServerAsset::setCreateTimestamp(std::string  create_timestamp)
{
	this->create_timestamp = create_timestamp;
}

std::string
ServerAsset::getUpdateTimestamp()
{
	return update_timestamp;
}

void
ServerAsset::setUpdateTimestamp(std::string  update_timestamp)
{
	this->update_timestamp = update_timestamp;
}

std::string
ServerAsset::getComment()
{
	return comment;
}

void
ServerAsset::setComment(std::string  comment)
{
	this->comment = comment;
}


