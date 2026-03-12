

#include "LoginInfo.h"

using namespace Tiny;

LoginInfo::LoginInfo()
{
	captcha = std::string();
	counts = LoginServiceCounts();
	logo = std::string();
	language = std::string();
}

LoginInfo::LoginInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginInfo::~LoginInfo()
{

}

void
LoginInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *captchaKey = "captcha";

    if(object.has_key(captchaKey))
    {
        bourne::json value = object[captchaKey];



        jsonToValue(&captcha, value, "std::string");


    }

    const char *countsKey = "counts";

    if(object.has_key(countsKey))
    {
        bourne::json value = object[countsKey];




        LoginServiceCounts* obj = &counts;
		obj->fromJson(value.dump());

    }

    const char *logoKey = "logo";

    if(object.has_key(logoKey))
    {
        bourne::json value = object[logoKey];



        jsonToValue(&logo, value, "std::string");


    }

    const char *languageKey = "language";

    if(object.has_key(languageKey))
    {
        bourne::json value = object[languageKey];



        jsonToValue(&language, value, "std::string");


    }


}

bourne::json
LoginInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["captcha"] = getCaptcha();







	object["counts"] = getCounts().toJson();





    object["logo"] = getLogo();






    object["language"] = getLanguage();



    return object;

}

std::string
LoginInfo::getCaptcha()
{
	return captcha;
}

void
LoginInfo::setCaptcha(std::string captcha)
{
	this->captcha = captcha;
}

LoginServiceCounts
LoginInfo::getCounts()
{
	return counts;
}

void
LoginInfo::setCounts(LoginServiceCounts counts)
{
	this->counts = counts;
}

std::string
LoginInfo::getLogo()
{
	return logo;
}

void
LoginInfo::setLogo(std::string logo)
{
	this->logo = logo;
}

std::string
LoginInfo::getLanguage()
{
	return language;
}

void
LoginInfo::setLanguage(std::string language)
{
	this->language = language;
}



