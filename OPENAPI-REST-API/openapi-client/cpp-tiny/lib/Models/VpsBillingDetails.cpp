

#include "VpsBillingDetails.h"

using namespace Tiny;

VpsBillingDetails::VpsBillingDetails()
{
	service_last_invoice_date = std::string();
	service_payment_status = std::string();
	service_frequency = std::string();
	next_date = std::string();
	service_next_invoice_date = std::string();
	service_currency = std::string();
	service_currency_symbol = std::string();
	service_coupon = std::string();
	service_cost_info = std::string();
	service_extra = VpsServiceExtra();
	service_extra_json = std::string();
}

VpsBillingDetails::VpsBillingDetails(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsBillingDetails::~VpsBillingDetails()
{

}

void
VpsBillingDetails::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *service_last_invoice_dateKey = "service_last_invoice_date";

    if(object.has_key(service_last_invoice_dateKey))
    {
        bourne::json value = object[service_last_invoice_dateKey];



        jsonToValue(&service_last_invoice_date, value, "std::string");


    }

    const char *service_payment_statusKey = "service_payment_status";

    if(object.has_key(service_payment_statusKey))
    {
        bourne::json value = object[service_payment_statusKey];



        jsonToValue(&service_payment_status, value, "std::string");


    }

    const char *service_frequencyKey = "service_frequency";

    if(object.has_key(service_frequencyKey))
    {
        bourne::json value = object[service_frequencyKey];



        jsonToValue(&service_frequency, value, "std::string");


    }

    const char *next_dateKey = "next_date";

    if(object.has_key(next_dateKey))
    {
        bourne::json value = object[next_dateKey];



        jsonToValue(&next_date, value, "std::string");


    }

    const char *service_next_invoice_dateKey = "service_next_invoice_date";

    if(object.has_key(service_next_invoice_dateKey))
    {
        bourne::json value = object[service_next_invoice_dateKey];



        jsonToValue(&service_next_invoice_date, value, "std::string");


    }

    const char *service_currencyKey = "service_currency";

    if(object.has_key(service_currencyKey))
    {
        bourne::json value = object[service_currencyKey];



        jsonToValue(&service_currency, value, "std::string");


    }

    const char *service_currency_symbolKey = "service_currency_symbol";

    if(object.has_key(service_currency_symbolKey))
    {
        bourne::json value = object[service_currency_symbolKey];



        jsonToValue(&service_currency_symbol, value, "std::string");


    }

    const char *service_couponKey = "service_coupon";

    if(object.has_key(service_couponKey))
    {
        bourne::json value = object[service_couponKey];



        jsonToValue(&service_coupon, value, "std::string");


    }

    const char *service_cost_infoKey = "service_cost_info";

    if(object.has_key(service_cost_infoKey))
    {
        bourne::json value = object[service_cost_infoKey];



        jsonToValue(&service_cost_info, value, "std::string");


    }

    const char *service_extraKey = "service_extra";

    if(object.has_key(service_extraKey))
    {
        bourne::json value = object[service_extraKey];




        VpsServiceExtra* obj = &service_extra;
		obj->fromJson(value.dump());

    }

    const char *service_extra_jsonKey = "service_extra_json";

    if(object.has_key(service_extra_jsonKey))
    {
        bourne::json value = object[service_extra_jsonKey];



        jsonToValue(&service_extra_json, value, "std::string");


    }


}

bourne::json
VpsBillingDetails::toJson()
{
    bourne::json object = bourne::json::object();





    object["service_last_invoice_date"] = getServiceLastInvoiceDate();






    object["service_payment_status"] = getServicePaymentStatus();






    object["service_frequency"] = getServiceFrequency();






    object["next_date"] = getNextDate();






    object["service_next_invoice_date"] = getServiceNextInvoiceDate();






    object["service_currency"] = getServiceCurrency();






    object["service_currency_symbol"] = getServiceCurrencySymbol();






    object["service_coupon"] = getServiceCoupon();






    object["service_cost_info"] = getServiceCostInfo();







	object["service_extra"] = getServiceExtra().toJson();





    object["service_extra_json"] = getServiceExtraJson();



    return object;

}

std::string
VpsBillingDetails::getServiceLastInvoiceDate()
{
	return service_last_invoice_date;
}

void
VpsBillingDetails::setServiceLastInvoiceDate(std::string service_last_invoice_date)
{
	this->service_last_invoice_date = service_last_invoice_date;
}

std::string
VpsBillingDetails::getServicePaymentStatus()
{
	return service_payment_status;
}

void
VpsBillingDetails::setServicePaymentStatus(std::string service_payment_status)
{
	this->service_payment_status = service_payment_status;
}

std::string
VpsBillingDetails::getServiceFrequency()
{
	return service_frequency;
}

void
VpsBillingDetails::setServiceFrequency(std::string service_frequency)
{
	this->service_frequency = service_frequency;
}

std::string
VpsBillingDetails::getNextDate()
{
	return next_date;
}

void
VpsBillingDetails::setNextDate(std::string next_date)
{
	this->next_date = next_date;
}

std::string
VpsBillingDetails::getServiceNextInvoiceDate()
{
	return service_next_invoice_date;
}

void
VpsBillingDetails::setServiceNextInvoiceDate(std::string service_next_invoice_date)
{
	this->service_next_invoice_date = service_next_invoice_date;
}

std::string
VpsBillingDetails::getServiceCurrency()
{
	return service_currency;
}

void
VpsBillingDetails::setServiceCurrency(std::string service_currency)
{
	this->service_currency = service_currency;
}

std::string
VpsBillingDetails::getServiceCurrencySymbol()
{
	return service_currency_symbol;
}

void
VpsBillingDetails::setServiceCurrencySymbol(std::string service_currency_symbol)
{
	this->service_currency_symbol = service_currency_symbol;
}

std::string
VpsBillingDetails::getServiceCoupon()
{
	return service_coupon;
}

void
VpsBillingDetails::setServiceCoupon(std::string service_coupon)
{
	this->service_coupon = service_coupon;
}

std::string
VpsBillingDetails::getServiceCostInfo()
{
	return service_cost_info;
}

void
VpsBillingDetails::setServiceCostInfo(std::string service_cost_info)
{
	this->service_cost_info = service_cost_info;
}

VpsServiceExtra
VpsBillingDetails::getServiceExtra()
{
	return service_extra;
}

void
VpsBillingDetails::setServiceExtra(VpsServiceExtra service_extra)
{
	this->service_extra = service_extra;
}

std::string
VpsBillingDetails::getServiceExtraJson()
{
	return service_extra_json;
}

void
VpsBillingDetails::setServiceExtraJson(std::string service_extra_json)
{
	this->service_extra_json = service_extra_json;
}



