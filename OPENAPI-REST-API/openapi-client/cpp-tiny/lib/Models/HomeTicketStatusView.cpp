

#include "Home_ticketStatusView.h"

using namespace Tiny;

Home_ticketStatusView::Home_ticketStatusView()
{
	4 = std::string();
	5 = std::string();
	6 = std::string();
}

Home_ticketStatusView::Home_ticketStatusView(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_ticketStatusView::~Home_ticketStatusView()
{

}

void
Home_ticketStatusView::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *4Key = "4";

    if(object.has_key(4Key))
    {
        bourne::json value = object[4Key];



        jsonToValue(&4, value, "std::string");


    }

    const char *5Key = "5";

    if(object.has_key(5Key))
    {
        bourne::json value = object[5Key];



        jsonToValue(&5, value, "std::string");


    }

    const char *6Key = "6";

    if(object.has_key(6Key))
    {
        bourne::json value = object[6Key];



        jsonToValue(&6, value, "std::string");


    }


}

bourne::json
Home_ticketStatusView::toJson()
{
    bourne::json object = bourne::json::object();





    object["4"] = get4();






    object["5"] = get5();






    object["6"] = get6();



    return object;

}

std::string
Home_ticketStatusView::get4()
{
	return 4;
}

void
Home_ticketStatusView::set4(std::string 4)
{
	this->4 = 4;
}

std::string
Home_ticketStatusView::get5()
{
	return 5;
}

void
Home_ticketStatusView::set5(std::string 5)
{
	this->5 = 5;
}

std::string
Home_ticketStatusView::get6()
{
	return 6;
}

void
Home_ticketStatusView::set6(std::string 6)
{
	this->6 = 6;
}



