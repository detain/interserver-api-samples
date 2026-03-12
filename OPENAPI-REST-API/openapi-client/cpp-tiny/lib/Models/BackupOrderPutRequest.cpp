

#include "BackupOrderPutRequest.h"

using namespace Tiny;

BackupOrderPutRequest::BackupOrderPutRequest()
{
	validateOnly = bool(false);
	serviceType = int(0);
	coupon = std::string();
}

BackupOrderPutRequest::BackupOrderPutRequest(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupOrderPutRequest::~BackupOrderPutRequest()
{

}

void
BackupOrderPutRequest::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *validateOnlyKey = "validateOnly";

    if(object.has_key(validateOnlyKey))
    {
        bourne::json value = object[validateOnlyKey];



        jsonToValue(&validateOnly, value, "bool");


    }

    const char *serviceTypeKey = "serviceType";

    if(object.has_key(serviceTypeKey))
    {
        bourne::json value = object[serviceTypeKey];



        jsonToValue(&serviceType, value, "int");


    }

    const char *couponKey = "coupon";

    if(object.has_key(couponKey))
    {
        bourne::json value = object[couponKey];



        jsonToValue(&coupon, value, "std::string");


    }


}

bourne::json
BackupOrderPutRequest::toJson()
{
    bourne::json object = bourne::json::object();





    object["validateOnly"] = isValidateOnly();






    object["serviceType"] = getServiceType();






    object["coupon"] = getCoupon();



    return object;

}

bool
BackupOrderPutRequest::isValidateOnly()
{
	return validateOnly;
}

void
BackupOrderPutRequest::setValidateOnly(bool validateOnly)
{
	this->validateOnly = validateOnly;
}

int
BackupOrderPutRequest::getServiceType()
{
	return serviceType;
}

void
BackupOrderPutRequest::setServiceType(int serviceType)
{
	this->serviceType = serviceType;
}

std::string
BackupOrderPutRequest::getCoupon()
{
	return coupon;
}

void
BackupOrderPutRequest::setCoupon(std::string coupon)
{
	this->coupon = coupon;
}



