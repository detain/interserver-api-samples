
/*
 * GetScrubIpDetails_200_response_serviceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_serviceInfo_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_serviceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_serviceInfo{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_serviceInfo();
    GetScrubIpDetails_200_response_serviceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_serviceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getScrubIpId();

	/*! \brief Set 
	 */
	void setScrubIpId(std::string scrub_ip_id);
	/*! \brief Get 
	 */
	std::string getScrubIpType();

	/*! \brief Set 
	 */
	void setScrubIpType(std::string scrub_ip_type);
	/*! \brief Get 
	 */
	std::string getScrubIpCustid();

	/*! \brief Set 
	 */
	void setScrubIpCustid(std::string scrub_ip_custid);
	/*! \brief Get 
	 */
	std::string getScrubIpOrderDate();

	/*! \brief Set 
	 */
	void setScrubIpOrderDate(std::string scrub_ip_order_date);
	/*! \brief Get 
	 */
	std::string getScrubIpIp();

	/*! \brief Set 
	 */
	void setScrubIpIp(std::string scrub_ip_ip);
	/*! \brief Get 
	 */
	std::string getScrubIpServiceId();

	/*! \brief Set 
	 */
	void setScrubIpServiceId(std::string scrub_ip_service_id);
	/*! \brief Get 
	 */
	std::string getScrubIpServiceModule();

	/*! \brief Set 
	 */
	void setScrubIpServiceModule(std::string scrub_ip_service_module);
	/*! \brief Get 
	 */
	std::string getScrubIpStatus();

	/*! \brief Set 
	 */
	void setScrubIpStatus(std::string scrub_ip_status);
	/*! \brief Get 
	 */
	std::string getScrubIpInvoice();

	/*! \brief Set 
	 */
	void setScrubIpInvoice(std::string scrub_ip_invoice);
	/*! \brief Get 
	 */
	std::string getScrubIpCurrency();

	/*! \brief Set 
	 */
	void setScrubIpCurrency(std::string scrub_ip_currency);
	/*! \brief Get 
	 */
	std::string getScrubIpCoupon();

	/*! \brief Set 
	 */
	void setScrubIpCoupon(std::string scrub_ip_coupon);
	/*! \brief Get 
	 */
	std::string getScrubIpComment();

	/*! \brief Set 
	 */
	void setScrubIpComment(std::string scrub_ip_comment);


    private:
    std::string scrub_ip_id{};
    std::string scrub_ip_type{};
    std::string scrub_ip_custid{};
    std::string scrub_ip_order_date{};
    std::string scrub_ip_ip{};
    std::string scrub_ip_service_id{};
    std::string scrub_ip_service_module{};
    std::string scrub_ip_status{};
    std::string scrub_ip_invoice{};
    std::string scrub_ip_currency{};
    std::string scrub_ip_coupon{};
    std::string scrub_ip_comment{};
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_serviceInfo_H_ */
