

#include "HomeDetailsModulesQuickservers.h"

using namespace Tiny;

HomeDetailsModulesQuickservers::HomeDetailsModulesQuickservers()
{
	icon = std::string();
	view_link = std::string();
	heading = std::string();
	buy_link = std::string();
	list_link = std::string();
}

HomeDetailsModulesQuickservers::HomeDetailsModulesQuickservers(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeDetailsModulesQuickservers::~HomeDetailsModulesQuickservers()
{

}

void
HomeDetailsModulesQuickservers::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *iconKey = "icon";

    if(object.has_key(iconKey))
    {
        bourne::json value = object[iconKey];



        jsonToValue(&icon, value, "std::string");


    }

    const char *view_linkKey = "view_link";

    if(object.has_key(view_linkKey))
    {
        bourne::json value = object[view_linkKey];



        jsonToValue(&view_link, value, "std::string");


    }

    const char *headingKey = "heading";

    if(object.has_key(headingKey))
    {
        bourne::json value = object[headingKey];



        jsonToValue(&heading, value, "std::string");


    }

    const char *buy_linkKey = "buy_link";

    if(object.has_key(buy_linkKey))
    {
        bourne::json value = object[buy_linkKey];



        jsonToValue(&buy_link, value, "std::string");


    }

    const char *list_linkKey = "list_link";

    if(object.has_key(list_linkKey))
    {
        bourne::json value = object[list_linkKey];



        jsonToValue(&list_link, value, "std::string");


    }


}

bourne::json
HomeDetailsModulesQuickservers::toJson()
{
    bourne::json object = bourne::json::object();





    object["icon"] = getIcon();






    object["view_link"] = getViewLink();






    object["heading"] = getHeading();






    object["buy_link"] = getBuyLink();






    object["list_link"] = getListLink();



    return object;

}

std::string
HomeDetailsModulesQuickservers::getIcon()
{
	return icon;
}

void
HomeDetailsModulesQuickservers::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
HomeDetailsModulesQuickservers::getViewLink()
{
	return view_link;
}

void
HomeDetailsModulesQuickservers::setViewLink(std::string view_link)
{
	this->view_link = view_link;
}

std::string
HomeDetailsModulesQuickservers::getHeading()
{
	return heading;
}

void
HomeDetailsModulesQuickservers::setHeading(std::string heading)
{
	this->heading = heading;
}

std::string
HomeDetailsModulesQuickservers::getBuyLink()
{
	return buy_link;
}

void
HomeDetailsModulesQuickservers::setBuyLink(std::string buy_link)
{
	this->buy_link = buy_link;
}

std::string
HomeDetailsModulesQuickservers::getListLink()
{
	return list_link;
}

void
HomeDetailsModulesQuickservers::setListLink(std::string list_link)
{
	this->list_link = list_link;
}



