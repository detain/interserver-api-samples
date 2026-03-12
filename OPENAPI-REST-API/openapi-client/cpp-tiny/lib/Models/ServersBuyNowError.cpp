

#include "ServersBuyNowError.h"

using namespace Tiny;

ServersBuyNowError::ServersBuyNowError()
{
	success = bool(false);
	text = std::string();
	errors = std::list<std::string>();
}

ServersBuyNowError::ServersBuyNowError(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServersBuyNowError::~ServersBuyNowError()
{

}

void
ServersBuyNowError::fromJson(std::string jsonObj)
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
ServersBuyNowError::toJson()
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
ServersBuyNowError::isSuccess()
{
	return success;
}

void
ServersBuyNowError::setSuccess(bool success)
{
	this->success = success;
}

std::string
ServersBuyNowError::getText()
{
	return text;
}

void
ServersBuyNowError::setText(std::string text)
{
	this->text = text;
}

std::list<std::string>
ServersBuyNowError::getErrors()
{
	return errors;
}

void
ServersBuyNowError::setErrors(std::list<std::string> errors)
{
	this->errors = errors;
}



