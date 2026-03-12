#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailStatsType_volume.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailStatsType_volume::MailStatsType_volume()
{
	//__init();
}

MailStatsType_volume::~MailStatsType_volume()
{
	//__cleanup();
}

void
MailStatsType_volume::__init()
{
	//to = new MailStatsType_volume_to();
	//from = new MailStatsType_volume_from();
	//ip = new MailStatsType_volume_ip();
}

void
MailStatsType_volume::__cleanup()
{
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//
}

void
MailStatsType_volume::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("MailStatsType_volume_to")) {
			jsonToValue(&to, node, "MailStatsType_volume_to", "MailStatsType_volume_to");
		} else {
			
			MailStatsType_volume_to* obj = static_cast<MailStatsType_volume_to*> (&to);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("MailStatsType_volume_from")) {
			jsonToValue(&from, node, "MailStatsType_volume_from", "MailStatsType_volume_from");
		} else {
			
			MailStatsType_volume_from* obj = static_cast<MailStatsType_volume_from*> (&from);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ipKey = "ip";
	node = json_object_get_member(pJsonObject, ipKey);
	if (node !=NULL) {
	

		if (isprimitive("MailStatsType_volume_ip")) {
			jsonToValue(&ip, node, "MailStatsType_volume_ip", "MailStatsType_volume_ip");
		} else {
			
			MailStatsType_volume_ip* obj = static_cast<MailStatsType_volume_ip*> (&ip);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

MailStatsType_volume::MailStatsType_volume(char* json)
{
	this->fromJson(json);
}

char*
MailStatsType_volume::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MailStatsType_volume_to")) {
		MailStatsType_volume_to obj = getTo();
		node = converttoJson(&obj, "MailStatsType_volume_to", "");
	}
	else {
		
		MailStatsType_volume_to obj = static_cast<MailStatsType_volume_to> (getTo());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	if (isprimitive("MailStatsType_volume_from")) {
		MailStatsType_volume_from obj = getFrom();
		node = converttoJson(&obj, "MailStatsType_volume_from", "");
	}
	else {
		
		MailStatsType_volume_from obj = static_cast<MailStatsType_volume_from> (getFrom());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("MailStatsType_volume_ip")) {
		MailStatsType_volume_ip obj = getIp();
		node = converttoJson(&obj, "MailStatsType_volume_ip", "");
	}
	else {
		
		MailStatsType_volume_ip obj = static_cast<MailStatsType_volume_ip> (getIp());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ipKey = "ip";
	json_object_set_member(pJsonObject, ipKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MailStatsType_volume_to
MailStatsType_volume::getTo()
{
	return to;
}

void
MailStatsType_volume::setTo(MailStatsType_volume_to  to)
{
	this->to = to;
}

MailStatsType_volume_from
MailStatsType_volume::getFrom()
{
	return from;
}

void
MailStatsType_volume::setFrom(MailStatsType_volume_from  from)
{
	this->from = from;
}

MailStatsType_volume_ip
MailStatsType_volume::getIp()
{
	return ip;
}

void
MailStatsType_volume::setIp(MailStatsType_volume_ip  ip)
{
	this->ip = ip;
}


