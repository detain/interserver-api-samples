#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Quickserver_extraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Quickserver_extraInfoTables::Quickserver_extraInfoTables()
{
	//__init();
}

Quickserver_extraInfoTables::~Quickserver_extraInfoTables()
{
	//__cleanup();
}

void
Quickserver_extraInfoTables::__init()
{
	//ip_info = new QuickserverIpInfo();
	//addons = new QuickserverAddons();
}

void
Quickserver_extraInfoTables::__cleanup()
{
	//if(ip_info != NULL) {
	//
	//delete ip_info;
	//ip_info = NULL;
	//}
	//if(addons != NULL) {
	//
	//delete addons;
	//addons = NULL;
	//}
	//
}

void
Quickserver_extraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ip_infoKey = "ip_info";
	node = json_object_get_member(pJsonObject, ip_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverIpInfo")) {
			jsonToValue(&ip_info, node, "QuickserverIpInfo", "QuickserverIpInfo");
		} else {
			
			QuickserverIpInfo* obj = static_cast<QuickserverIpInfo*> (&ip_info);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *addonsKey = "addons";
	node = json_object_get_member(pJsonObject, addonsKey);
	if (node !=NULL) {
	

		if (isprimitive("QuickserverAddons")) {
			jsonToValue(&addons, node, "QuickserverAddons", "QuickserverAddons");
		} else {
			
			QuickserverAddons* obj = static_cast<QuickserverAddons*> (&addons);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Quickserver_extraInfoTables::Quickserver_extraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
Quickserver_extraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("QuickserverIpInfo")) {
		QuickserverIpInfo obj = getIpInfo();
		node = converttoJson(&obj, "QuickserverIpInfo", "");
	}
	else {
		
		QuickserverIpInfo obj = static_cast<QuickserverIpInfo> (getIpInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ip_infoKey = "ip_info";
	json_object_set_member(pJsonObject, ip_infoKey, node);
	if (isprimitive("QuickserverAddons")) {
		QuickserverAddons obj = getAddons();
		node = converttoJson(&obj, "QuickserverAddons", "");
	}
	else {
		
		QuickserverAddons obj = static_cast<QuickserverAddons> (getAddons());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *addonsKey = "addons";
	json_object_set_member(pJsonObject, addonsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

QuickserverIpInfo
Quickserver_extraInfoTables::getIpInfo()
{
	return ip_info;
}

void
Quickserver_extraInfoTables::setIpInfo(QuickserverIpInfo  ip_info)
{
	this->ip_info = ip_info;
}

QuickserverAddons
Quickserver_extraInfoTables::getAddons()
{
	return addons;
}

void
Quickserver_extraInfoTables::setAddons(QuickserverAddons  addons)
{
	this->addons = addons;
}


