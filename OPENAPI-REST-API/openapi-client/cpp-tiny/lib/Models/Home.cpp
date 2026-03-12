

#include "Home.h"

using namespace Tiny;

Home::Home()
{
	last_login_ip = std::string();
	last_login = std::string();
	currency = std::string();
	amount = std::string();
	invoice_list = int(0);
	balance = std::string();
	full_name = std::string();
	email = std::string();
	tickets = std::list<std::string>();
	ticketStatus = Home_ticketStatus();
	ticketStatusView = Home_ticketStatusView();
	details = Home_details();
	services = Home_services();
	aFFILIATE_AMOUNT = std::string();
}

Home::Home(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home::~Home()
{

}

void
Home::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *last_login_ipKey = "last_login_ip";

    if(object.has_key(last_login_ipKey))
    {
        bourne::json value = object[last_login_ipKey];



        jsonToValue(&last_login_ip, value, "std::string");


    }

    const char *last_loginKey = "last_login";

    if(object.has_key(last_loginKey))
    {
        bourne::json value = object[last_loginKey];



        jsonToValue(&last_login, value, "std::string");


    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *amountKey = "amount";

    if(object.has_key(amountKey))
    {
        bourne::json value = object[amountKey];



        jsonToValue(&amount, value, "std::string");


    }

    const char *invoice_listKey = "invoice_list";

    if(object.has_key(invoice_listKey))
    {
        bourne::json value = object[invoice_listKey];



        jsonToValue(&invoice_list, value, "int");


    }

    const char *balanceKey = "balance";

    if(object.has_key(balanceKey))
    {
        bourne::json value = object[balanceKey];



        jsonToValue(&balance, value, "std::string");


    }

    const char *full_nameKey = "full_name";

    if(object.has_key(full_nameKey))
    {
        bourne::json value = object[full_nameKey];



        jsonToValue(&full_name, value, "std::string");


    }

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *ticketsKey = "tickets";

    if(object.has_key(ticketsKey))
    {
        bourne::json value = object[ticketsKey];


        std::list<std::string> tickets_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            tickets_list.push_back(element);
        }
        tickets = tickets_list;


    }

    const char *ticketStatusKey = "ticketStatus";

    if(object.has_key(ticketStatusKey))
    {
        bourne::json value = object[ticketStatusKey];




        Home_ticketStatus* obj = &ticketStatus;
		obj->fromJson(value.dump());

    }

    const char *ticketStatusViewKey = "ticketStatusView";

    if(object.has_key(ticketStatusViewKey))
    {
        bourne::json value = object[ticketStatusViewKey];




        Home_ticketStatusView* obj = &ticketStatusView;
		obj->fromJson(value.dump());

    }

    const char *detailsKey = "details";

    if(object.has_key(detailsKey))
    {
        bourne::json value = object[detailsKey];




        Home_details* obj = &details;
		obj->fromJson(value.dump());

    }

    const char *servicesKey = "services";

    if(object.has_key(servicesKey))
    {
        bourne::json value = object[servicesKey];




        Home_services* obj = &services;
		obj->fromJson(value.dump());

    }

    const char *aFFILIATE_AMOUNTKey = "AFFILIATE_AMOUNT";

    if(object.has_key(aFFILIATE_AMOUNTKey))
    {
        bourne::json value = object[aFFILIATE_AMOUNTKey];



        jsonToValue(&aFFILIATE_AMOUNT, value, "std::string");


    }


}

bourne::json
Home::toJson()
{
    bourne::json object = bourne::json::object();





    object["last_login_ip"] = getLastLoginIp();






    object["last_login"] = getLastLogin();






    object["currency"] = getCurrency();






    object["amount"] = getAmount();






    object["invoice_list"] = getInvoiceList();






    object["balance"] = getBalance();






    object["full_name"] = getFullName();






    object["email"] = getEmail();





    std::list<std::string> tickets_list = getTickets();
    bourne::json tickets_arr = bourne::json::array();

    for(auto& var : tickets_list)
    {
        tickets_arr.append(var);
    }
    object["tickets"] = tickets_arr;










	object["ticketStatus"] = getTicketStatus().toJson();






	object["ticketStatusView"] = getTicketStatusView().toJson();






	object["details"] = getDetails().toJson();






	object["services"] = getServices().toJson();





    object["aFFILIATE_AMOUNT"] = getAFFILIATEAMOUNT();



    return object;

}

std::string
Home::getLastLoginIp()
{
	return last_login_ip;
}

void
Home::setLastLoginIp(std::string last_login_ip)
{
	this->last_login_ip = last_login_ip;
}

std::string
Home::getLastLogin()
{
	return last_login;
}

void
Home::setLastLogin(std::string last_login)
{
	this->last_login = last_login;
}

std::string
Home::getCurrency()
{
	return currency;
}

void
Home::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
Home::getAmount()
{
	return amount;
}

void
Home::setAmount(std::string amount)
{
	this->amount = amount;
}

int
Home::getInvoiceList()
{
	return invoice_list;
}

void
Home::setInvoiceList(int invoice_list)
{
	this->invoice_list = invoice_list;
}

std::string
Home::getBalance()
{
	return balance;
}

void
Home::setBalance(std::string balance)
{
	this->balance = balance;
}

std::string
Home::getFullName()
{
	return full_name;
}

void
Home::setFullName(std::string full_name)
{
	this->full_name = full_name;
}

std::string
Home::getEmail()
{
	return email;
}

void
Home::setEmail(std::string email)
{
	this->email = email;
}

std::list<std::string>
Home::getTickets()
{
	return tickets;
}

void
Home::setTickets(std::list<std::string> tickets)
{
	this->tickets = tickets;
}

Home_ticketStatus
Home::getTicketStatus()
{
	return ticketStatus;
}

void
Home::setTicketStatus(Home_ticketStatus ticketStatus)
{
	this->ticketStatus = ticketStatus;
}

Home_ticketStatusView
Home::getTicketStatusView()
{
	return ticketStatusView;
}

void
Home::setTicketStatusView(Home_ticketStatusView ticketStatusView)
{
	this->ticketStatusView = ticketStatusView;
}

Home_details
Home::getDetails()
{
	return details;
}

void
Home::setDetails(Home_details details)
{
	this->details = details;
}

Home_services
Home::getServices()
{
	return services;
}

void
Home::setServices(Home_services services)
{
	this->services = services;
}

std::string
Home::getAFFILIATEAMOUNT()
{
	return aFFILIATE_AMOUNT;
}

void
Home::setAFFILIATEAMOUNT(std::string aFFILIATE_AMOUNT)
{
	this->aFFILIATE_AMOUNT = aFFILIATE_AMOUNT;
}



