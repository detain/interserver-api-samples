#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainOrderResponse_attributes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainOrderResponse_attributes::DomainOrderResponse_attributes()
{
	//__init();
}

DomainOrderResponse_attributes::~DomainOrderResponse_attributes()
{
	//__cleanup();
}

void
DomainOrderResponse_attributes::__init()
{
	//id = std::string();
	//admin_email = std::string();
}

void
DomainOrderResponse_attributes::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(admin_email != NULL) {
	//
	//delete admin_email;
	//admin_email = NULL;
	//}
	//
}

void
DomainOrderResponse_attributes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *admin_emailKey = "admin_email";
	node = json_object_get_member(pJsonObject, admin_emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&admin_email, node, "std::string", "");
		} else {
			
		}
	}
}

DomainOrderResponse_attributes::DomainOrderResponse_attributes(char* json)
{
	this->fromJson(json);
}

char*
DomainOrderResponse_attributes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAdminEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *admin_emailKey = "admin_email";
	json_object_set_member(pJsonObject, admin_emailKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainOrderResponse_attributes::getId()
{
	return id;
}

void
DomainOrderResponse_attributes::setId(std::string  id)
{
	this->id = id;
}

std::string
DomainOrderResponse_attributes::getAdminEmail()
{
	return admin_email;
}

void
DomainOrderResponse_attributes::setAdminEmail(std::string  admin_email)
{
	this->admin_email = admin_email;
}


