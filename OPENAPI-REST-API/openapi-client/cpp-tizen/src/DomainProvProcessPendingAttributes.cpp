#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainProvProcessPending_attributes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainProvProcessPending_attributes::DomainProvProcessPending_attributes()
{
	//__init();
}

DomainProvProcessPending_attributes::~DomainProvProcessPending_attributes()
{
	//__cleanup();
}

void
DomainProvProcessPending_attributes::__init()
{
	//id = std::string();
	//order_id = std::string();
	//registrationexpirationdate = std::string();
	//f_auto_renew = std::string();
}

void
DomainProvProcessPending_attributes::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(order_id != NULL) {
	//
	//delete order_id;
	//order_id = NULL;
	//}
	//if(registrationexpirationdate != NULL) {
	//
	//delete registrationexpirationdate;
	//registrationexpirationdate = NULL;
	//}
	//if(f_auto_renew != NULL) {
	//
	//delete f_auto_renew;
	//f_auto_renew = NULL;
	//}
	//
}

void
DomainProvProcessPending_attributes::fromJson(char* jsonStr)
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
	const gchar *order_idKey = "order_id";
	node = json_object_get_member(pJsonObject, order_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&order_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *registrationexpirationdateKey = "registration expiration date";
	node = json_object_get_member(pJsonObject, registrationexpirationdateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&registrationexpirationdate, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *f_auto_renewKey = "f_auto_renew";
	node = json_object_get_member(pJsonObject, f_auto_renewKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&f_auto_renew, node, "std::string", "");
		} else {
			
		}
	}
}

DomainProvProcessPending_attributes::DomainProvProcessPending_attributes(char* json)
{
	this->fromJson(json);
}

char*
DomainProvProcessPending_attributes::toJson()
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
		std::string obj = getOrderId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *order_idKey = "order_id";
	json_object_set_member(pJsonObject, order_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegistrationexpirationdate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *registrationexpirationdateKey = "registration expiration date";
	json_object_set_member(pJsonObject, registrationexpirationdateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFAutoRenew();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *f_auto_renewKey = "f_auto_renew";
	json_object_set_member(pJsonObject, f_auto_renewKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainProvProcessPending_attributes::getId()
{
	return id;
}

void
DomainProvProcessPending_attributes::setId(std::string  id)
{
	this->id = id;
}

std::string
DomainProvProcessPending_attributes::getOrderId()
{
	return order_id;
}

void
DomainProvProcessPending_attributes::setOrderId(std::string  order_id)
{
	this->order_id = order_id;
}

std::string
DomainProvProcessPending_attributes::getRegistrationexpirationdate()
{
	return registrationexpirationdate;
}

void
DomainProvProcessPending_attributes::setRegistrationexpirationdate(std::string  registrationexpirationdate)
{
	this->registrationexpirationdate = registrationexpirationdate;
}

std::string
DomainProvProcessPending_attributes::getFAutoRenew()
{
	return f_auto_renew;
}

void
DomainProvProcessPending_attributes::setFAutoRenew(std::string  f_auto_renew)
{
	this->f_auto_renew = f_auto_renew;
}


