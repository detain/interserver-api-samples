

#include "AccountInfoData.h"

using namespace Tiny;

AccountInfoData::AccountInfoData()
{
	group = std::string();
	address = std::string();
	city = std::string();
	country = std::string();
	disable_cc = std::string();
	fraudrecord_score = std::string();
	ima = std::string();
	name = std::string();
	payment_method = std::string();
	phone = std::string();
	pin = std::string();
	state = std::string();
	status = std::string();
	zip = std::string();
	account_id = std::string();
	account_lid = std::string();
	address2 = std::string();
	affiliate_dock_description = std::string();
	affiliate_dock_title = std::string();
	affiliate_payment_method = std::string();
	affiliate_paypal = std::string();
	cc = std::string();
	cc_auto = std::string();
	cc_exp = std::string();
	cc_type = std::string();
	cc_whitelist = std::string();
	ccs = AccountInfoDataCcs();
	ccs_added = std::string();
	company = std::string();
	currency = std::string();
	disable_reinstall = std::string();
	disable_reset = std::string();
	email = std::string();
	email_abuse = std::string();
	email_settings = AccountInfoData_email_settings();
	extra = AccountInfoData_extra();
	facebook_id = std::string();
	facebook_url = std::string();
	firstname = std::string();
	fraudrecord = AccountInfoData_fraudrecord();
	github_id = std::string();
	github_url = std::string();
	google_id = std::string();
	google_url = std::string();
	innertell_id = std::string();
	lastname = std::string();
	locale = std::string();
	maxmind = AccountInfoMaxMindResponse();
	maxmind_score = std::string();
	mb_id = std::string();
	modernbill_id = std::string();
	picture = std::string();
	referrer_coupon = std::string();
	reseller_markup = std::string();
	username = std::string();
	ssh_key = std::string();
	ssh_key_wrapped = std::string();
	api_key = std::string();
	api_key_wrapped = std::string();
	2fa_google_key = std::string();
	2fa_google_enabled = bool(false);
	2fa_google = int(0);
	2fa_google_split = std::string();
	2fa_google_qr = std::string();
}

AccountInfoData::AccountInfoData(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoData::~AccountInfoData()
{

}

void
AccountInfoData::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *groupKey = "group";

    if(object.has_key(groupKey))
    {
        bourne::json value = object[groupKey];



        jsonToValue(&group, value, "std::string");


    }

    const char *addressKey = "address";

    if(object.has_key(addressKey))
    {
        bourne::json value = object[addressKey];



        jsonToValue(&address, value, "std::string");


    }

    const char *cityKey = "city";

    if(object.has_key(cityKey))
    {
        bourne::json value = object[cityKey];



        jsonToValue(&city, value, "std::string");


    }

    const char *countryKey = "country";

    if(object.has_key(countryKey))
    {
        bourne::json value = object[countryKey];



        jsonToValue(&country, value, "std::string");


    }

    const char *disable_ccKey = "disable_cc";

    if(object.has_key(disable_ccKey))
    {
        bourne::json value = object[disable_ccKey];



        jsonToValue(&disable_cc, value, "std::string");


    }

    const char *fraudrecord_scoreKey = "fraudrecord_score";

    if(object.has_key(fraudrecord_scoreKey))
    {
        bourne::json value = object[fraudrecord_scoreKey];



        jsonToValue(&fraudrecord_score, value, "std::string");


    }

    const char *imaKey = "ima";

    if(object.has_key(imaKey))
    {
        bourne::json value = object[imaKey];



        jsonToValue(&ima, value, "std::string");


    }

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *payment_methodKey = "payment_method";

    if(object.has_key(payment_methodKey))
    {
        bourne::json value = object[payment_methodKey];



        jsonToValue(&payment_method, value, "std::string");


    }

    const char *phoneKey = "phone";

    if(object.has_key(phoneKey))
    {
        bourne::json value = object[phoneKey];



        jsonToValue(&phone, value, "std::string");


    }

    const char *pinKey = "pin";

    if(object.has_key(pinKey))
    {
        bourne::json value = object[pinKey];



        jsonToValue(&pin, value, "std::string");


    }

    const char *stateKey = "state";

    if(object.has_key(stateKey))
    {
        bourne::json value = object[stateKey];



        jsonToValue(&state, value, "std::string");


    }

    const char *statusKey = "status";

    if(object.has_key(statusKey))
    {
        bourne::json value = object[statusKey];



        jsonToValue(&status, value, "std::string");


    }

    const char *zipKey = "zip";

    if(object.has_key(zipKey))
    {
        bourne::json value = object[zipKey];



        jsonToValue(&zip, value, "std::string");


    }

    const char *account_idKey = "account_id";

    if(object.has_key(account_idKey))
    {
        bourne::json value = object[account_idKey];



        jsonToValue(&account_id, value, "std::string");


    }

    const char *account_lidKey = "account_lid";

    if(object.has_key(account_lidKey))
    {
        bourne::json value = object[account_lidKey];



        jsonToValue(&account_lid, value, "std::string");


    }

    const char *address2Key = "address2";

    if(object.has_key(address2Key))
    {
        bourne::json value = object[address2Key];



        jsonToValue(&address2, value, "std::string");


    }

    const char *affiliate_dock_descriptionKey = "affiliate_dock_description";

    if(object.has_key(affiliate_dock_descriptionKey))
    {
        bourne::json value = object[affiliate_dock_descriptionKey];



        jsonToValue(&affiliate_dock_description, value, "std::string");


    }

    const char *affiliate_dock_titleKey = "affiliate_dock_title";

    if(object.has_key(affiliate_dock_titleKey))
    {
        bourne::json value = object[affiliate_dock_titleKey];



        jsonToValue(&affiliate_dock_title, value, "std::string");


    }

    const char *affiliate_payment_methodKey = "affiliate_payment_method";

    if(object.has_key(affiliate_payment_methodKey))
    {
        bourne::json value = object[affiliate_payment_methodKey];



        jsonToValue(&affiliate_payment_method, value, "std::string");


    }

    const char *affiliate_paypalKey = "affiliate_paypal";

    if(object.has_key(affiliate_paypalKey))
    {
        bourne::json value = object[affiliate_paypalKey];



        jsonToValue(&affiliate_paypal, value, "std::string");


    }

    const char *ccKey = "cc";

    if(object.has_key(ccKey))
    {
        bourne::json value = object[ccKey];



        jsonToValue(&cc, value, "std::string");


    }

    const char *cc_autoKey = "cc_auto";

    if(object.has_key(cc_autoKey))
    {
        bourne::json value = object[cc_autoKey];



        jsonToValue(&cc_auto, value, "std::string");


    }

    const char *cc_expKey = "cc_exp";

    if(object.has_key(cc_expKey))
    {
        bourne::json value = object[cc_expKey];



        jsonToValue(&cc_exp, value, "std::string");


    }

    const char *cc_typeKey = "cc_type";

    if(object.has_key(cc_typeKey))
    {
        bourne::json value = object[cc_typeKey];



        jsonToValue(&cc_type, value, "std::string");


    }

    const char *cc_whitelistKey = "cc_whitelist";

    if(object.has_key(cc_whitelistKey))
    {
        bourne::json value = object[cc_whitelistKey];



        jsonToValue(&cc_whitelist, value, "std::string");


    }

    const char *ccsKey = "ccs";

    if(object.has_key(ccsKey))
    {
        bourne::json value = object[ccsKey];




        AccountInfoDataCcs* obj = &ccs;
		obj->fromJson(value.dump());

    }

    const char *ccs_addedKey = "ccs_added";

    if(object.has_key(ccs_addedKey))
    {
        bourne::json value = object[ccs_addedKey];



        jsonToValue(&ccs_added, value, "std::string");


    }

    const char *companyKey = "company";

    if(object.has_key(companyKey))
    {
        bourne::json value = object[companyKey];



        jsonToValue(&company, value, "std::string");


    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *disable_reinstallKey = "disable_reinstall";

    if(object.has_key(disable_reinstallKey))
    {
        bourne::json value = object[disable_reinstallKey];



        jsonToValue(&disable_reinstall, value, "std::string");


    }

    const char *disable_resetKey = "disable_reset";

    if(object.has_key(disable_resetKey))
    {
        bourne::json value = object[disable_resetKey];



        jsonToValue(&disable_reset, value, "std::string");


    }

    const char *emailKey = "email";

    if(object.has_key(emailKey))
    {
        bourne::json value = object[emailKey];



        jsonToValue(&email, value, "std::string");


    }

    const char *email_abuseKey = "email_abuse";

    if(object.has_key(email_abuseKey))
    {
        bourne::json value = object[email_abuseKey];



        jsonToValue(&email_abuse, value, "std::string");


    }

    const char *email_settingsKey = "email_settings";

    if(object.has_key(email_settingsKey))
    {
        bourne::json value = object[email_settingsKey];




        AccountInfoData_email_settings* obj = &email_settings;
		obj->fromJson(value.dump());

    }

    const char *extraKey = "extra";

    if(object.has_key(extraKey))
    {
        bourne::json value = object[extraKey];




        AccountInfoData_extra* obj = &extra;
		obj->fromJson(value.dump());

    }

    const char *facebook_idKey = "facebook_id";

    if(object.has_key(facebook_idKey))
    {
        bourne::json value = object[facebook_idKey];



        jsonToValue(&facebook_id, value, "std::string");


    }

    const char *facebook_urlKey = "facebook_url";

    if(object.has_key(facebook_urlKey))
    {
        bourne::json value = object[facebook_urlKey];



        jsonToValue(&facebook_url, value, "std::string");


    }

    const char *firstnameKey = "firstname";

    if(object.has_key(firstnameKey))
    {
        bourne::json value = object[firstnameKey];



        jsonToValue(&firstname, value, "std::string");


    }

    const char *fraudrecordKey = "fraudrecord";

    if(object.has_key(fraudrecordKey))
    {
        bourne::json value = object[fraudrecordKey];




        AccountInfoData_fraudrecord* obj = &fraudrecord;
		obj->fromJson(value.dump());

    }

    const char *github_idKey = "github_id";

    if(object.has_key(github_idKey))
    {
        bourne::json value = object[github_idKey];



        jsonToValue(&github_id, value, "std::string");


    }

    const char *github_urlKey = "github_url";

    if(object.has_key(github_urlKey))
    {
        bourne::json value = object[github_urlKey];



        jsonToValue(&github_url, value, "std::string");


    }

    const char *google_idKey = "google_id";

    if(object.has_key(google_idKey))
    {
        bourne::json value = object[google_idKey];



        jsonToValue(&google_id, value, "std::string");


    }

    const char *google_urlKey = "google_url";

    if(object.has_key(google_urlKey))
    {
        bourne::json value = object[google_urlKey];



        jsonToValue(&google_url, value, "std::string");


    }

    const char *innertell_idKey = "innertell_id";

    if(object.has_key(innertell_idKey))
    {
        bourne::json value = object[innertell_idKey];



        jsonToValue(&innertell_id, value, "std::string");


    }

    const char *lastnameKey = "lastname";

    if(object.has_key(lastnameKey))
    {
        bourne::json value = object[lastnameKey];



        jsonToValue(&lastname, value, "std::string");


    }

    const char *localeKey = "locale";

    if(object.has_key(localeKey))
    {
        bourne::json value = object[localeKey];



        jsonToValue(&locale, value, "std::string");


    }

    const char *maxmindKey = "maxmind";

    if(object.has_key(maxmindKey))
    {
        bourne::json value = object[maxmindKey];




        AccountInfoMaxMindResponse* obj = &maxmind;
		obj->fromJson(value.dump());

    }

    const char *maxmind_scoreKey = "maxmind_score";

    if(object.has_key(maxmind_scoreKey))
    {
        bourne::json value = object[maxmind_scoreKey];



        jsonToValue(&maxmind_score, value, "std::string");


    }

    const char *mb_idKey = "mb_id";

    if(object.has_key(mb_idKey))
    {
        bourne::json value = object[mb_idKey];



        jsonToValue(&mb_id, value, "std::string");


    }

    const char *modernbill_idKey = "modernbill_id";

    if(object.has_key(modernbill_idKey))
    {
        bourne::json value = object[modernbill_idKey];



        jsonToValue(&modernbill_id, value, "std::string");


    }

    const char *pictureKey = "picture";

    if(object.has_key(pictureKey))
    {
        bourne::json value = object[pictureKey];



        jsonToValue(&picture, value, "std::string");


    }

    const char *referrer_couponKey = "referrer_coupon";

    if(object.has_key(referrer_couponKey))
    {
        bourne::json value = object[referrer_couponKey];



        jsonToValue(&referrer_coupon, value, "std::string");


    }

    const char *reseller_markupKey = "reseller_markup";

    if(object.has_key(reseller_markupKey))
    {
        bourne::json value = object[reseller_markupKey];



        jsonToValue(&reseller_markup, value, "std::string");


    }

    const char *usernameKey = "username";

    if(object.has_key(usernameKey))
    {
        bourne::json value = object[usernameKey];



        jsonToValue(&username, value, "std::string");


    }

    const char *ssh_keyKey = "ssh_key";

    if(object.has_key(ssh_keyKey))
    {
        bourne::json value = object[ssh_keyKey];



        jsonToValue(&ssh_key, value, "std::string");


    }

    const char *ssh_key_wrappedKey = "ssh_key_wrapped";

    if(object.has_key(ssh_key_wrappedKey))
    {
        bourne::json value = object[ssh_key_wrappedKey];



        jsonToValue(&ssh_key_wrapped, value, "std::string");


    }

    const char *api_keyKey = "api_key";

    if(object.has_key(api_keyKey))
    {
        bourne::json value = object[api_keyKey];



        jsonToValue(&api_key, value, "std::string");


    }

    const char *api_key_wrappedKey = "api_key_wrapped";

    if(object.has_key(api_key_wrappedKey))
    {
        bourne::json value = object[api_key_wrappedKey];



        jsonToValue(&api_key_wrapped, value, "std::string");


    }

    const char *2fa_google_keyKey = "2fa_google_key";

    if(object.has_key(2fa_google_keyKey))
    {
        bourne::json value = object[2fa_google_keyKey];



        jsonToValue(&2fa_google_key, value, "std::string");


    }

    const char *2fa_google_enabledKey = "2fa_google_enabled";

    if(object.has_key(2fa_google_enabledKey))
    {
        bourne::json value = object[2fa_google_enabledKey];



        jsonToValue(&2fa_google_enabled, value, "bool");


    }

    const char *2fa_googleKey = "2fa_google";

    if(object.has_key(2fa_googleKey))
    {
        bourne::json value = object[2fa_googleKey];



        jsonToValue(&2fa_google, value, "int");


    }

    const char *2fa_google_splitKey = "2fa_google_split";

    if(object.has_key(2fa_google_splitKey))
    {
        bourne::json value = object[2fa_google_splitKey];



        jsonToValue(&2fa_google_split, value, "std::string");


    }

    const char *2fa_google_qrKey = "2fa_google_qr";

    if(object.has_key(2fa_google_qrKey))
    {
        bourne::json value = object[2fa_google_qrKey];



        jsonToValue(&2fa_google_qr, value, "std::string");


    }


}

bourne::json
AccountInfoData::toJson()
{
    bourne::json object = bourne::json::object();





    object["group"] = getGroup();






    object["address"] = getAddress();






    object["city"] = getCity();






    object["country"] = getCountry();






    object["disable_cc"] = getDisableCc();






    object["fraudrecord_score"] = getFraudrecordScore();






    object["ima"] = getIma();






    object["name"] = getName();






    object["payment_method"] = getPaymentMethod();






    object["phone"] = getPhone();






    object["pin"] = getPin();






    object["state"] = getState();






    object["status"] = getStatus();






    object["zip"] = getZip();






    object["account_id"] = getAccountId();






    object["account_lid"] = getAccountLid();






    object["address2"] = getAddress2();






    object["affiliate_dock_description"] = getAffiliateDockDescription();






    object["affiliate_dock_title"] = getAffiliateDockTitle();






    object["affiliate_payment_method"] = getAffiliatePaymentMethod();






    object["affiliate_paypal"] = getAffiliatePaypal();






    object["cc"] = getCc();






    object["cc_auto"] = getCcAuto();






    object["cc_exp"] = getCcExp();






    object["cc_type"] = getCcType();






    object["cc_whitelist"] = getCcWhitelist();







	object["ccs"] = getCcs().toJson();





    object["ccs_added"] = getCcsAdded();






    object["company"] = getCompany();






    object["currency"] = getCurrency();






    object["disable_reinstall"] = getDisableReinstall();






    object["disable_reset"] = getDisableReset();






    object["email"] = getEmail();






    object["email_abuse"] = getEmailAbuse();







	object["email_settings"] = getEmailSettings().toJson();






	object["extra"] = getExtra().toJson();





    object["facebook_id"] = getFacebookId();






    object["facebook_url"] = getFacebookUrl();






    object["firstname"] = getFirstname();







	object["fraudrecord"] = getFraudrecord().toJson();





    object["github_id"] = getGithubId();






    object["github_url"] = getGithubUrl();






    object["google_id"] = getGoogleId();






    object["google_url"] = getGoogleUrl();






    object["innertell_id"] = getInnertellId();






    object["lastname"] = getLastname();






    object["locale"] = getLocale();







	object["maxmind"] = getMaxmind().toJson();





    object["maxmind_score"] = getMaxmindScore();






    object["mb_id"] = getMbId();






    object["modernbill_id"] = getModernbillId();






    object["picture"] = getPicture();






    object["referrer_coupon"] = getReferrerCoupon();






    object["reseller_markup"] = getResellerMarkup();






    object["username"] = getUsername();






    object["ssh_key"] = getSshKey();






    object["ssh_key_wrapped"] = getSshKeyWrapped();






    object["api_key"] = getApiKey();






    object["api_key_wrapped"] = getApiKeyWrapped();






    object["2fa_google_key"] = get2faGoogleKey();






    object["2fa_google_enabled"] = is2faGoogleEnabled();






    object["2fa_google"] = get2faGoogle();






    object["2fa_google_split"] = get2faGoogleSplit();






    object["2fa_google_qr"] = get2faGoogleQr();



    return object;

}

std::string
AccountInfoData::getGroup()
{
	return group;
}

void
AccountInfoData::setGroup(std::string group)
{
	this->group = group;
}

std::string
AccountInfoData::getAddress()
{
	return address;
}

void
AccountInfoData::setAddress(std::string address)
{
	this->address = address;
}

std::string
AccountInfoData::getCity()
{
	return city;
}

void
AccountInfoData::setCity(std::string city)
{
	this->city = city;
}

std::string
AccountInfoData::getCountry()
{
	return country;
}

void
AccountInfoData::setCountry(std::string country)
{
	this->country = country;
}

std::string
AccountInfoData::getDisableCc()
{
	return disable_cc;
}

void
AccountInfoData::setDisableCc(std::string disable_cc)
{
	this->disable_cc = disable_cc;
}

std::string
AccountInfoData::getFraudrecordScore()
{
	return fraudrecord_score;
}

void
AccountInfoData::setFraudrecordScore(std::string fraudrecord_score)
{
	this->fraudrecord_score = fraudrecord_score;
}

std::string
AccountInfoData::getIma()
{
	return ima;
}

void
AccountInfoData::setIma(std::string ima)
{
	this->ima = ima;
}

std::string
AccountInfoData::getName()
{
	return name;
}

void
AccountInfoData::setName(std::string name)
{
	this->name = name;
}

std::string
AccountInfoData::getPaymentMethod()
{
	return payment_method;
}

void
AccountInfoData::setPaymentMethod(std::string payment_method)
{
	this->payment_method = payment_method;
}

std::string
AccountInfoData::getPhone()
{
	return phone;
}

void
AccountInfoData::setPhone(std::string phone)
{
	this->phone = phone;
}

std::string
AccountInfoData::getPin()
{
	return pin;
}

void
AccountInfoData::setPin(std::string pin)
{
	this->pin = pin;
}

std::string
AccountInfoData::getState()
{
	return state;
}

void
AccountInfoData::setState(std::string state)
{
	this->state = state;
}

std::string
AccountInfoData::getStatus()
{
	return status;
}

void
AccountInfoData::setStatus(std::string status)
{
	this->status = status;
}

std::string
AccountInfoData::getZip()
{
	return zip;
}

void
AccountInfoData::setZip(std::string zip)
{
	this->zip = zip;
}

std::string
AccountInfoData::getAccountId()
{
	return account_id;
}

void
AccountInfoData::setAccountId(std::string account_id)
{
	this->account_id = account_id;
}

std::string
AccountInfoData::getAccountLid()
{
	return account_lid;
}

void
AccountInfoData::setAccountLid(std::string account_lid)
{
	this->account_lid = account_lid;
}

std::string
AccountInfoData::getAddress2()
{
	return address2;
}

void
AccountInfoData::setAddress2(std::string address2)
{
	this->address2 = address2;
}

std::string
AccountInfoData::getAffiliateDockDescription()
{
	return affiliate_dock_description;
}

void
AccountInfoData::setAffiliateDockDescription(std::string affiliate_dock_description)
{
	this->affiliate_dock_description = affiliate_dock_description;
}

std::string
AccountInfoData::getAffiliateDockTitle()
{
	return affiliate_dock_title;
}

void
AccountInfoData::setAffiliateDockTitle(std::string affiliate_dock_title)
{
	this->affiliate_dock_title = affiliate_dock_title;
}

std::string
AccountInfoData::getAffiliatePaymentMethod()
{
	return affiliate_payment_method;
}

void
AccountInfoData::setAffiliatePaymentMethod(std::string affiliate_payment_method)
{
	this->affiliate_payment_method = affiliate_payment_method;
}

std::string
AccountInfoData::getAffiliatePaypal()
{
	return affiliate_paypal;
}

void
AccountInfoData::setAffiliatePaypal(std::string affiliate_paypal)
{
	this->affiliate_paypal = affiliate_paypal;
}

std::string
AccountInfoData::getCc()
{
	return cc;
}

void
AccountInfoData::setCc(std::string cc)
{
	this->cc = cc;
}

std::string
AccountInfoData::getCcAuto()
{
	return cc_auto;
}

void
AccountInfoData::setCcAuto(std::string cc_auto)
{
	this->cc_auto = cc_auto;
}

std::string
AccountInfoData::getCcExp()
{
	return cc_exp;
}

void
AccountInfoData::setCcExp(std::string cc_exp)
{
	this->cc_exp = cc_exp;
}

std::string
AccountInfoData::getCcType()
{
	return cc_type;
}

void
AccountInfoData::setCcType(std::string cc_type)
{
	this->cc_type = cc_type;
}

std::string
AccountInfoData::getCcWhitelist()
{
	return cc_whitelist;
}

void
AccountInfoData::setCcWhitelist(std::string cc_whitelist)
{
	this->cc_whitelist = cc_whitelist;
}

AccountInfoDataCcs&lt;std::string, AccountInfoDataCc&gt;
AccountInfoData::getCcs()
{
	return ccs;
}

void
AccountInfoData::setCcs(AccountInfoDataCcs&lt;std::string, AccountInfoDataCc&gt; ccs)
{
	this->ccs = ccs;
}

std::string
AccountInfoData::getCcsAdded()
{
	return ccs_added;
}

void
AccountInfoData::setCcsAdded(std::string ccs_added)
{
	this->ccs_added = ccs_added;
}

std::string
AccountInfoData::getCompany()
{
	return company;
}

void
AccountInfoData::setCompany(std::string company)
{
	this->company = company;
}

std::string
AccountInfoData::getCurrency()
{
	return currency;
}

void
AccountInfoData::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
AccountInfoData::getDisableReinstall()
{
	return disable_reinstall;
}

void
AccountInfoData::setDisableReinstall(std::string disable_reinstall)
{
	this->disable_reinstall = disable_reinstall;
}

std::string
AccountInfoData::getDisableReset()
{
	return disable_reset;
}

void
AccountInfoData::setDisableReset(std::string disable_reset)
{
	this->disable_reset = disable_reset;
}

std::string
AccountInfoData::getEmail()
{
	return email;
}

void
AccountInfoData::setEmail(std::string email)
{
	this->email = email;
}

std::string
AccountInfoData::getEmailAbuse()
{
	return email_abuse;
}

void
AccountInfoData::setEmailAbuse(std::string email_abuse)
{
	this->email_abuse = email_abuse;
}

AccountInfoData_email_settings
AccountInfoData::getEmailSettings()
{
	return email_settings;
}

void
AccountInfoData::setEmailSettings(AccountInfoData_email_settings email_settings)
{
	this->email_settings = email_settings;
}

AccountInfoData_extra
AccountInfoData::getExtra()
{
	return extra;
}

void
AccountInfoData::setExtra(AccountInfoData_extra extra)
{
	this->extra = extra;
}

std::string
AccountInfoData::getFacebookId()
{
	return facebook_id;
}

void
AccountInfoData::setFacebookId(std::string facebook_id)
{
	this->facebook_id = facebook_id;
}

std::string
AccountInfoData::getFacebookUrl()
{
	return facebook_url;
}

void
AccountInfoData::setFacebookUrl(std::string facebook_url)
{
	this->facebook_url = facebook_url;
}

std::string
AccountInfoData::getFirstname()
{
	return firstname;
}

void
AccountInfoData::setFirstname(std::string firstname)
{
	this->firstname = firstname;
}

AccountInfoData_fraudrecord
AccountInfoData::getFraudrecord()
{
	return fraudrecord;
}

void
AccountInfoData::setFraudrecord(AccountInfoData_fraudrecord fraudrecord)
{
	this->fraudrecord = fraudrecord;
}

std::string
AccountInfoData::getGithubId()
{
	return github_id;
}

void
AccountInfoData::setGithubId(std::string github_id)
{
	this->github_id = github_id;
}

std::string
AccountInfoData::getGithubUrl()
{
	return github_url;
}

void
AccountInfoData::setGithubUrl(std::string github_url)
{
	this->github_url = github_url;
}

std::string
AccountInfoData::getGoogleId()
{
	return google_id;
}

void
AccountInfoData::setGoogleId(std::string google_id)
{
	this->google_id = google_id;
}

std::string
AccountInfoData::getGoogleUrl()
{
	return google_url;
}

void
AccountInfoData::setGoogleUrl(std::string google_url)
{
	this->google_url = google_url;
}

std::string
AccountInfoData::getInnertellId()
{
	return innertell_id;
}

void
AccountInfoData::setInnertellId(std::string innertell_id)
{
	this->innertell_id = innertell_id;
}

std::string
AccountInfoData::getLastname()
{
	return lastname;
}

void
AccountInfoData::setLastname(std::string lastname)
{
	this->lastname = lastname;
}

std::string
AccountInfoData::getLocale()
{
	return locale;
}

void
AccountInfoData::setLocale(std::string locale)
{
	this->locale = locale;
}

AccountInfoMaxMindResponse
AccountInfoData::getMaxmind()
{
	return maxmind;
}

void
AccountInfoData::setMaxmind(AccountInfoMaxMindResponse maxmind)
{
	this->maxmind = maxmind;
}

std::string
AccountInfoData::getMaxmindScore()
{
	return maxmind_score;
}

void
AccountInfoData::setMaxmindScore(std::string maxmind_score)
{
	this->maxmind_score = maxmind_score;
}

std::string
AccountInfoData::getMbId()
{
	return mb_id;
}

void
AccountInfoData::setMbId(std::string mb_id)
{
	this->mb_id = mb_id;
}

std::string
AccountInfoData::getModernbillId()
{
	return modernbill_id;
}

void
AccountInfoData::setModernbillId(std::string modernbill_id)
{
	this->modernbill_id = modernbill_id;
}

std::string
AccountInfoData::getPicture()
{
	return picture;
}

void
AccountInfoData::setPicture(std::string picture)
{
	this->picture = picture;
}

std::string
AccountInfoData::getReferrerCoupon()
{
	return referrer_coupon;
}

void
AccountInfoData::setReferrerCoupon(std::string referrer_coupon)
{
	this->referrer_coupon = referrer_coupon;
}

std::string
AccountInfoData::getResellerMarkup()
{
	return reseller_markup;
}

void
AccountInfoData::setResellerMarkup(std::string reseller_markup)
{
	this->reseller_markup = reseller_markup;
}

std::string
AccountInfoData::getUsername()
{
	return username;
}

void
AccountInfoData::setUsername(std::string username)
{
	this->username = username;
}

std::string
AccountInfoData::getSshKey()
{
	return ssh_key;
}

void
AccountInfoData::setSshKey(std::string ssh_key)
{
	this->ssh_key = ssh_key;
}

std::string
AccountInfoData::getSshKeyWrapped()
{
	return ssh_key_wrapped;
}

void
AccountInfoData::setSshKeyWrapped(std::string ssh_key_wrapped)
{
	this->ssh_key_wrapped = ssh_key_wrapped;
}

std::string
AccountInfoData::getApiKey()
{
	return api_key;
}

void
AccountInfoData::setApiKey(std::string api_key)
{
	this->api_key = api_key;
}

std::string
AccountInfoData::getApiKeyWrapped()
{
	return api_key_wrapped;
}

void
AccountInfoData::setApiKeyWrapped(std::string api_key_wrapped)
{
	this->api_key_wrapped = api_key_wrapped;
}

std::string
AccountInfoData::get2faGoogleKey()
{
	return 2fa_google_key;
}

void
AccountInfoData::set2faGoogleKey(std::string 2fa_google_key)
{
	this->2fa_google_key = 2fa_google_key;
}

bool
AccountInfoData::is2faGoogleEnabled()
{
	return 2fa_google_enabled;
}

void
AccountInfoData::set2faGoogleEnabled(bool 2fa_google_enabled)
{
	this->2fa_google_enabled = 2fa_google_enabled;
}

int
AccountInfoData::get2faGoogle()
{
	return 2fa_google;
}

void
AccountInfoData::set2faGoogle(int 2fa_google)
{
	this->2fa_google = 2fa_google;
}

std::string
AccountInfoData::get2faGoogleSplit()
{
	return 2fa_google_split;
}

void
AccountInfoData::set2faGoogleSplit(std::string 2fa_google_split)
{
	this->2fa_google_split = 2fa_google_split;
}

std::string
AccountInfoData::get2faGoogleQr()
{
	return 2fa_google_qr;
}

void
AccountInfoData::set2faGoogleQr(std::string 2fa_google_qr)
{
	this->2fa_google_qr = 2fa_google_qr;
}



