#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response_extraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response_extraInfoTables::GetScrubIpDetails_200_response_extraInfoTables()
{
	//__init();
}

GetScrubIpDetails_200_response_extraInfoTables::~GetScrubIpDetails_200_response_extraInfoTables()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response_extraInfoTables::__init()
{
	//scrub_ips = new GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();
}

void
GetScrubIpDetails_200_response_extraInfoTables::__cleanup()
{
	//if(scrub_ips != NULL) {
	//
	//delete scrub_ips;
	//scrub_ips = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response_extraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *scrub_ipsKey = "scrub_ips";
	node = json_object_get_member(pJsonObject, scrub_ipsKey);
	if (node !=NULL) {
	

		if (isprimitive("GetScrubIpDetails_200_response_extraInfoTables_scrub_ips")) {
			jsonToValue(&scrub_ips, node, "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips", "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips");
		} else {
			
			GetScrubIpDetails_200_response_extraInfoTables_scrub_ips* obj = static_cast<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips*> (&scrub_ips);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

GetScrubIpDetails_200_response_extraInfoTables::GetScrubIpDetails_200_response_extraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response_extraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("GetScrubIpDetails_200_response_extraInfoTables_scrub_ips")) {
		GetScrubIpDetails_200_response_extraInfoTables_scrub_ips obj = getScrubIps();
		node = converttoJson(&obj, "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips", "");
	}
	else {
		
		GetScrubIpDetails_200_response_extraInfoTables_scrub_ips obj = static_cast<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips> (getScrubIps());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *scrub_ipsKey = "scrub_ips";
	json_object_set_member(pJsonObject, scrub_ipsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips
GetScrubIpDetails_200_response_extraInfoTables::getScrubIps()
{
	return scrub_ips;
}

void
GetScrubIpDetails_200_response_extraInfoTables::setScrubIps(GetScrubIpDetails_200_response_extraInfoTables_scrub_ips  scrub_ips)
{
	this->scrub_ips = scrub_ips;
}


