

#include "WebsiteClientLink.h"

using namespace Tiny;

WebsiteClientLink::WebsiteClientLink()
{
	label = std::string();
	link = std::string();
	icon = std::string();
	icon_text = std::string();
	help_text = std::string();
	other_attr = std::string();
}

WebsiteClientLink::WebsiteClientLink(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteClientLink::~WebsiteClientLink()
{

}

void
WebsiteClientLink::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *labelKey = "label";

    if(object.has_key(labelKey))
    {
        bourne::json value = object[labelKey];



        jsonToValue(&label, value, "std::string");


    }

    const char *linkKey = "link";

    if(object.has_key(linkKey))
    {
        bourne::json value = object[linkKey];



        jsonToValue(&link, value, "std::string");


    }

    const char *iconKey = "icon";

    if(object.has_key(iconKey))
    {
        bourne::json value = object[iconKey];



        jsonToValue(&icon, value, "std::string");


    }

    const char *icon_textKey = "icon_text";

    if(object.has_key(icon_textKey))
    {
        bourne::json value = object[icon_textKey];



        jsonToValue(&icon_text, value, "std::string");


    }

    const char *help_textKey = "help_text";

    if(object.has_key(help_textKey))
    {
        bourne::json value = object[help_textKey];



        jsonToValue(&help_text, value, "std::string");


    }

    const char *other_attrKey = "other_attr";

    if(object.has_key(other_attrKey))
    {
        bourne::json value = object[other_attrKey];



        jsonToValue(&other_attr, value, "std::string");


    }


}

bourne::json
WebsiteClientLink::toJson()
{
    bourne::json object = bourne::json::object();





    object["label"] = getLabel();






    object["link"] = getLink();






    object["icon"] = getIcon();






    object["icon_text"] = getIconText();






    object["help_text"] = getHelpText();






    object["other_attr"] = getOtherAttr();



    return object;

}

std::string
WebsiteClientLink::getLabel()
{
	return label;
}

void
WebsiteClientLink::setLabel(std::string label)
{
	this->label = label;
}

std::string
WebsiteClientLink::getLink()
{
	return link;
}

void
WebsiteClientLink::setLink(std::string link)
{
	this->link = link;
}

std::string
WebsiteClientLink::getIcon()
{
	return icon;
}

void
WebsiteClientLink::setIcon(std::string icon)
{
	this->icon = icon;
}

std::string
WebsiteClientLink::getIconText()
{
	return icon_text;
}

void
WebsiteClientLink::setIconText(std::string icon_text)
{
	this->icon_text = icon_text;
}

std::string
WebsiteClientLink::getHelpText()
{
	return help_text;
}

void
WebsiteClientLink::setHelpText(std::string help_text)
{
	this->help_text = help_text;
}

std::string
WebsiteClientLink::getOtherAttr()
{
	return other_attr;
}

void
WebsiteClientLink::setOtherAttr(std::string other_attr)
{
	this->other_attr = other_attr;
}



