#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteServiceMaster.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteServiceMaster::WebsiteServiceMaster()
{
	//__init();
}

WebsiteServiceMaster::~WebsiteServiceMaster()
{
	//__cleanup();
}

void
WebsiteServiceMaster::__init()
{
	//website_id = std::string();
	//website_name = std::string();
	//website_ip = std::string();
	//website_type = std::string();
	//website_available = std::string();
	//website_hdsize = std::string();
	//website_hdfree = std::string();
	//website_load = std::string();
	//website_last_update = std::string();
	//website_max_sites = std::string();
	//website_order = std::string();
	//website_partitions = std::string();
	//website_dns1 = std::string();
	//website_dns2 = std::string();
}

void
WebsiteServiceMaster::__cleanup()
{
	//if(website_id != NULL) {
	//
	//delete website_id;
	//website_id = NULL;
	//}
	//if(website_name != NULL) {
	//
	//delete website_name;
	//website_name = NULL;
	//}
	//if(website_ip != NULL) {
	//
	//delete website_ip;
	//website_ip = NULL;
	//}
	//if(website_type != NULL) {
	//
	//delete website_type;
	//website_type = NULL;
	//}
	//if(website_available != NULL) {
	//
	//delete website_available;
	//website_available = NULL;
	//}
	//if(website_hdsize != NULL) {
	//
	//delete website_hdsize;
	//website_hdsize = NULL;
	//}
	//if(website_hdfree != NULL) {
	//
	//delete website_hdfree;
	//website_hdfree = NULL;
	//}
	//if(website_load != NULL) {
	//
	//delete website_load;
	//website_load = NULL;
	//}
	//if(website_last_update != NULL) {
	//
	//delete website_last_update;
	//website_last_update = NULL;
	//}
	//if(website_max_sites != NULL) {
	//
	//delete website_max_sites;
	//website_max_sites = NULL;
	//}
	//if(website_order != NULL) {
	//
	//delete website_order;
	//website_order = NULL;
	//}
	//if(website_partitions != NULL) {
	//
	//delete website_partitions;
	//website_partitions = NULL;
	//}
	//if(website_dns1 != NULL) {
	//
	//delete website_dns1;
	//website_dns1 = NULL;
	//}
	//if(website_dns2 != NULL) {
	//
	//delete website_dns2;
	//website_dns2 = NULL;
	//}
	//
}

void
WebsiteServiceMaster::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *website_idKey = "website_id";
	node = json_object_get_member(pJsonObject, website_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_nameKey = "website_name";
	node = json_object_get_member(pJsonObject, website_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_ipKey = "website_ip";
	node = json_object_get_member(pJsonObject, website_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_typeKey = "website_type";
	node = json_object_get_member(pJsonObject, website_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_availableKey = "website_available";
	node = json_object_get_member(pJsonObject, website_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_available, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_hdsizeKey = "website_hdsize";
	node = json_object_get_member(pJsonObject, website_hdsizeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_hdsize, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_hdfreeKey = "website_hdfree";
	node = json_object_get_member(pJsonObject, website_hdfreeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_hdfree, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_loadKey = "website_load";
	node = json_object_get_member(pJsonObject, website_loadKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_load, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_last_updateKey = "website_last_update";
	node = json_object_get_member(pJsonObject, website_last_updateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_last_update, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_max_sitesKey = "website_max_sites";
	node = json_object_get_member(pJsonObject, website_max_sitesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_max_sites, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_orderKey = "website_order";
	node = json_object_get_member(pJsonObject, website_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_order, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_partitionsKey = "website_partitions";
	node = json_object_get_member(pJsonObject, website_partitionsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_partitions, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_dns1Key = "website_dns1";
	node = json_object_get_member(pJsonObject, website_dns1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_dns1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_dns2Key = "website_dns2";
	node = json_object_get_member(pJsonObject, website_dns2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_dns2, node, "std::string", "");
		} else {
			
		}
	}
}

WebsiteServiceMaster::WebsiteServiceMaster(char* json)
{
	this->fromJson(json);
}

char*
WebsiteServiceMaster::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_idKey = "website_id";
	json_object_set_member(pJsonObject, website_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_nameKey = "website_name";
	json_object_set_member(pJsonObject, website_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_ipKey = "website_ip";
	json_object_set_member(pJsonObject, website_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_typeKey = "website_type";
	json_object_set_member(pJsonObject, website_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteAvailable();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_availableKey = "website_available";
	json_object_set_member(pJsonObject, website_availableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteHdsize();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_hdsizeKey = "website_hdsize";
	json_object_set_member(pJsonObject, website_hdsizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteHdfree();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_hdfreeKey = "website_hdfree";
	json_object_set_member(pJsonObject, website_hdfreeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteLoad();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_loadKey = "website_load";
	json_object_set_member(pJsonObject, website_loadKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteLastUpdate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_last_updateKey = "website_last_update";
	json_object_set_member(pJsonObject, website_last_updateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteMaxSites();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_max_sitesKey = "website_max_sites";
	json_object_set_member(pJsonObject, website_max_sitesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteOrder();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_orderKey = "website_order";
	json_object_set_member(pJsonObject, website_orderKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsitePartitions();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_partitionsKey = "website_partitions";
	json_object_set_member(pJsonObject, website_partitionsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteDns1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_dns1Key = "website_dns1";
	json_object_set_member(pJsonObject, website_dns1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteDns2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_dns2Key = "website_dns2";
	json_object_set_member(pJsonObject, website_dns2Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteServiceMaster::getWebsiteId()
{
	return website_id;
}

void
WebsiteServiceMaster::setWebsiteId(std::string  website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteServiceMaster::getWebsiteName()
{
	return website_name;
}

void
WebsiteServiceMaster::setWebsiteName(std::string  website_name)
{
	this->website_name = website_name;
}

std::string
WebsiteServiceMaster::getWebsiteIp()
{
	return website_ip;
}

void
WebsiteServiceMaster::setWebsiteIp(std::string  website_ip)
{
	this->website_ip = website_ip;
}

std::string
WebsiteServiceMaster::getWebsiteType()
{
	return website_type;
}

void
WebsiteServiceMaster::setWebsiteType(std::string  website_type)
{
	this->website_type = website_type;
}

std::string
WebsiteServiceMaster::getWebsiteAvailable()
{
	return website_available;
}

void
WebsiteServiceMaster::setWebsiteAvailable(std::string  website_available)
{
	this->website_available = website_available;
}

std::string
WebsiteServiceMaster::getWebsiteHdsize()
{
	return website_hdsize;
}

void
WebsiteServiceMaster::setWebsiteHdsize(std::string  website_hdsize)
{
	this->website_hdsize = website_hdsize;
}

std::string
WebsiteServiceMaster::getWebsiteHdfree()
{
	return website_hdfree;
}

void
WebsiteServiceMaster::setWebsiteHdfree(std::string  website_hdfree)
{
	this->website_hdfree = website_hdfree;
}

std::string
WebsiteServiceMaster::getWebsiteLoad()
{
	return website_load;
}

void
WebsiteServiceMaster::setWebsiteLoad(std::string  website_load)
{
	this->website_load = website_load;
}

std::string
WebsiteServiceMaster::getWebsiteLastUpdate()
{
	return website_last_update;
}

void
WebsiteServiceMaster::setWebsiteLastUpdate(std::string  website_last_update)
{
	this->website_last_update = website_last_update;
}

std::string
WebsiteServiceMaster::getWebsiteMaxSites()
{
	return website_max_sites;
}

void
WebsiteServiceMaster::setWebsiteMaxSites(std::string  website_max_sites)
{
	this->website_max_sites = website_max_sites;
}

std::string
WebsiteServiceMaster::getWebsiteOrder()
{
	return website_order;
}

void
WebsiteServiceMaster::setWebsiteOrder(std::string  website_order)
{
	this->website_order = website_order;
}

std::string
WebsiteServiceMaster::getWebsitePartitions()
{
	return website_partitions;
}

void
WebsiteServiceMaster::setWebsitePartitions(std::string  website_partitions)
{
	this->website_partitions = website_partitions;
}

std::string
WebsiteServiceMaster::getWebsiteDns1()
{
	return website_dns1;
}

void
WebsiteServiceMaster::setWebsiteDns1(std::string  website_dns1)
{
	this->website_dns1 = website_dns1;
}

std::string
WebsiteServiceMaster::getWebsiteDns2()
{
	return website_dns2;
}

void
WebsiteServiceMaster::setWebsiteDns2(std::string  website_dns2)
{
	this->website_dns2 = website_dns2;
}


