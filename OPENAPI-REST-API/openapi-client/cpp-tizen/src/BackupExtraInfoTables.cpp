#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupExtraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupExtraInfoTables::BackupExtraInfoTables()
{
	//__init();
}

BackupExtraInfoTables::~BackupExtraInfoTables()
{
	//__cleanup();
}

void
BackupExtraInfoTables::__init()
{
	//ip_info = new BackupIPInfo();
}

void
BackupExtraInfoTables::__cleanup()
{
	//if(ip_info != NULL) {
	//
	//delete ip_info;
	//ip_info = NULL;
	//}
	//
}

void
BackupExtraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ip_infoKey = "ip_info";
	node = json_object_get_member(pJsonObject, ip_infoKey);
	if (node !=NULL) {
	

		if (isprimitive("BackupIPInfo")) {
			jsonToValue(&ip_info, node, "BackupIPInfo", "BackupIPInfo");
		} else {
			
			BackupIPInfo* obj = static_cast<BackupIPInfo*> (&ip_info);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

BackupExtraInfoTables::BackupExtraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
BackupExtraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BackupIPInfo")) {
		BackupIPInfo obj = getIpInfo();
		node = converttoJson(&obj, "BackupIPInfo", "");
	}
	else {
		
		BackupIPInfo obj = static_cast<BackupIPInfo> (getIpInfo());
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

BackupIPInfo
BackupExtraInfoTables::getIpInfo()
{
	return ip_info;
}

void
BackupExtraInfoTables::setIpInfo(BackupIPInfo  ip_info)
{
	this->ip_info = ip_info;
}


