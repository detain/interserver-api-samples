#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderFieldLabel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderFieldLabel::ServerOrderFieldLabel()
{
	//__init();
}

ServerOrderFieldLabel::~ServerOrderFieldLabel()
{
	//__cleanup();
}

void
ServerOrderFieldLabel::__init()
{
	//name = std::string();
	//active = int(0);
}

void
ServerOrderFieldLabel::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//
}

void
ServerOrderFieldLabel::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&active, node, "int", "");
		} else {
			
		}
	}
}

ServerOrderFieldLabel::ServerOrderFieldLabel(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderFieldLabel::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getActive();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerOrderFieldLabel::getName()
{
	return name;
}

void
ServerOrderFieldLabel::setName(std::string  name)
{
	this->name = name;
}

int
ServerOrderFieldLabel::getActive()
{
	return active;
}

void
ServerOrderFieldLabel::setActive(int  active)
{
	this->active = active;
}


