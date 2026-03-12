#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home::Home()
{
	//__init();
}

Home::~Home()
{
	//__cleanup();
}

void
Home::__init()
{
	//last_login_ip = std::string();
	//last_login = std::string();
	//currency = std::string();
	//amount = std::string();
	//invoice_list = int(0);
	//balance = std::string();
	//full_name = std::string();
	//email = std::string();
	//new std::list()std::list> tickets;
	//ticketStatus = new Home_ticketStatus();
	//ticketStatusView = new Home_ticketStatusView();
	//details = new Home_details();
	//services = new Home_services();
	//aFFILIATE_AMOUNT = std::string();
}

void
Home::__cleanup()
{
	//if(last_login_ip != NULL) {
	//
	//delete last_login_ip;
	//last_login_ip = NULL;
	//}
	//if(last_login != NULL) {
	//
	//delete last_login;
	//last_login = NULL;
	//}
	//if(currency != NULL) {
	//
	//delete currency;
	//currency = NULL;
	//}
	//if(amount != NULL) {
	//
	//delete amount;
	//amount = NULL;
	//}
	//if(invoice_list != NULL) {
	//
	//delete invoice_list;
	//invoice_list = NULL;
	//}
	//if(balance != NULL) {
	//
	//delete balance;
	//balance = NULL;
	//}
	//if(full_name != NULL) {
	//
	//delete full_name;
	//full_name = NULL;
	//}
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//if(tickets != NULL) {
	//tickets.RemoveAll(true);
	//delete tickets;
	//tickets = NULL;
	//}
	//if(ticketStatus != NULL) {
	//
	//delete ticketStatus;
	//ticketStatus = NULL;
	//}
	//if(ticketStatusView != NULL) {
	//
	//delete ticketStatusView;
	//ticketStatusView = NULL;
	//}
	//if(details != NULL) {
	//
	//delete details;
	//details = NULL;
	//}
	//if(services != NULL) {
	//
	//delete services;
	//services = NULL;
	//}
	//if(aFFILIATE_AMOUNT != NULL) {
	//
	//delete aFFILIATE_AMOUNT;
	//aFFILIATE_AMOUNT = NULL;
	//}
	//
}

void
Home::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *last_login_ipKey = "last_login_ip";
	node = json_object_get_member(pJsonObject, last_login_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_login_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *last_loginKey = "last_login";
	node = json_object_get_member(pJsonObject, last_loginKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&last_login, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currencyKey = "currency";
	node = json_object_get_member(pJsonObject, currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *amountKey = "amount";
	node = json_object_get_member(pJsonObject, amountKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&amount, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoice_listKey = "invoice_list";
	node = json_object_get_member(pJsonObject, invoice_listKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_list, node, "int", "");
		} else {
			
		}
	}
	const gchar *balanceKey = "balance";
	node = json_object_get_member(pJsonObject, balanceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&balance, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *full_nameKey = "full_name";
	node = json_object_get_member(pJsonObject, full_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&full_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ticketsKey = "tickets";
	node = json_object_get_member(pJsonObject, ticketsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			tickets = new_list;
		}
		
	}
	const gchar *ticketStatusKey = "ticketStatus";
	node = json_object_get_member(pJsonObject, ticketStatusKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_ticketStatus")) {
			jsonToValue(&ticketStatus, node, "Home_ticketStatus", "Home_ticketStatus");
		} else {
			
			Home_ticketStatus* obj = static_cast<Home_ticketStatus*> (&ticketStatus);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ticketStatusViewKey = "ticketStatusView";
	node = json_object_get_member(pJsonObject, ticketStatusViewKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_ticketStatusView")) {
			jsonToValue(&ticketStatusView, node, "Home_ticketStatusView", "Home_ticketStatusView");
		} else {
			
			Home_ticketStatusView* obj = static_cast<Home_ticketStatusView*> (&ticketStatusView);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *detailsKey = "details";
	node = json_object_get_member(pJsonObject, detailsKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_details")) {
			jsonToValue(&details, node, "Home_details", "Home_details");
		} else {
			
			Home_details* obj = static_cast<Home_details*> (&details);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *servicesKey = "services";
	node = json_object_get_member(pJsonObject, servicesKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_services")) {
			jsonToValue(&services, node, "Home_services", "Home_services");
		} else {
			
			Home_services* obj = static_cast<Home_services*> (&services);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *aFFILIATE_AMOUNTKey = "AFFILIATE_AMOUNT";
	node = json_object_get_member(pJsonObject, aFFILIATE_AMOUNTKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&aFFILIATE_AMOUNT, node, "std::string", "");
		} else {
			
		}
	}
}

Home::Home(char* json)
{
	this->fromJson(json);
}

char*
Home::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLastLoginIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_login_ipKey = "last_login_ip";
	json_object_set_member(pJsonObject, last_login_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLastLogin();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *last_loginKey = "last_login";
	json_object_set_member(pJsonObject, last_loginKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencyKey = "currency";
	json_object_set_member(pJsonObject, currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAmount();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *amountKey = "amount";
	json_object_set_member(pJsonObject, amountKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceList();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_listKey = "invoice_list";
	json_object_set_member(pJsonObject, invoice_listKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBalance();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *balanceKey = "balance";
	json_object_set_member(pJsonObject, balanceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFullName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *full_nameKey = "full_name";
	json_object_set_member(pJsonObject, full_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTickets());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTickets());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *ticketsKey = "tickets";
	json_object_set_member(pJsonObject, ticketsKey, node);
	if (isprimitive("Home_ticketStatus")) {
		Home_ticketStatus obj = getTicketStatus();
		node = converttoJson(&obj, "Home_ticketStatus", "");
	}
	else {
		
		Home_ticketStatus obj = static_cast<Home_ticketStatus> (getTicketStatus());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ticketStatusKey = "ticketStatus";
	json_object_set_member(pJsonObject, ticketStatusKey, node);
	if (isprimitive("Home_ticketStatusView")) {
		Home_ticketStatusView obj = getTicketStatusView();
		node = converttoJson(&obj, "Home_ticketStatusView", "");
	}
	else {
		
		Home_ticketStatusView obj = static_cast<Home_ticketStatusView> (getTicketStatusView());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *ticketStatusViewKey = "ticketStatusView";
	json_object_set_member(pJsonObject, ticketStatusViewKey, node);
	if (isprimitive("Home_details")) {
		Home_details obj = getDetails();
		node = converttoJson(&obj, "Home_details", "");
	}
	else {
		
		Home_details obj = static_cast<Home_details> (getDetails());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *detailsKey = "details";
	json_object_set_member(pJsonObject, detailsKey, node);
	if (isprimitive("Home_services")) {
		Home_services obj = getServices();
		node = converttoJson(&obj, "Home_services", "");
	}
	else {
		
		Home_services obj = static_cast<Home_services> (getServices());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *servicesKey = "services";
	json_object_set_member(pJsonObject, servicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAFFILIATEAMOUNT();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *aFFILIATE_AMOUNTKey = "AFFILIATE_AMOUNT";
	json_object_set_member(pJsonObject, aFFILIATE_AMOUNTKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Home::getLastLoginIp()
{
	return last_login_ip;
}

void
Home::setLastLoginIp(std::string  last_login_ip)
{
	this->last_login_ip = last_login_ip;
}

std::string
Home::getLastLogin()
{
	return last_login;
}

void
Home::setLastLogin(std::string  last_login)
{
	this->last_login = last_login;
}

std::string
Home::getCurrency()
{
	return currency;
}

void
Home::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
Home::getAmount()
{
	return amount;
}

void
Home::setAmount(std::string  amount)
{
	this->amount = amount;
}

int
Home::getInvoiceList()
{
	return invoice_list;
}

void
Home::setInvoiceList(int  invoice_list)
{
	this->invoice_list = invoice_list;
}

std::string
Home::getBalance()
{
	return balance;
}

void
Home::setBalance(std::string  balance)
{
	this->balance = balance;
}

std::string
Home::getFullName()
{
	return full_name;
}

void
Home::setFullName(std::string  full_name)
{
	this->full_name = full_name;
}

std::string
Home::getEmail()
{
	return email;
}

void
Home::setEmail(std::string  email)
{
	this->email = email;
}

std::list<std::string>
Home::getTickets()
{
	return tickets;
}

void
Home::setTickets(std::list <std::string> tickets)
{
	this->tickets = tickets;
}

Home_ticketStatus
Home::getTicketStatus()
{
	return ticketStatus;
}

void
Home::setTicketStatus(Home_ticketStatus  ticketStatus)
{
	this->ticketStatus = ticketStatus;
}

Home_ticketStatusView
Home::getTicketStatusView()
{
	return ticketStatusView;
}

void
Home::setTicketStatusView(Home_ticketStatusView  ticketStatusView)
{
	this->ticketStatusView = ticketStatusView;
}

Home_details
Home::getDetails()
{
	return details;
}

void
Home::setDetails(Home_details  details)
{
	this->details = details;
}

Home_services
Home::getServices()
{
	return services;
}

void
Home::setServices(Home_services  services)
{
	this->services = services;
}

std::string
Home::getAFFILIATEAMOUNT()
{
	return aFFILIATE_AMOUNT;
}

void
Home::setAFFILIATEAMOUNT(std::string  aFFILIATE_AMOUNT)
{
	this->aFFILIATE_AMOUNT = aFFILIATE_AMOUNT;
}


