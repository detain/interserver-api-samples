#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailSchema_extraInfoTables.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailSchema_extraInfoTables::MailSchema_extraInfoTables()
{
	//__init();
}

MailSchema_extraInfoTables::~MailSchema_extraInfoTables()
{
	//__cleanup();
}

void
MailSchema_extraInfoTables::__init()
{
	//mail = new MailExtraInfoTable();
	//tutorials = new MailTutorialsTable();
}

void
MailSchema_extraInfoTables::__cleanup()
{
	//if(mail != NULL) {
	//
	//delete mail;
	//mail = NULL;
	//}
	//if(tutorials != NULL) {
	//
	//delete tutorials;
	//tutorials = NULL;
	//}
	//
}

void
MailSchema_extraInfoTables::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *mailKey = "mail";
	node = json_object_get_member(pJsonObject, mailKey);
	if (node !=NULL) {
	

		if (isprimitive("MailExtraInfoTable")) {
			jsonToValue(&mail, node, "MailExtraInfoTable", "MailExtraInfoTable");
		} else {
			
			MailExtraInfoTable* obj = static_cast<MailExtraInfoTable*> (&mail);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *tutorialsKey = "tutorials";
	node = json_object_get_member(pJsonObject, tutorialsKey);
	if (node !=NULL) {
	

		if (isprimitive("MailTutorialsTable")) {
			jsonToValue(&tutorials, node, "MailTutorialsTable", "MailTutorialsTable");
		} else {
			
			MailTutorialsTable* obj = static_cast<MailTutorialsTable*> (&tutorials);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

MailSchema_extraInfoTables::MailSchema_extraInfoTables(char* json)
{
	this->fromJson(json);
}

char*
MailSchema_extraInfoTables::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MailExtraInfoTable")) {
		MailExtraInfoTable obj = getMail();
		node = converttoJson(&obj, "MailExtraInfoTable", "");
	}
	else {
		
		MailExtraInfoTable obj = static_cast<MailExtraInfoTable> (getMail());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *mailKey = "mail";
	json_object_set_member(pJsonObject, mailKey, node);
	if (isprimitive("MailTutorialsTable")) {
		MailTutorialsTable obj = getTutorials();
		node = converttoJson(&obj, "MailTutorialsTable", "");
	}
	else {
		
		MailTutorialsTable obj = static_cast<MailTutorialsTable> (getTutorials());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *tutorialsKey = "tutorials";
	json_object_set_member(pJsonObject, tutorialsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

MailExtraInfoTable
MailSchema_extraInfoTables::getMail()
{
	return mail;
}

void
MailSchema_extraInfoTables::setMail(MailExtraInfoTable  mail)
{
	this->mail = mail;
}

MailTutorialsTable
MailSchema_extraInfoTables::getTutorials()
{
	return tutorials;
}

void
MailSchema_extraInfoTables::setTutorials(MailTutorialsTable  tutorials)
{
	this->tutorials = tutorials;
}


