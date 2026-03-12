#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeServicesLicensesLinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeServicesLicensesLinks::HomeServicesLicensesLinks()
{
	//__init();
}

HomeServicesLicensesLinks::~HomeServicesLicensesLinks()
{
	//__cleanup();
}

void
HomeServicesLicensesLinks::__init()
{
	//386522 = std::string();
}

void
HomeServicesLicensesLinks::__cleanup()
{
	//if(386522 != NULL) {
	//
	//delete 386522;
	//386522 = NULL;
	//}
	//
}

void
HomeServicesLicensesLinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *386522Key = "386522";
	node = json_object_get_member(pJsonObject, 386522Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&386522, node, "std::string", "");
		} else {
			
		}
	}
}

HomeServicesLicensesLinks::HomeServicesLicensesLinks(char* json)
{
	this->fromJson(json);
}

char*
HomeServicesLicensesLinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get386522();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *386522Key = "386522";
	json_object_set_member(pJsonObject, 386522Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeServicesLicensesLinks::get386522()
{
	return 386522;
}

void
HomeServicesLicensesLinks::set386522(std::string  386522)
{
	this->386522 = 386522;
}


