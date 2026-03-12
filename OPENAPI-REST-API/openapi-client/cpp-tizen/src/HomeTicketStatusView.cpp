#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_ticketStatusView.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_ticketStatusView::Home_ticketStatusView()
{
	//__init();
}

Home_ticketStatusView::~Home_ticketStatusView()
{
	//__cleanup();
}

void
Home_ticketStatusView::__init()
{
	//4 = std::string();
	//5 = std::string();
	//6 = std::string();
}

void
Home_ticketStatusView::__cleanup()
{
	//if(4 != NULL) {
	//
	//delete 4;
	//4 = NULL;
	//}
	//if(5 != NULL) {
	//
	//delete 5;
	//5 = NULL;
	//}
	//if(6 != NULL) {
	//
	//delete 6;
	//6 = NULL;
	//}
	//
}

void
Home_ticketStatusView::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *4Key = "4";
	node = json_object_get_member(pJsonObject, 4Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&4, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *5Key = "5";
	node = json_object_get_member(pJsonObject, 5Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&5, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *6Key = "6";
	node = json_object_get_member(pJsonObject, 6Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&6, node, "std::string", "");
		} else {
			
		}
	}
}

Home_ticketStatusView::Home_ticketStatusView(char* json)
{
	this->fromJson(json);
}

char*
Home_ticketStatusView::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get4();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *4Key = "4";
	json_object_set_member(pJsonObject, 4Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get5();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *5Key = "5";
	json_object_set_member(pJsonObject, 5Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get6();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *6Key = "6";
	json_object_set_member(pJsonObject, 6Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Home_ticketStatusView::get4()
{
	return 4;
}

void
Home_ticketStatusView::set4(std::string  4)
{
	this->4 = 4;
}

std::string
Home_ticketStatusView::get5()
{
	return 5;
}

void
Home_ticketStatusView::set5(std::string  5)
{
	this->5 = 5;
}

std::string
Home_ticketStatusView::get6()
{
	return 6;
}

void
Home_ticketStatusView::set6(std::string  6)
{
	this->6 = 6;
}


