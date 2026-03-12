#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailStatsType_volume_ip.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailStatsType_volume_ip::MailStatsType_volume_ip()
{
	//__init();
}

MailStatsType_volume_ip::~MailStatsType_volume_ip()
{
	//__cleanup();
}

void
MailStatsType_volume_ip::__init()
{
	//1111 = int(0);
	//2222 = int(0);
	//3333 = int(0);
	//4444 = int(0);
}

void
MailStatsType_volume_ip::__cleanup()
{
	//if(1111 != NULL) {
	//
	//delete 1111;
	//1111 = NULL;
	//}
	//if(2222 != NULL) {
	//
	//delete 2222;
	//2222 = NULL;
	//}
	//if(3333 != NULL) {
	//
	//delete 3333;
	//3333 = NULL;
	//}
	//if(4444 != NULL) {
	//
	//delete 4444;
	//4444 = NULL;
	//}
	//
}

void
MailStatsType_volume_ip::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *1111Key = "1.1.1.1";
	node = json_object_get_member(pJsonObject, 1111Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&1111, node, "int", "");
		} else {
			
		}
	}
	const gchar *2222Key = "2.2.2.2";
	node = json_object_get_member(pJsonObject, 2222Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&2222, node, "int", "");
		} else {
			
		}
	}
	const gchar *3333Key = "3.3.3.3";
	node = json_object_get_member(pJsonObject, 3333Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&3333, node, "int", "");
		} else {
			
		}
	}
	const gchar *4444Key = "4.4.4.4";
	node = json_object_get_member(pJsonObject, 4444Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&4444, node, "int", "");
		} else {
			
		}
	}
}

MailStatsType_volume_ip::MailStatsType_volume_ip(char* json)
{
	this->fromJson(json);
}

char*
MailStatsType_volume_ip::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = get1111();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *1111Key = "1.1.1.1";
	json_object_set_member(pJsonObject, 1111Key, node);
	if (isprimitive("int")) {
		int obj = get2222();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *2222Key = "2.2.2.2";
	json_object_set_member(pJsonObject, 2222Key, node);
	if (isprimitive("int")) {
		int obj = get3333();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *3333Key = "3.3.3.3";
	json_object_set_member(pJsonObject, 3333Key, node);
	if (isprimitive("int")) {
		int obj = get4444();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *4444Key = "4.4.4.4";
	json_object_set_member(pJsonObject, 4444Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailStatsType_volume_ip::get1111()
{
	return 1111;
}

void
MailStatsType_volume_ip::set1111(int  1111)
{
	this->1111 = 1111;
}

int
MailStatsType_volume_ip::get2222()
{
	return 2222;
}

void
MailStatsType_volume_ip::set2222(int  2222)
{
	this->2222 = 2222;
}

int
MailStatsType_volume_ip::get3333()
{
	return 3333;
}

void
MailStatsType_volume_ip::set3333(int  3333)
{
	this->3333 = 3333;
}

int
MailStatsType_volume_ip::get4444()
{
	return 4444;
}

void
MailStatsType_volume_ip::set4444(int  4444)
{
	this->4444 = 4444;
}


