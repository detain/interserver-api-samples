

#include "CreateFilter_400_response.h"

using namespace Tiny;

CreateFilter_400_response::CreateFilter_400_response()
{
	success = bool(false);
	text = std::string();
	errors = std::list<std::string>();
}

CreateFilter_400_response::CreateFilter_400_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

CreateFilter_400_response::~CreateFilter_400_response()
{

}

void
CreateFilter_400_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *successKey = "success";

    if(object.has_key(successKey))
    {
        bourne::json value = object[successKey];



        jsonToValue(&success, value, "bool");


    }

    const char *textKey = "text";

    if(object.has_key(textKey))
    {
        bourne::json value = object[textKey];



        jsonToValue(&text, value, "std::string");


    }

    const char *errorsKey = "errors";

    if(object.has_key(errorsKey))
    {
        bourne::json value = object[errorsKey];


        std::list<std::string> errors_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            errors_list.push_back(element);
        }
        errors = errors_list;


    }


}

bourne::json
CreateFilter_400_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();





    std::list<std::string> errors_list = getErrors();
    bourne::json errors_arr = bourne::json::array();

    for(auto& var : errors_list)
    {
        errors_arr.append(var);
    }
    object["errors"] = errors_arr;






    return object;

}

bool
CreateFilter_400_response::isSuccess()
{
	return success;
}

void
CreateFilter_400_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
CreateFilter_400_response::getText()
{
	return text;
}

void
CreateFilter_400_response::setText(std::string text)
{
	this->text = text;
}

std::list<std::string>
CreateFilter_400_response::getErrors()
{
	return errors;
}

void
CreateFilter_400_response::setErrors(std::list<std::string> errors)
{
	this->errors = errors;
}



