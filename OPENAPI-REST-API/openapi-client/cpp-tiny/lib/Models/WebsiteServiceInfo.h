
/*
 * WebsiteServiceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WebsiteServiceInfo_H_
#define TINY_CPP_CLIENT_WebsiteServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsiteServiceInfo{
public:

    /*! \brief Constructor.
	 */
    WebsiteServiceInfo();
    WebsiteServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Website ID
	 */
	std::string getWebsiteId();

	/*! \brief Set Website ID
	 */
	void setWebsiteId(std::string website_id);
	/*! \brief Get Website server
	 */
	std::string getWebsiteServer();

	/*! \brief Set Website server
	 */
	void setWebsiteServer(std::string website_server);
	/*! \brief Get Website type
	 */
	std::string getWebsiteType();

	/*! \brief Set Website type
	 */
	void setWebsiteType(std::string website_type);
	/*! \brief Get Currency of the website
	 */
	std::string getWebsiteCurrency();

	/*! \brief Set Currency of the website
	 */
	void setWebsiteCurrency(std::string website_currency);
	/*! \brief Get Order date of the website
	 */
	std::string getWebsiteOrderDate();

	/*! \brief Set Order date of the website
	 */
	void setWebsiteOrderDate(std::string website_order_date);
	/*! \brief Get Customer ID of the website
	 */
	std::string getWebsiteCustid();

	/*! \brief Set Customer ID of the website
	 */
	void setWebsiteCustid(std::string website_custid);
	/*! \brief Get IP address of the website
	 */
	std::string getWebsiteIp();

	/*! \brief Set IP address of the website
	 */
	void setWebsiteIp(std::string website_ip);
	/*! \brief Get Status of the website
	 */
	std::string getWebsiteStatus();

	/*! \brief Set Status of the website
	 */
	void setWebsiteStatus(std::string website_status);
	/*! \brief Get Invoice of the website
	 */
	std::string getWebsiteInvoice();

	/*! \brief Set Invoice of the website
	 */
	void setWebsiteInvoice(std::string website_invoice);
	/*! \brief Get Coupon for the website
	 */
	std::string getWebsiteCoupon();

	/*! \brief Set Coupon for the website
	 */
	void setWebsiteCoupon(std::string website_coupon);
	/*! \brief Get Extra information in JSON format for the website
	 */
	std::string getWebsiteExtra();

	/*! \brief Set Extra information in JSON format for the website
	 */
	void setWebsiteExtra(std::string website_extra);
	/*! \brief Get Hostname of the website
	 */
	std::string getWebsiteHostname();

	/*! \brief Set Hostname of the website
	 */
	void setWebsiteHostname(std::string website_hostname);
	/*! \brief Get Comment for the website
	 */
	std::string getWebsiteComment();

	/*! \brief Set Comment for the website
	 */
	void setWebsiteComment(std::string website_comment);
	/*! \brief Get Username for the website
	 */
	std::string getWebsiteUsername();

	/*! \brief Set Username for the website
	 */
	void setWebsiteUsername(std::string website_username);
	/*! \brief Get Server status of the website
	 */
	std::string getWebsiteServerStatus();

	/*! \brief Set Server status of the website
	 */
	void setWebsiteServerStatus(std::string website_server_status);


    private:
    std::string website_id{};
    std::string website_server{};
    std::string website_type{};
    std::string website_currency{};
    std::string website_order_date{};
    std::string website_custid{};
    std::string website_ip{};
    std::string website_status{};
    std::string website_invoice{};
    std::string website_coupon{};
    std::string website_extra{};
    std::string website_hostname{};
    std::string website_comment{};
    std::string website_username{};
    std::string website_server_status{};
};
}

#endif /* TINY_CPP_CLIENT_WebsiteServiceInfo_H_ */
