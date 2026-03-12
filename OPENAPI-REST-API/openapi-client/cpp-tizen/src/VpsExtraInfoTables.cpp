#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsExtraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsExtraInfoTables::VpsExtraInfoTables()
{
	//__init();
}

VpsExtraInfoTables::~VpsExtraInfoTables()
{
	//__cleanup();
}

void
VpsExtraInfoTables::__init()
{
	//ip_info = new VpsIPInfo();
}

void
VpsExtraInfoTables::__cleanup()
{
	//if(ip_info != NULL) {
	//
	//delete ip_info;
	//ip_info = NULL;
	//}
	//
}

void
VpsExtraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ip_infoKey = "ip_info";
	node = json_object_get_member(pJsonObject, ip_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsIPInfo")) {
			jsonToValue(&ip_info, node, "VpsIPInfo", "VpsIPInfo");
		} else {
			
			VpsIPInfo* obj = static_cast<VpsIPInfo*> (&ip_info);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsExtraInfoTables::VpsExtraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
VpsExtraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsIPInfo")) {
		VpsIPInfo obj = getIpInfo();
		node = converttoJson(&obj, "VpsIPInfo", "");
	}
	else {
		
		VpsIPInfo obj = static_cast<VpsIPInfo> (getIpInfo());
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

VpsIPInfo
VpsExtraInfoTables::getIpInfo()
{
	return ip_info;
}

void
VpsExtraInfoTables::setIpInfo(VpsIPInfo  ip_info)
{
	this->ip_info = ip_info;
}


