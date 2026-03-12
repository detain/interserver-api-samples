

#include "BackupOrderPutResponse.h"

using namespace Tiny;

BackupOrderPutResponse::BackupOrderPutResponse()
{
	r_continue = bool(false);
	errors = std::list<std::string>();
	serviceType = int(0);
	serviceCost = std::string();
	originalCost = std::string();
	repeatServiceCost = std::string();
	hostname = std::string();
	password = std::string();
	coupon = std::string();
	couponCode = int(0);
}

BackupOrderPutResponse::BackupOrderPutResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupOrderPutResponse::~BackupOrderPutResponse()
{

}

void
BackupOrderPutResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *r_continueKey = "continue";

    if(object.has_key(r_continueKey))
    {
        bourne::json value = object[r_continueKey];



        jsonToValue(&r_continue, value, "bool");


    }

    const char *errorsKey = "errors";

    if(object.has_key(errorsKey))
    {
        bourne::json value = object[errorsKey];


        std::list<std::string> errors_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            errors_list.push_back(element);
        }
        errors = errors_list;


    }

    const char *serviceTypeKey = "serviceType";

    if(object.has_key(serviceTypeKey))
    {
        bourne::json value = object[serviceTypeKey];



        jsonToValue(&serviceType, value, "int");


    }

    const char *serviceCostKey = "serviceCost";

    if(object.has_key(serviceCostKey))
    {
        bourne::json value = object[serviceCostKey];



        jsonToValue(&serviceCost, value, "std::string");


    }

    const char *originalCostKey = "originalCost";

    if(object.has_key(originalCostKey))
    {
        bourne::json value = object[originalCostKey];



        jsonToValue(&originalCost, value, "std::string");


    }

    const char *repeatServiceCostKey = "repeatServiceCost";

    if(object.has_key(repeatServiceCostKey))
    {
        bourne::json value = object[repeatServiceCostKey];



        jsonToValue(&repeatServiceCost, value, "std::string");


    }

    const char *hostnameKey = "hostname";

    if(object.has_key(hostnameKey))
    {
        bourne::json value = object[hostnameKey];



        jsonToValue(&hostname, value, "std::string");


    }

    const char *passwordKey = "password";

    if(object.has_key(passwordKey))
    {
        bourne::json value = object[passwordKey];



        jsonToValue(&password, value, "std::string");


    }

    const char *couponKey = "coupon";

    if(object.has_key(couponKey))
    {
        bourne::json value = object[couponKey];



        jsonToValue(&coupon, value, "std::string");


    }

    const char *couponCodeKey = "couponCode";

    if(object.has_key(couponCodeKey))
    {
        bourne::json value = object[couponCodeKey];



        jsonToValue(&couponCode, value, "int");


    }


}

bourne::json
BackupOrderPutResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["r_continue"] = isRContinue();





    std::list<std::string> errors_list = getErrors();
    bourne::json errors_arr = bourne::json::array();

    for(auto& var : errors_list)
    {
        errors_arr.append(var);
    }
    object["errors"] = errors_arr;









    object["serviceType"] = getServiceType();






    object["serviceCost"] = getServiceCost();






    object["originalCost"] = getOriginalCost();






    object["repeatServiceCost"] = getRepeatServiceCost();






    object["hostname"] = getHostname();






    object["password"] = getPassword();






    object["coupon"] = getCoupon();






    object["couponCode"] = getCouponCode();



    return object;

}

bool
BackupOrderPutResponse::isRContinue()
{
	return r_continue;
}

void
BackupOrderPutResponse::setRContinue(bool r_continue)
{
	this->r_continue = r_continue;
}

std::list<std::string>
BackupOrderPutResponse::getErrors()
{
	return errors;
}

void
BackupOrderPutResponse::setErrors(std::list<std::string> errors)
{
	this->errors = errors;
}

int
BackupOrderPutResponse::getServiceType()
{
	return serviceType;
}

void
BackupOrderPutResponse::setServiceType(int serviceType)
{
	this->serviceType = serviceType;
}

std::string
BackupOrderPutResponse::getServiceCost()
{
	return serviceCost;
}

void
BackupOrderPutResponse::setServiceCost(std::string serviceCost)
{
	this->serviceCost = serviceCost;
}

std::string
BackupOrderPutResponse::getOriginalCost()
{
	return originalCost;
}

void
BackupOrderPutResponse::setOriginalCost(std::string originalCost)
{
	this->originalCost = originalCost;
}

std::string
BackupOrderPutResponse::getRepeatServiceCost()
{
	return repeatServiceCost;
}

void
BackupOrderPutResponse::setRepeatServiceCost(std::string repeatServiceCost)
{
	this->repeatServiceCost = repeatServiceCost;
}

std::string
BackupOrderPutResponse::getHostname()
{
	return hostname;
}

void
BackupOrderPutResponse::setHostname(std::string hostname)
{
	this->hostname = hostname;
}

std::string
BackupOrderPutResponse::getPassword()
{
	return password;
}

void
BackupOrderPutResponse::setPassword(std::string password)
{
	this->password = password;
}

std::string
BackupOrderPutResponse::getCoupon()
{
	return coupon;
}

void
BackupOrderPutResponse::setCoupon(std::string coupon)
{
	this->coupon = coupon;
}

int
BackupOrderPutResponse::getCouponCode()
{
	return couponCode;
}

void
BackupOrderPutResponse::setCouponCode(int couponCode)
{
	this->couponCode = couponCode;
}



