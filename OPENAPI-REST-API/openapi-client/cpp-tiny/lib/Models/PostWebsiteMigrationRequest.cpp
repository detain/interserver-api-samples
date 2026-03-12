

#include "PostWebsiteMigration_request.h"

using namespace Tiny;

PostWebsiteMigration_request::PostWebsiteMigration_request()
{
	custPortal = std::string();
	regEmail = std::string();
	password = std::string();
	ctrlPanel = std::string();
	ftpUsername = std::string();
	ftpPassword = std::string();
	siteBusyMig = std::string();
	splReqMig = std::string();
	domainReg = std::string();
	dataMig = std::string();
	domainRegPortal = std::string();
	domainRegEmail = std::string();
	domainRegPassword = std::string();
}

PostWebsiteMigration_request::PostWebsiteMigration_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostWebsiteMigration_request::~PostWebsiteMigration_request()
{

}

void
PostWebsiteMigration_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *custPortalKey = "custPortal";

    if(object.has_key(custPortalKey))
    {
        bourne::json value = object[custPortalKey];



        jsonToValue(&custPortal, value, "std::string");


    }

    const char *regEmailKey = "regEmail";

    if(object.has_key(regEmailKey))
    {
        bourne::json value = object[regEmailKey];



        jsonToValue(&regEmail, value, "std::string");


    }

    const char *passwordKey = "password";

    if(object.has_key(passwordKey))
    {
        bourne::json value = object[passwordKey];



        jsonToValue(&password, value, "std::string");


    }

    const char *ctrlPanelKey = "ctrlPanel";

    if(object.has_key(ctrlPanelKey))
    {
        bourne::json value = object[ctrlPanelKey];



        jsonToValue(&ctrlPanel, value, "std::string");


    }

    const char *ftpUsernameKey = "ftpUsername";

    if(object.has_key(ftpUsernameKey))
    {
        bourne::json value = object[ftpUsernameKey];



        jsonToValue(&ftpUsername, value, "std::string");


    }

    const char *ftpPasswordKey = "ftpPassword";

    if(object.has_key(ftpPasswordKey))
    {
        bourne::json value = object[ftpPasswordKey];



        jsonToValue(&ftpPassword, value, "std::string");


    }

    const char *siteBusyMigKey = "siteBusyMig";

    if(object.has_key(siteBusyMigKey))
    {
        bourne::json value = object[siteBusyMigKey];



        jsonToValue(&siteBusyMig, value, "std::string");


    }

    const char *splReqMigKey = "splReqMig";

    if(object.has_key(splReqMigKey))
    {
        bourne::json value = object[splReqMigKey];



        jsonToValue(&splReqMig, value, "std::string");


    }

    const char *domainRegKey = "domainReg";

    if(object.has_key(domainRegKey))
    {
        bourne::json value = object[domainRegKey];



        jsonToValue(&domainReg, value, "std::string");


    }

    const char *dataMigKey = "dataMig";

    if(object.has_key(dataMigKey))
    {
        bourne::json value = object[dataMigKey];



        jsonToValue(&dataMig, value, "std::string");


    }

    const char *domainRegPortalKey = "domainRegPortal";

    if(object.has_key(domainRegPortalKey))
    {
        bourne::json value = object[domainRegPortalKey];



        jsonToValue(&domainRegPortal, value, "std::string");


    }

    const char *domainRegEmailKey = "domainRegEmail";

    if(object.has_key(domainRegEmailKey))
    {
        bourne::json value = object[domainRegEmailKey];



        jsonToValue(&domainRegEmail, value, "std::string");


    }

    const char *domainRegPasswordKey = "domainRegPassword";

    if(object.has_key(domainRegPasswordKey))
    {
        bourne::json value = object[domainRegPasswordKey];



        jsonToValue(&domainRegPassword, value, "std::string");


    }


}

bourne::json
PostWebsiteMigration_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["custPortal"] = getCustPortal();






    object["regEmail"] = getRegEmail();






    object["password"] = getPassword();






    object["ctrlPanel"] = getCtrlPanel();






    object["ftpUsername"] = getFtpUsername();






    object["ftpPassword"] = getFtpPassword();






    object["siteBusyMig"] = getSiteBusyMig();






    object["splReqMig"] = getSplReqMig();






    object["domainReg"] = getDomainReg();






    object["dataMig"] = getDataMig();






    object["domainRegPortal"] = getDomainRegPortal();






    object["domainRegEmail"] = getDomainRegEmail();






    object["domainRegPassword"] = getDomainRegPassword();



    return object;

}

std::string
PostWebsiteMigration_request::getCustPortal()
{
	return custPortal;
}

void
PostWebsiteMigration_request::setCustPortal(std::string custPortal)
{
	this->custPortal = custPortal;
}

std::string
PostWebsiteMigration_request::getRegEmail()
{
	return regEmail;
}

void
PostWebsiteMigration_request::setRegEmail(std::string regEmail)
{
	this->regEmail = regEmail;
}

std::string
PostWebsiteMigration_request::getPassword()
{
	return password;
}

void
PostWebsiteMigration_request::setPassword(std::string password)
{
	this->password = password;
}

std::string
PostWebsiteMigration_request::getCtrlPanel()
{
	return ctrlPanel;
}

void
PostWebsiteMigration_request::setCtrlPanel(std::string ctrlPanel)
{
	this->ctrlPanel = ctrlPanel;
}

std::string
PostWebsiteMigration_request::getFtpUsername()
{
	return ftpUsername;
}

void
PostWebsiteMigration_request::setFtpUsername(std::string ftpUsername)
{
	this->ftpUsername = ftpUsername;
}

std::string
PostWebsiteMigration_request::getFtpPassword()
{
	return ftpPassword;
}

void
PostWebsiteMigration_request::setFtpPassword(std::string ftpPassword)
{
	this->ftpPassword = ftpPassword;
}

std::string
PostWebsiteMigration_request::getSiteBusyMig()
{
	return siteBusyMig;
}

void
PostWebsiteMigration_request::setSiteBusyMig(std::string siteBusyMig)
{
	this->siteBusyMig = siteBusyMig;
}

std::string
PostWebsiteMigration_request::getSplReqMig()
{
	return splReqMig;
}

void
PostWebsiteMigration_request::setSplReqMig(std::string splReqMig)
{
	this->splReqMig = splReqMig;
}

std::string
PostWebsiteMigration_request::getDomainReg()
{
	return domainReg;
}

void
PostWebsiteMigration_request::setDomainReg(std::string domainReg)
{
	this->domainReg = domainReg;
}

std::string
PostWebsiteMigration_request::getDataMig()
{
	return dataMig;
}

void
PostWebsiteMigration_request::setDataMig(std::string dataMig)
{
	this->dataMig = dataMig;
}

std::string
PostWebsiteMigration_request::getDomainRegPortal()
{
	return domainRegPortal;
}

void
PostWebsiteMigration_request::setDomainRegPortal(std::string domainRegPortal)
{
	this->domainRegPortal = domainRegPortal;
}

std::string
PostWebsiteMigration_request::getDomainRegEmail()
{
	return domainRegEmail;
}

void
PostWebsiteMigration_request::setDomainRegEmail(std::string domainRegEmail)
{
	this->domainRegEmail = domainRegEmail;
}

std::string
PostWebsiteMigration_request::getDomainRegPassword()
{
	return domainRegPassword;
}

void
PostWebsiteMigration_request::setDomainRegPassword(std::string domainRegPassword)
{
	this->domainRegPassword = domainRegPassword;
}



