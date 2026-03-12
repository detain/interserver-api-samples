

#include "WebsitesOrder_serviceOffers.h"

using namespace Tiny;

WebsitesOrder_serviceOffers::WebsitesOrder_serviceOffers()
{
	1026 = std::list<WebsitesOrderServiceOffer>();
}

WebsitesOrder_serviceOffers::WebsitesOrder_serviceOffers(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrder_serviceOffers::~WebsitesOrder_serviceOffers()
{

}

void
WebsitesOrder_serviceOffers::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *1026Key = "1026";

    if(object.has_key(1026Key))
    {
        bourne::json value = object[1026Key];


        std::list<WebsitesOrderServiceOffer> 1026_list;
        WebsitesOrderServiceOffer element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            1026_list.push_back(element);
        }
        1026 = 1026_list;


    }


}

bourne::json
WebsitesOrder_serviceOffers::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<WebsitesOrderServiceOffer> 1026_list = get1026();
    bourne::json 1026_arr = bourne::json::array();

    for(auto& var : 1026_list)
    {
        WebsitesOrderServiceOffer obj = var;
        1026_arr.append(obj.toJson());
    }
    object["1026"] = 1026_arr;




    return object;

}

std::list<WebsitesOrderServiceOffer>
WebsitesOrder_serviceOffers::get1026()
{
	return 1026;
}

void
WebsitesOrder_serviceOffers::set1026(std::list<WebsitesOrderServiceOffer> 1026)
{
	this->1026 = 1026;
}



