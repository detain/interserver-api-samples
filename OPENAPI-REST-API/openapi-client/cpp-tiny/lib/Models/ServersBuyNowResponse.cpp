

#include "ServersBuyNowResponse.h"

using namespace Tiny;

ServersBuyNowResponse::ServersBuyNowResponse()
{
	success = bool(false);
	text = std::string();
	order_details = ServersBuyNowResponse_order_details();
}

ServersBuyNowResponse::ServersBuyNowResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServersBuyNowResponse::~ServersBuyNowResponse()
{

}

void
ServersBuyNowResponse::fromJson(std::string jsonObj)
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

    const char *order_detailsKey = "order_details";

    if(object.has_key(order_detailsKey))
    {
        bourne::json value = object[order_detailsKey];




        ServersBuyNowResponse_order_details* obj = &order_details;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServersBuyNowResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();







	object["order_details"] = getOrderDetails().toJson();


    return object;

}

bool
ServersBuyNowResponse::isSuccess()
{
	return success;
}

void
ServersBuyNowResponse::setSuccess(bool success)
{
	this->success = success;
}

std::string
ServersBuyNowResponse::getText()
{
	return text;
}

void
ServersBuyNowResponse::setText(std::string text)
{
	this->text = text;
}

ServersBuyNowResponse_order_details
ServersBuyNowResponse::getOrderDetails()
{
	return order_details;
}

void
ServersBuyNowResponse::setOrderDetails(ServersBuyNowResponse_order_details order_details)
{
	this->order_details = order_details;
}



