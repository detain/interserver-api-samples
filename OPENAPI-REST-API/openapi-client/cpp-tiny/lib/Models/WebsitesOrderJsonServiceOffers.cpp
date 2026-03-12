

#include "WebsitesOrderJsonServiceOffers.h"

using namespace Tiny;

WebsitesOrderJsonServiceOffers::WebsitesOrderJsonServiceOffers()
{
	1026 = std::list<WebsitesOrderJsonServiceOffersItem>();
}

WebsitesOrderJsonServiceOffers::WebsitesOrderJsonServiceOffers(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsitesOrderJsonServiceOffers::~WebsitesOrderJsonServiceOffers()
{

}

void
WebsitesOrderJsonServiceOffers::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *1026Key = "1026";

    if(object.has_key(1026Key))
    {
        bourne::json value = object[1026Key];


        std::list<WebsitesOrderJsonServiceOffersItem> 1026_list;
        WebsitesOrderJsonServiceOffersItem element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            1026_list.push_back(element);
        }
        1026 = 1026_list;


    }


}

bourne::json
WebsitesOrderJsonServiceOffers::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<WebsitesOrderJsonServiceOffersItem> 1026_list = get1026();
    bourne::json 1026_arr = bourne::json::array();

    for(auto& var : 1026_list)
    {
        WebsitesOrderJsonServiceOffersItem obj = var;
        1026_arr.append(obj.toJson());
    }
    object["1026"] = 1026_arr;




    return object;

}

std::list<WebsitesOrderJsonServiceOffersItem>
WebsitesOrderJsonServiceOffers::get1026()
{
	return 1026;
}

void
WebsitesOrderJsonServiceOffers::set1026(std::list<WebsitesOrderJsonServiceOffersItem> 1026)
{
	this->1026 = 1026;
}



