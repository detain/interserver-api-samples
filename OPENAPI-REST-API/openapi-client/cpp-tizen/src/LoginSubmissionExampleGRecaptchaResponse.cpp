#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginSubmissionExample_g_recaptcha_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginSubmissionExample_g_recaptcha_response::LoginSubmissionExample_g_recaptcha_response()
{
	//__init();
}

LoginSubmissionExample_g_recaptcha_response::~LoginSubmissionExample_g_recaptcha_response()
{
	//__cleanup();
}

void
LoginSubmissionExample_g_recaptcha_response::__init()
{
	//__v_isShallow = bool(false);
	//dep = new LoginSubmissionExample_g_recaptcha_response_dep();
	//__v_isRef = bool(false);
	//_rawValue = std::string();
	//_value = std::string();
}

void
LoginSubmissionExample_g_recaptcha_response::__cleanup()
{
	//if(__v_isShallow != NULL) {
	//
	//delete __v_isShallow;
	//__v_isShallow = NULL;
	//}
	//if(dep != NULL) {
	//
	//delete dep;
	//dep = NULL;
	//}
	//if(__v_isRef != NULL) {
	//
	//delete __v_isRef;
	//__v_isRef = NULL;
	//}
	//if(_rawValue != NULL) {
	//
	//delete _rawValue;
	//_rawValue = NULL;
	//}
	//if(_value != NULL) {
	//
	//delete _value;
	//_value = NULL;
	//}
	//
}

void
LoginSubmissionExample_g_recaptcha_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *__v_isShallowKey = "__v_isShallow";
	node = json_object_get_member(pJsonObject, __v_isShallowKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&__v_isShallow, node, "bool", "");
		} else {
			
		}
	}
	const gchar *depKey = "dep";
	node = json_object_get_member(pJsonObject, depKey);
	if (node !=NULL) {
	

		if (isprimitive("LoginSubmissionExample_g_recaptcha_response_dep")) {
			jsonToValue(&dep, node, "LoginSubmissionExample_g_recaptcha_response_dep", "LoginSubmissionExample_g_recaptcha_response_dep");
		} else {
			
			LoginSubmissionExample_g_recaptcha_response_dep* obj = static_cast<LoginSubmissionExample_g_recaptcha_response_dep*> (&dep);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *__v_isRefKey = "__v_isRef";
	node = json_object_get_member(pJsonObject, __v_isRefKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&__v_isRef, node, "bool", "");
		} else {
			
		}
	}
	const gchar *_rawValueKey = "_rawValue";
	node = json_object_get_member(pJsonObject, _rawValueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_rawValue, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *_valueKey = "_value";
	node = json_object_get_member(pJsonObject, _valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_value, node, "std::string", "");
		} else {
			
		}
	}
}

LoginSubmissionExample_g_recaptcha_response::LoginSubmissionExample_g_recaptcha_response(char* json)
{
	this->fromJson(json);
}

char*
LoginSubmissionExample_g_recaptcha_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getVIsShallow();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *__v_isShallowKey = "__v_isShallow";
	json_object_set_member(pJsonObject, __v_isShallowKey, node);
	if (isprimitive("LoginSubmissionExample_g_recaptcha_response_dep")) {
		LoginSubmissionExample_g_recaptcha_response_dep obj = getDep();
		node = converttoJson(&obj, "LoginSubmissionExample_g_recaptcha_response_dep", "");
	}
	else {
		
		LoginSubmissionExample_g_recaptcha_response_dep obj = static_cast<LoginSubmissionExample_g_recaptcha_response_dep> (getDep());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *depKey = "dep";
	json_object_set_member(pJsonObject, depKey, node);
	if (isprimitive("bool")) {
		bool obj = getVIsRef();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *__v_isRefKey = "__v_isRef";
	json_object_set_member(pJsonObject, __v_isRefKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRawValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_rawValueKey = "_rawValue";
	json_object_set_member(pJsonObject, _rawValueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_valueKey = "_value";
	json_object_set_member(pJsonObject, _valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
LoginSubmissionExample_g_recaptcha_response::getVIsShallow()
{
	return __v_isShallow;
}

void
LoginSubmissionExample_g_recaptcha_response::setVIsShallow(bool  __v_isShallow)
{
	this->__v_isShallow = __v_isShallow;
}

LoginSubmissionExample_g_recaptcha_response_dep
LoginSubmissionExample_g_recaptcha_response::getDep()
{
	return dep;
}

void
LoginSubmissionExample_g_recaptcha_response::setDep(LoginSubmissionExample_g_recaptcha_response_dep  dep)
{
	this->dep = dep;
}

bool
LoginSubmissionExample_g_recaptcha_response::getVIsRef()
{
	return __v_isRef;
}

void
LoginSubmissionExample_g_recaptcha_response::setVIsRef(bool  __v_isRef)
{
	this->__v_isRef = __v_isRef;
}

std::string
LoginSubmissionExample_g_recaptcha_response::getRawValue()
{
	return _rawValue;
}

void
LoginSubmissionExample_g_recaptcha_response::setRawValue(std::string  _rawValue)
{
	this->_rawValue = _rawValue;
}

std::string
LoginSubmissionExample_g_recaptcha_response::getValue()
{
	return _value;
}

void
LoginSubmissionExample_g_recaptcha_response::setValue(std::string  _value)
{
	this->_value = _value;
}


