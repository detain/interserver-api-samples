#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "License_extraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

License_extraInfoTables::License_extraInfoTables()
{
	//__init();
}

License_extraInfoTables::~License_extraInfoTables()
{
	//__cleanup();
}

void
License_extraInfoTables::__init()
{
	//ip_info = new LicenseIpInfo();
}

void
License_extraInfoTables::__cleanup()
{
	//if(ip_info != NULL) {
	//
	//delete ip_info;
	//ip_info = NULL;
	//}
	//
}

void
License_extraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ip_infoKey = "ip_info";
	node = json_object_get_member(pJsonObject, ip_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("LicenseIpInfo")) {
			jsonToValue(&ip_info, node, "LicenseIpInfo", "LicenseIpInfo");
		} else {
			
			LicenseIpInfo* obj = static_cast<LicenseIpInfo*> (&ip_info);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

License_extraInfoTables::License_extraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
License_extraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("LicenseIpInfo")) {
		LicenseIpInfo obj = getIpInfo();
		node = converttoJson(&obj, "LicenseIpInfo", "");
	}
	else {
		
		LicenseIpInfo obj = static_cast<LicenseIpInfo> (getIpInfo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ip_infoKey = "ip_info";
	json_object_set_member(pJsonObject, ip_infoKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

LicenseIpInfo
License_extraInfoTables::getIpInfo()
{
	return ip_info;
}

void
License_extraInfoTables::setIpInfo(LicenseIpInfo  ip_info)
{
	this->ip_info = ip_info;
}


