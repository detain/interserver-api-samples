

#include "InitiatePayment_200_response.h"

using namespace Tiny;

InitiatePayment_200_response::InitiatePayment_200_response()
{
	type = std::string();
	redirect = std::string();
	action = std::string();
	method = std::string();
	items = null;
	text = std::string();
}

InitiatePayment_200_response::InitiatePayment_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

InitiatePayment_200_response::~InitiatePayment_200_response()
{

}

void
InitiatePayment_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *redirectKey = "redirect";

    if(object.has_key(redirectKey))
    {
        bourne::json value = object[redirectKey];



        jsonToValue(&redirect, value, "std::string");


    }

    const char *actionKey = "action";

    if(object.has_key(actionKey))
    {
        bourne::json value = object[actionKey];



        jsonToValue(&action, value, "std::string");


    }

    const char *methodKey = "method";

    if(object.has_key(methodKey))
    {
        bourne::json value = object[methodKey];



        jsonToValue(&method, value, "std::string");


    }

    const char *itemsKey = "items";

    if(object.has_key(itemsKey))
    {
        bourne::json value = object[itemsKey];




        Object* obj = &items;
		obj->fromJson(value.dump());

    }

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }


}

bourne::json
InitiatePayment_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["type"] = getType();






    object["redirect"] = getRedirect();






    object["action"] = getAction();






    object["method"] = getMethod();







	object["items"] = getItems().toJson();





    object["text"] = getText();



    return object;

}

std::string
InitiatePayment_200_response::getType()
{
	return type;
}

void
InitiatePayment_200_response::setType(std::string type)
{
	this->type = type;
}

std::string
InitiatePayment_200_response::getRedirect()
{
	return redirect;
}

void
InitiatePayment_200_response::setRedirect(std::string redirect)
{
	this->redirect = redirect;
}

std::string
InitiatePayment_200_response::getAction()
{
	return action;
}

void
InitiatePayment_200_response::setAction(std::string action)
{
	this->action = action;
}

std::string
InitiatePayment_200_response::getMethod()
{
	return method;
}

void
InitiatePayment_200_response::setMethod(std::string method)
{
	this->method = method;
}

Object
InitiatePayment_200_response::getItems()
{
	return items;
}

void
InitiatePayment_200_response::setItems(Object items)
{
	this->items = items;
}

std::string
InitiatePayment_200_response::getText()
{
	return text;
}

void
InitiatePayment_200_response::setText(std::string text)
{
	this->text = text;
}



