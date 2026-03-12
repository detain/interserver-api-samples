#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsServiceAddons.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsServiceAddons::VpsServiceAddons()
{
	//__init();
}

VpsServiceAddons::~VpsServiceAddons()
{
	//__cleanup();
}

void
VpsServiceAddons::__init()
{
	//has_cpanel = bool(false);
	//has_directadmin = bool(false);
	//has_fantastico = bool(false);
	//has_softaculous = bool(false);
	//has_hdspace = bool(false);
	//dedicated_ip = bool(false);
	//new std::list()std::list> extra_ips;
	//new std::list()std::list> extra_ips6;
	//new std::list()std::list> unpaid_ips;
	//new std::list()std::list> ips;
	//new std::list()std::list> ips6;
	//cpanel_id = int(0);
	//cost = int(0);
	//new std::list()std::list> ids;
	//new std::list()std::list> rdata;
}

void
VpsServiceAddons::__cleanup()
{
	//if(has_cpanel != NULL) {
	//
	//delete has_cpanel;
	//has_cpanel = NULL;
	//}
	//if(has_directadmin != NULL) {
	//
	//delete has_directadmin;
	//has_directadmin = NULL;
	//}
	//if(has_fantastico != NULL) {
	//
	//delete has_fantastico;
	//has_fantastico = NULL;
	//}
	//if(has_softaculous != NULL) {
	//
	//delete has_softaculous;
	//has_softaculous = NULL;
	//}
	//if(has_hdspace != NULL) {
	//
	//delete has_hdspace;
	//has_hdspace = NULL;
	//}
	//if(dedicated_ip != NULL) {
	//
	//delete dedicated_ip;
	//dedicated_ip = NULL;
	//}
	//if(extra_ips != NULL) {
	//extra_ips.RemoveAll(true);
	//delete extra_ips;
	//extra_ips = NULL;
	//}
	//if(extra_ips6 != NULL) {
	//extra_ips6.RemoveAll(true);
	//delete extra_ips6;
	//extra_ips6 = NULL;
	//}
	//if(unpaid_ips != NULL) {
	//unpaid_ips.RemoveAll(true);
	//delete unpaid_ips;
	//unpaid_ips = NULL;
	//}
	//if(ips != NULL) {
	//ips.RemoveAll(true);
	//delete ips;
	//ips = NULL;
	//}
	//if(ips6 != NULL) {
	//ips6.RemoveAll(true);
	//delete ips6;
	//ips6 = NULL;
	//}
	//if(cpanel_id != NULL) {
	//
	//delete cpanel_id;
	//cpanel_id = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(ids != NULL) {
	//ids.RemoveAll(true);
	//delete ids;
	//ids = NULL;
	//}
	//if(rdata != NULL) {
	//rdata.RemoveAll(true);
	//delete rdata;
	//rdata = NULL;
	//}
	//
}

void
VpsServiceAddons::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *has_cpanelKey = "has_cpanel";
	node = json_object_get_member(pJsonObject, has_cpanelKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&has_cpanel, node, "bool", "");
		} else {
			
		}
	}
	const gchar *has_directadminKey = "has_directadmin";
	node = json_object_get_member(pJsonObject, has_directadminKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&has_directadmin, node, "bool", "");
		} else {
			
		}
	}
	const gchar *has_fantasticoKey = "has_fantastico";
	node = json_object_get_member(pJsonObject, has_fantasticoKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&has_fantastico, node, "bool", "");
		} else {
			
		}
	}
	const gchar *has_softaculousKey = "has_softaculous";
	node = json_object_get_member(pJsonObject, has_softaculousKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&has_softaculous, node, "bool", "");
		} else {
			
		}
	}
	const gchar *has_hdspaceKey = "has_hdspace";
	node = json_object_get_member(pJsonObject, has_hdspaceKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&has_hdspace, node, "bool", "");
		} else {
			
		}
	}
	const gchar *dedicated_ipKey = "dedicated_ip";
	node = json_object_get_member(pJsonObject, dedicated_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&dedicated_ip, node, "bool", "");
		} else {
			
		}
	}
	const gchar *extra_ipsKey = "extra_ips";
	node = json_object_get_member(pJsonObject, extra_ipsKey);
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
			extra_ips = new_list;
		}
		
	}
	const gchar *extra_ips6Key = "extra_ips6";
	node = json_object_get_member(pJsonObject, extra_ips6Key);
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
			extra_ips6 = new_list;
		}
		
	}
	const gchar *unpaid_ipsKey = "unpaid_ips";
	node = json_object_get_member(pJsonObject, unpaid_ipsKey);
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
			unpaid_ips = new_list;
		}
		
	}
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
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
			ips = new_list;
		}
		
	}
	const gchar *ips6Key = "ips6";
	node = json_object_get_member(pJsonObject, ips6Key);
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
			ips6 = new_list;
		}
		
	}
	const gchar *cpanel_idKey = "cpanel_id";
	node = json_object_get_member(pJsonObject, cpanel_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cpanel_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *idsKey = "ids";
	node = json_object_get_member(pJsonObject, idsKey);
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
			ids = new_list;
		}
		
	}
	const gchar *rdataKey = "rdata";
	node = json_object_get_member(pJsonObject, rdataKey);
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
			rdata = new_list;
		}
		
	}
}

VpsServiceAddons::VpsServiceAddons(char* json)
{
	this->fromJson(json);
}

char*
VpsServiceAddons::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getHasCpanel();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *has_cpanelKey = "has_cpanel";
	json_object_set_member(pJsonObject, has_cpanelKey, node);
	if (isprimitive("bool")) {
		bool obj = getHasDirectadmin();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *has_directadminKey = "has_directadmin";
	json_object_set_member(pJsonObject, has_directadminKey, node);
	if (isprimitive("bool")) {
		bool obj = getHasFantastico();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *has_fantasticoKey = "has_fantastico";
	json_object_set_member(pJsonObject, has_fantasticoKey, node);
	if (isprimitive("bool")) {
		bool obj = getHasSoftaculous();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *has_softaculousKey = "has_softaculous";
	json_object_set_member(pJsonObject, has_softaculousKey, node);
	if (isprimitive("bool")) {
		bool obj = getHasHdspace();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *has_hdspaceKey = "has_hdspace";
	json_object_set_member(pJsonObject, has_hdspaceKey, node);
	if (isprimitive("bool")) {
		bool obj = getDedicatedIp();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *dedicated_ipKey = "dedicated_ip";
	json_object_set_member(pJsonObject, dedicated_ipKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getExtraIps());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getExtraIps());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *extra_ipsKey = "extra_ips";
	json_object_set_member(pJsonObject, extra_ipsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getExtraIps6());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getExtraIps6());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *extra_ips6Key = "extra_ips6";
	json_object_set_member(pJsonObject, extra_ips6Key, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getUnpaidIps());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getUnpaidIps());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *unpaid_ipsKey = "unpaid_ips";
	json_object_set_member(pJsonObject, unpaid_ipsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getIps());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getIps());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getIps6());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getIps6());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *ips6Key = "ips6";
	json_object_set_member(pJsonObject, ips6Key, node);
	if (isprimitive("int")) {
		int obj = getCpanelId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *cpanel_idKey = "cpanel_id";
	json_object_set_member(pJsonObject, cpanel_idKey, node);
	if (isprimitive("int")) {
		int obj = getCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getIds());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getIds());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *idsKey = "ids";
	json_object_set_member(pJsonObject, idsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getRdata());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getRdata());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *rdataKey = "rdata";
	json_object_set_member(pJsonObject, rdataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
VpsServiceAddons::getHasCpanel()
{
	return has_cpanel;
}

void
VpsServiceAddons::setHasCpanel(bool  has_cpanel)
{
	this->has_cpanel = has_cpanel;
}

bool
VpsServiceAddons::getHasDirectadmin()
{
	return has_directadmin;
}

void
VpsServiceAddons::setHasDirectadmin(bool  has_directadmin)
{
	this->has_directadmin = has_directadmin;
}

bool
VpsServiceAddons::getHasFantastico()
{
	return has_fantastico;
}

void
VpsServiceAddons::setHasFantastico(bool  has_fantastico)
{
	this->has_fantastico = has_fantastico;
}

bool
VpsServiceAddons::getHasSoftaculous()
{
	return has_softaculous;
}

void
VpsServiceAddons::setHasSoftaculous(bool  has_softaculous)
{
	this->has_softaculous = has_softaculous;
}

bool
VpsServiceAddons::getHasHdspace()
{
	return has_hdspace;
}

void
VpsServiceAddons::setHasHdspace(bool  has_hdspace)
{
	this->has_hdspace = has_hdspace;
}

bool
VpsServiceAddons::getDedicatedIp()
{
	return dedicated_ip;
}

void
VpsServiceAddons::setDedicatedIp(bool  dedicated_ip)
{
	this->dedicated_ip = dedicated_ip;
}

std::list<std::string>
VpsServiceAddons::getExtraIps()
{
	return extra_ips;
}

void
VpsServiceAddons::setExtraIps(std::list <std::string> extra_ips)
{
	this->extra_ips = extra_ips;
}

std::list<std::string>
VpsServiceAddons::getExtraIps6()
{
	return extra_ips6;
}

void
VpsServiceAddons::setExtraIps6(std::list <std::string> extra_ips6)
{
	this->extra_ips6 = extra_ips6;
}

std::list<std::string>
VpsServiceAddons::getUnpaidIps()
{
	return unpaid_ips;
}

void
VpsServiceAddons::setUnpaidIps(std::list <std::string> unpaid_ips)
{
	this->unpaid_ips = unpaid_ips;
}

std::list<std::string>
VpsServiceAddons::getIps()
{
	return ips;
}

void
VpsServiceAddons::setIps(std::list <std::string> ips)
{
	this->ips = ips;
}

std::list<std::string>
VpsServiceAddons::getIps6()
{
	return ips6;
}

void
VpsServiceAddons::setIps6(std::list <std::string> ips6)
{
	this->ips6 = ips6;
}

int
VpsServiceAddons::getCpanelId()
{
	return cpanel_id;
}

void
VpsServiceAddons::setCpanelId(int  cpanel_id)
{
	this->cpanel_id = cpanel_id;
}

int
VpsServiceAddons::getCost()
{
	return cost;
}

void
VpsServiceAddons::setCost(int  cost)
{
	this->cost = cost;
}

std::list<std::string>
VpsServiceAddons::getIds()
{
	return ids;
}

void
VpsServiceAddons::setIds(std::list <std::string> ids)
{
	this->ids = ids;
}

std::list<std::string>
VpsServiceAddons::getRdata()
{
	return rdata;
}

void
VpsServiceAddons::setRdata(std::list <std::string> rdata)
{
	this->rdata = rdata;
}


