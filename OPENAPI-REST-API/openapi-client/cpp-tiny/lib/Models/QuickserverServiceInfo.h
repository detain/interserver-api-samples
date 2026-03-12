
/*
 * QuickserverServiceInfo.h
 *
 * Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 */

#ifndef TINY_CPP_CLIENT_QuickserverServiceInfo_H_
#define TINY_CPP_CLIENT_QuickserverServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AnyType.h"

namespace Tiny {


/*! \brief Core service record for a QuickServer including ID, status, IP, OS, and billing details.
 *
 *  \ingroup Models
 *
 */

class QuickserverServiceInfo{
public:

    /*! \brief Constructor.
	 */
    QuickserverServiceInfo();
    QuickserverServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Quickserver ID
	 */
	std::string getQsId();

	/*! \brief Set Quickserver ID
	 */
	void setQsId(std::string qs_id);
	/*! \brief Get Customer ID
	 */
	std::string getQsCustid();

	/*! \brief Set Customer ID
	 */
	void setQsCustid(std::string qs_custid);
	/*! \brief Get Server information
	 */
	std::string getQsServer();

	/*! \brief Set Server information
	 */
	void setQsServer(std::string qs_server);
	/*! \brief Get IP address
	 */
	std::string getQsIp();

	/*! \brief Set IP address
	 */
	void setQsIp(std::string qs_ip);
	/*! \brief Get IPv6 address (null)
	 */
	AnyType getQsIpv6();

	/*! \brief Set IPv6 address (null)
	 */
	void setQsIpv6(AnyType qs_ipv6);
	/*! \brief Get VZ ID
	 */
	std::string getQsVzid();

	/*! \brief Set VZ ID
	 */
	void setQsVzid(std::string qs_vzid);
	/*! \brief Get Currency
	 */
	std::string getQsCurrency();

	/*! \brief Set Currency
	 */
	void setQsCurrency(std::string qs_currency);
	/*! \brief Get Type
	 */
	std::string getQsType();

	/*! \brief Set Type
	 */
	void setQsType(std::string qs_type);
	/*! \brief Get Order date
	 */
	std::string getQsOrderDate();

	/*! \brief Set Order date
	 */
	void setQsOrderDate(std::string qs_order_date);
	/*! \brief Get Status
	 */
	std::string getQsStatus();

	/*! \brief Set Status
	 */
	void setQsStatus(std::string qs_status);
	/*! \brief Get Invoice number
	 */
	std::string getQsInvoice();

	/*! \brief Set Invoice number
	 */
	void setQsInvoice(std::string qs_invoice);
	/*! \brief Get Coupon information
	 */
	std::string getQsCoupon();

	/*! \brief Set Coupon information
	 */
	void setQsCoupon(std::string qs_coupon);
	/*! \brief Get Extra information
	 */
	std::string getQsExtra();

	/*! \brief Set Extra information
	 */
	void setQsExtra(std::string qs_extra);
	/*! \brief Get Hostname
	 */
	std::string getQsHostname();

	/*! \brief Set Hostname
	 */
	void setQsHostname(std::string qs_hostname);
	/*! \brief Get Server status
	 */
	std::string getQsServerStatus();

	/*! \brief Set Server status
	 */
	void setQsServerStatus(std::string qs_server_status);
	/*! \brief Get Comment
	 */
	std::string getQsComment();

	/*! \brief Set Comment
	 */
	void setQsComment(std::string qs_comment);
	/*! \brief Get Slices information
	 */
	std::string getQsSlices();

	/*! \brief Set Slices information
	 */
	void setQsSlices(std::string qs_slices);
	/*! \brief Get VNC information
	 */
	std::string getQsVnc();

	/*! \brief Set VNC information
	 */
	void setQsVnc(std::string qs_vnc);
	/*! \brief Get VNC port (null)
	 */
	AnyType getQsVncPort();

	/*! \brief Set VNC port (null)
	 */
	void setQsVncPort(AnyType qs_vnc_port);
	/*! \brief Get Root password
	 */
	std::string getQsRootpass();

	/*! \brief Set Root password
	 */
	void setQsRootpass(std::string qs_rootpass);
	/*! \brief Get MAC address
	 */
	std::string getQsMac();

	/*! \brief Set MAC address
	 */
	void setQsMac(std::string qs_mac);
	/*! \brief Get Operating system
	 */
	std::string getQsOs();

	/*! \brief Set Operating system
	 */
	void setQsOs(std::string qs_os);
	/*! \brief Get OS version
	 */
	std::string getQsVersion();

	/*! \brief Set OS version
	 */
	void setQsVersion(std::string qs_version);
	/*! \brief Get Location
	 */
	std::string getQsLocation();

	/*! \brief Set Location
	 */
	void setQsLocation(std::string qs_location);
	/*! \brief Get Platform (null)
	 */
	AnyType getQsPlatform();

	/*! \brief Set Platform (null)
	 */
	void setQsPlatform(AnyType qs_platform);


    private:
    std::string qs_id{};
    std::string qs_custid{};
    std::string qs_server{};
    std::string qs_ip{};
    AnyType qs_ipv6;
    std::string qs_vzid{};
    std::string qs_currency{};
    std::string qs_type{};
    std::string qs_order_date{};
    std::string qs_status{};
    std::string qs_invoice{};
    std::string qs_coupon{};
    std::string qs_extra{};
    std::string qs_hostname{};
    std::string qs_server_status{};
    std::string qs_comment{};
    std::string qs_slices{};
    std::string qs_vnc{};
    AnyType qs_vnc_port;
    std::string qs_rootpass{};
    std::string qs_mac{};
    std::string qs_os{};
    std::string qs_version{};
    std::string qs_location{};
    AnyType qs_platform;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverServiceInfo_H_ */
