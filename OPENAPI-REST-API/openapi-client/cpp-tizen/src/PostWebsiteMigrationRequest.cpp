#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostWebsiteMigration_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostWebsiteMigration_request::PostWebsiteMigration_request()
{
	//__init();
}

PostWebsiteMigration_request::~PostWebsiteMigration_request()
{
	//__cleanup();
}

void
PostWebsiteMigration_request::__init()
{
	//custPortal = std::string();
	//regEmail = std::string();
	//password = std::string();
	//ctrlPanel = std::string();
	//ftpUsername = std::string();
	//ftpPassword = std::string();
	//siteBusyMig = std::string();
	//splReqMig = std::string();
	//domainReg = std::string();
	//dataMig = std::string();
	//domainRegPortal = std::string();
	//domainRegEmail = std::string();
	//domainRegPassword = std::string();
}

void
PostWebsiteMigration_request::__cleanup()
{
	//if(custPortal != NULL) {
	//
	//delete custPortal;
	//custPortal = NULL;
	//}
	//if(regEmail != NULL) {
	//
	//delete regEmail;
	//regEmail = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(ctrlPanel != NULL) {
	//
	//delete ctrlPanel;
	//ctrlPanel = NULL;
	//}
	//if(ftpUsername != NULL) {
	//
	//delete ftpUsername;
	//ftpUsername = NULL;
	//}
	//if(ftpPassword != NULL) {
	//
	//delete ftpPassword;
	//ftpPassword = NULL;
	//}
	//if(siteBusyMig != NULL) {
	//
	//delete siteBusyMig;
	//siteBusyMig = NULL;
	//}
	//if(splReqMig != NULL) {
	//
	//delete splReqMig;
	//splReqMig = NULL;
	//}
	//if(domainReg != NULL) {
	//
	//delete domainReg;
	//domainReg = NULL;
	//}
	//if(dataMig != NULL) {
	//
	//delete dataMig;
	//dataMig = NULL;
	//}
	//if(domainRegPortal != NULL) {
	//
	//delete domainRegPortal;
	//domainRegPortal = NULL;
	//}
	//if(domainRegEmail != NULL) {
	//
	//delete domainRegEmail;
	//domainRegEmail = NULL;
	//}
	//if(domainRegPassword != NULL) {
	//
	//delete domainRegPassword;
	//domainRegPassword = NULL;
	//}
	//
}

void
PostWebsiteMigration_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *custPortalKey = "custPortal";
	node = json_object_get_member(pJsonObject, custPortalKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custPortal, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *regEmailKey = "regEmail";
	node = json_object_get_member(pJsonObject, regEmailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&regEmail, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ctrlPanelKey = "ctrlPanel";
	node = json_object_get_member(pJsonObject, ctrlPanelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ctrlPanel, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ftpUsernameKey = "ftpUsername";
	node = json_object_get_member(pJsonObject, ftpUsernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ftpUsername, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *ftpPasswordKey = "ftpPassword";
	node = json_object_get_member(pJsonObject, ftpPasswordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ftpPassword, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *siteBusyMigKey = "siteBusyMig";
	node = json_object_get_member(pJsonObject, siteBusyMigKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&siteBusyMig, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *splReqMigKey = "splReqMig";
	node = json_object_get_member(pJsonObject, splReqMigKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&splReqMig, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domainRegKey = "domainReg";
	node = json_object_get_member(pJsonObject, domainRegKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domainReg, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *dataMigKey = "dataMig";
	node = json_object_get_member(pJsonObject, dataMigKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&dataMig, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domainRegPortalKey = "domainRegPortal";
	node = json_object_get_member(pJsonObject, domainRegPortalKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domainRegPortal, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domainRegEmailKey = "domainRegEmail";
	node = json_object_get_member(pJsonObject, domainRegEmailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domainRegEmail, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domainRegPasswordKey = "domainRegPassword";
	node = json_object_get_member(pJsonObject, domainRegPasswordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domainRegPassword, node, "std::string", "");
		} else {
			
		}
	}
}

PostWebsiteMigration_request::PostWebsiteMigration_request(char* json)
{
	this->fromJson(json);
}

char*
PostWebsiteMigration_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCustPortal();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custPortalKey = "custPortal";
	json_object_set_member(pJsonObject, custPortalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *regEmailKey = "regEmail";
	json_object_set_member(pJsonObject, regEmailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCtrlPanel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ctrlPanelKey = "ctrlPanel";
	json_object_set_member(pJsonObject, ctrlPanelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFtpUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ftpUsernameKey = "ftpUsername";
	json_object_set_member(pJsonObject, ftpUsernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFtpPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ftpPasswordKey = "ftpPassword";
	json_object_set_member(pJsonObject, ftpPasswordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSiteBusyMig();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *siteBusyMigKey = "siteBusyMig";
	json_object_set_member(pJsonObject, siteBusyMigKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSplReqMig();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *splReqMigKey = "splReqMig";
	json_object_set_member(pJsonObject, splReqMigKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainReg();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainRegKey = "domainReg";
	json_object_set_member(pJsonObject, domainRegKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDataMig();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dataMigKey = "dataMig";
	json_object_set_member(pJsonObject, dataMigKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainRegPortal();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainRegPortalKey = "domainRegPortal";
	json_object_set_member(pJsonObject, domainRegPortalKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainRegEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainRegEmailKey = "domainRegEmail";
	json_object_set_member(pJsonObject, domainRegEmailKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainRegPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainRegPasswordKey = "domainRegPassword";
	json_object_set_member(pJsonObject, domainRegPasswordKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PostWebsiteMigration_request::getCustPortal()
{
	return custPortal;
}

void
PostWebsiteMigration_request::setCustPortal(std::string  custPortal)
{
	this->custPortal = custPortal;
}

std::string
PostWebsiteMigration_request::getRegEmail()
{
	return regEmail;
}

void
PostWebsiteMigration_request::setRegEmail(std::string  regEmail)
{
	this->regEmail = regEmail;
}

std::string
PostWebsiteMigration_request::getPassword()
{
	return password;
}

void
PostWebsiteMigration_request::setPassword(std::string  password)
{
	this->password = password;
}

std::string
PostWebsiteMigration_request::getCtrlPanel()
{
	return ctrlPanel;
}

void
PostWebsiteMigration_request::setCtrlPanel(std::string  ctrlPanel)
{
	this->ctrlPanel = ctrlPanel;
}

std::string
PostWebsiteMigration_request::getFtpUsername()
{
	return ftpUsername;
}

void
PostWebsiteMigration_request::setFtpUsername(std::string  ftpUsername)
{
	this->ftpUsername = ftpUsername;
}

std::string
PostWebsiteMigration_request::getFtpPassword()
{
	return ftpPassword;
}

void
PostWebsiteMigration_request::setFtpPassword(std::string  ftpPassword)
{
	this->ftpPassword = ftpPassword;
}

std::string
PostWebsiteMigration_request::getSiteBusyMig()
{
	return siteBusyMig;
}

void
PostWebsiteMigration_request::setSiteBusyMig(std::string  siteBusyMig)
{
	this->siteBusyMig = siteBusyMig;
}

std::string
PostWebsiteMigration_request::getSplReqMig()
{
	return splReqMig;
}

void
PostWebsiteMigration_request::setSplReqMig(std::string  splReqMig)
{
	this->splReqMig = splReqMig;
}

std::string
PostWebsiteMigration_request::getDomainReg()
{
	return domainReg;
}

void
PostWebsiteMigration_request::setDomainReg(std::string  domainReg)
{
	this->domainReg = domainReg;
}

std::string
PostWebsiteMigration_request::getDataMig()
{
	return dataMig;
}

void
PostWebsiteMigration_request::setDataMig(std::string  dataMig)
{
	this->dataMig = dataMig;
}

std::string
PostWebsiteMigration_request::getDomainRegPortal()
{
	return domainRegPortal;
}

void
PostWebsiteMigration_request::setDomainRegPortal(std::string  domainRegPortal)
{
	this->domainRegPortal = domainRegPortal;
}

std::string
PostWebsiteMigration_request::getDomainRegEmail()
{
	return domainRegEmail;
}

void
PostWebsiteMigration_request::setDomainRegEmail(std::string  domainRegEmail)
{
	this->domainRegEmail = domainRegEmail;
}

std::string
PostWebsiteMigration_request::getDomainRegPassword()
{
	return domainRegPassword;
}

void
PostWebsiteMigration_request::setDomainRegPassword(std::string  domainRegPassword)
{
	this->domainRegPassword = domainRegPassword;
}


