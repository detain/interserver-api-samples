#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainOrder_services.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainOrder_services::DomainOrder_services()
{
	//__init();
}

DomainOrder_services::~DomainOrder_services()
{
	//__cleanup();
}

void
DomainOrder_services::__init()
{
	//domainOrderServices10001 = new DomainOrderServices10001();
}

void
DomainOrder_services::__cleanup()
{
	//if(domainOrderServices10001 != NULL) {
	//
	//delete domainOrderServices10001;
	//domainOrderServices10001 = NULL;
	//}
	//
}

void
DomainOrder_services::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domainOrderServices10001Key = "DomainOrderServices10001";
	node = json_object_get_member(pJsonObject, domainOrderServices10001Key);
	if (node !=NULL) {
	

		if (isprimitive("DomainOrderServices10001")) {
			jsonToValue(&domainOrderServices10001, node, "DomainOrderServices10001", "DomainOrderServices10001");
		} else {
			
			DomainOrderServices10001* obj = static_cast<DomainOrderServices10001*> (&domainOrderServices10001);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DomainOrder_services::DomainOrder_services(char* json)
{
	this->fromJson(json);
}

char*
DomainOrder_services::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("DomainOrderServices10001")) {
		DomainOrderServices10001 obj = getDomainOrderServices10001();
		node = converttoJson(&obj, "DomainOrderServices10001", "");
	}
	else {
		
		DomainOrderServices10001 obj = static_cast<DomainOrderServices10001> (getDomainOrderServices10001());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *domainOrderServices10001Key = "DomainOrderServices10001";
	json_object_set_member(pJsonObject, domainOrderServices10001Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

DomainOrderServices10001
DomainOrder_services::getDomainOrderServices10001()
{
	return domainOrderServices10001;
}

void
DomainOrder_services::setDomainOrderServices10001(DomainOrderServices10001  domainOrderServices10001)
{
	this->domainOrderServices10001 = domainOrderServices10001;
}


