

#include "SearchAutocompleteResponse.h"

using namespace Tiny;

SearchAutocompleteResponse::SearchAutocompleteResponse()
{
}

SearchAutocompleteResponse::SearchAutocompleteResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

SearchAutocompleteResponse::~SearchAutocompleteResponse()
{

}

void
SearchAutocompleteResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
SearchAutocompleteResponse::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



