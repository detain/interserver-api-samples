#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginSubmissionExample_g_recaptcha_response_dep.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginSubmissionExample_g_recaptcha_response_dep::LoginSubmissionExample_g_recaptcha_response_dep()
{
	//__init();
}

LoginSubmissionExample_g_recaptcha_response_dep::~LoginSubmissionExample_g_recaptcha_response_dep()
{
	//__cleanup();
}

void
LoginSubmissionExample_g_recaptcha_response_dep::__init()
{
	//w = int(0);
	//n = int(0);
}

void
LoginSubmissionExample_g_recaptcha_response_dep::__cleanup()
{
	//if(w != NULL) {
	//
	//delete w;
	//w = NULL;
	//}
	//if(n != NULL) {
	//
	//delete n;
	//n = NULL;
	//}
	//
}

void
LoginSubmissionExample_g_recaptcha_response_dep::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *wKey = "w";
	node = json_object_get_member(pJsonObject, wKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&w, node, "int", "");
		} else {
			
		}
	}
	const gchar *nKey = "n";
	node = json_object_get_member(pJsonObject, nKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&n, node, "int", "");
		} else {
			
		}
	}
}

LoginSubmissionExample_g_recaptcha_response_dep::LoginSubmissionExample_g_recaptcha_response_dep(char* json)
{
	this->fromJson(json);
}

char*
LoginSubmissionExample_g_recaptcha_response_dep::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getW();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *wKey = "w";
	json_object_set_member(pJsonObject, wKey, node);
	if (isprimitive("int")) {
		int obj = getN();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *nKey = "n";
	json_object_set_member(pJsonObject, nKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
LoginSubmissionExample_g_recaptcha_response_dep::getW()
{
	return w;
}

void
LoginSubmissionExample_g_recaptcha_response_dep::setW(int  w)
{
	this->w = w;
}

int
LoginSubmissionExample_g_recaptcha_response_dep::getN()
{
	return n;
}

void
LoginSubmissionExample_g_recaptcha_response_dep::setN(int  n)
{
	this->n = n;
}


