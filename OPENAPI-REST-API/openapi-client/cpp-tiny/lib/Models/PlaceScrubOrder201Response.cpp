

#include "PlaceScrubOrder_201_response.h"

using namespace Tiny;

PlaceScrubOrder_201_response::PlaceScrubOrder_201_response()
{
	success = bool(false);
	text = std::string();
	order_details = PlaceScrubOrder_201_response_order_details();
}

PlaceScrubOrder_201_response::PlaceScrubOrder_201_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

PlaceScrubOrder_201_response::~PlaceScrubOrder_201_response()
{

}

void
PlaceScrubOrder_201_response::fromJson(std::string jsonObj)
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




        PlaceScrubOrder_201_response_order_details* obj = &order_details;
		obj->fromJson(value.dump());

    }


}

bourne::json
PlaceScrubOrder_201_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["success"] = isSuccess();






    object["text"] = getText();







	object["order_details"] = getOrderDetails().toJson();


    return object;

}

bool
PlaceScrubOrder_201_response::isSuccess()
{
	return success;
}

void
PlaceScrubOrder_201_response::setSuccess(bool success)
{
	this->success = success;
}

std::string
PlaceScrubOrder_201_response::getText()
{
	return text;
}

void
PlaceScrubOrder_201_response::setText(std::string text)
{
	this->text = text;
}

PlaceScrubOrder_201_response_order_details
PlaceScrubOrder_201_response::getOrderDetails()
{
	return order_details;
}

void
PlaceScrubOrder_201_response::setOrderDetails(PlaceScrubOrder_201_response_order_details order_details)
{
	this->order_details = order_details;
}



