

#include "LoginSubmissionExample_g_recaptcha_response.h"

using namespace Tiny;

LoginSubmissionExample_g_recaptcha_response::LoginSubmissionExample_g_recaptcha_response()
{
	__v_isShallow = bool(false);
	dep = LoginSubmissionExample_g_recaptcha_response_dep();
	__v_isRef = bool(false);
	_rawValue = std::string();
	_value = std::string();
}

LoginSubmissionExample_g_recaptcha_response::LoginSubmissionExample_g_recaptcha_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginSubmissionExample_g_recaptcha_response::~LoginSubmissionExample_g_recaptcha_response()
{

}

void
LoginSubmissionExample_g_recaptcha_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *__v_isShallowKey = "__v_isShallow";

    if(object.has_key(__v_isShallowKey))
    {
        bourne::json value = object[__v_isShallowKey];



        jsonToValue(&__v_isShallow, value, "bool");


    }

    const char *depKey = "dep";

    if(object.has_key(depKey))
    {
        bourne::json value = object[depKey];




        LoginSubmissionExample_g_recaptcha_response_dep* obj = &dep;
		obj->fromJson(value.dump());

    }

    const char *__v_isRefKey = "__v_isRef";

    if(object.has_key(__v_isRefKey))
    {
        bourne::json value = object[__v_isRefKey];



        jsonToValue(&__v_isRef, value, "bool");


    }

    const char *_rawValueKey = "_rawValue";

    if(object.has_key(_rawValueKey))
    {
        bourne::json value = object[_rawValueKey];



        jsonToValue(&_rawValue, value, "std::string");


    }

    const char *_valueKey = "_value";

    if(object.has_key(_valueKey))
    {
        bourne::json value = object[_valueKey];



        jsonToValue(&_value, value, "std::string");


    }


}

bourne::json
LoginSubmissionExample_g_recaptcha_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["__v_isShallow"] = isVIsShallow();







	object["dep"] = getDep().toJson();





    object["__v_isRef"] = isVIsRef();






    object["_rawValue"] = getRawValue();






    object["_value"] = getValue();



    return object;

}

bool
LoginSubmissionExample_g_recaptcha_response::isVIsShallow()
{
	return __v_isShallow;
}

void
LoginSubmissionExample_g_recaptcha_response::setVIsShallow(bool __v_isShallow)
{
	this->__v_isShallow = __v_isShallow;
}

LoginSubmissionExample_g_recaptcha_response_dep
LoginSubmissionExample_g_recaptcha_response::getDep()
{
	return dep;
}

void
LoginSubmissionExample_g_recaptcha_response::setDep(LoginSubmissionExample_g_recaptcha_response_dep dep)
{
	this->dep = dep;
}

bool
LoginSubmissionExample_g_recaptcha_response::isVIsRef()
{
	return __v_isRef;
}

void
LoginSubmissionExample_g_recaptcha_response::setVIsRef(bool __v_isRef)
{
	this->__v_isRef = __v_isRef;
}

std::string
LoginSubmissionExample_g_recaptcha_response::getRawValue()
{
	return _rawValue;
}

void
LoginSubmissionExample_g_recaptcha_response::setRawValue(std::string _rawValue)
{
	this->_rawValue = _rawValue;
}

std::string
LoginSubmissionExample_g_recaptcha_response::getValue()
{
	return _value;
}

void
LoginSubmissionExample_g_recaptcha_response::setValue(std::string _value)
{
	this->_value = _value;
}



