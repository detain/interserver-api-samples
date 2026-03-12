#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainNameserverPutRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainNameserverPutRequest::DomainNameserverPutRequest()
{
	//__init();
}

DomainNameserverPutRequest::~DomainNameserverPutRequest()
{
	//__cleanup();
}

void
DomainNameserverPutRequest::__init()
{
	//new std::list()std::list> nameserver;
}

void
DomainNameserverPutRequest::__cleanup()
{
	//if(nameserver != NULL) {
	//nameserver.RemoveAll(true);
	//delete nameserver;
	//nameserver = NULL;
	//}
	//
}

void
DomainNameserverPutRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameserverKey = "nameserver";
	node = json_object_get_member(pJsonObject, nameserverKey);
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
			nameserver = new_list;
		}
		
	}
}

DomainNameserverPutRequest::DomainNameserverPutRequest(char* json)
{
	this->fromJson(json);
}

char*
DomainNameserverPutRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getNameserver());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getNameserver());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *nameserverKey = "nameserver";
	json_object_set_member(pJsonObject, nameserverKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<std::string>
DomainNameserverPutRequest::getNameserver()
{
	return nameserver;
}

void
DomainNameserverPutRequest::setNameserver(std::list <std::string> nameserver)
{
	this->nameserver = nameserver;
}


