

#include "WebsiteExtraInfoTables.h"

using namespace Tiny;

WebsiteExtraInfoTables::WebsiteExtraInfoTables()
{
	links = WebsiteTable();
	preview = WebsiteTable();
	dns = WebsiteTable();
}

WebsiteExtraInfoTables::WebsiteExtraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteExtraInfoTables::~WebsiteExtraInfoTables()
{

}

void
WebsiteExtraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *linksKey = "links";

    if(object.has_key(linksKey))
    {
        bourne::json value = object[linksKey];




        WebsiteTable* obj = &links;
		obj->fromJson(value.dump());

    }

    const char *previewKey = "preview";

    if(object.has_key(previewKey))
    {
        bourne::json value = object[previewKey];




        WebsiteTable* obj = &preview;
		obj->fromJson(value.dump());

    }

    const char *dnsKey = "dns";

    if(object.has_key(dnsKey))
    {
        bourne::json value = object[dnsKey];




        WebsiteTable* obj = &dns;
		obj->fromJson(value.dump());

    }


}

bourne::json
WebsiteExtraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["links"] = getLinks().toJson();






	object["preview"] = getPreview().toJson();






	object["dns"] = getDns().toJson();


    return object;

}

WebsiteTable
WebsiteExtraInfoTables::getLinks()
{
	return links;
}

void
WebsiteExtraInfoTables::setLinks(WebsiteTable links)
{
	this->links = links;
}

WebsiteTable
WebsiteExtraInfoTables::getPreview()
{
	return preview;
}

void
WebsiteExtraInfoTables::setPreview(WebsiteTable preview)
{
	this->preview = preview;
}

WebsiteTable
WebsiteExtraInfoTables::getDns()
{
	return dns;
}

void
WebsiteExtraInfoTables::setDns(WebsiteTable dns)
{
	this->dns = dns;
}



