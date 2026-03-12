
/*
 * VpsServiceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsServiceInfo_H_
#define TINY_CPP_CLIENT_VpsServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AnyType.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsServiceInfo{
public:

    /*! \brief Constructor.
	 */
    VpsServiceInfo();
    VpsServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get VPS ID
	 */
	std::string getVpsId();

	/*! \brief Set VPS ID
	 */
	void setVpsId(std::string vps_id);
	/*! \brief Get Customer ID
	 */
	std::string getVpsCustid();

	/*! \brief Set Customer ID
	 */
	void setVpsCustid(std::string vps_custid);
	/*! \brief Get Server ID
	 */
	std::string getVpsServer();

	/*! \brief Set Server ID
	 */
	void setVpsServer(std::string vps_server);
	/*! \brief Get IP address of the VPS
	 */
	std::string getVpsIp();

	/*! \brief Set IP address of the VPS
	 */
	void setVpsIp(std::string vps_ip);
	/*! \brief Get IPv6 address of the VPS
	 */
	AnyType getVpsIpv6();

	/*! \brief Set IPv6 address of the VPS
	 */
	void setVpsIpv6(AnyType vps_ipv6);
	/*! \brief Get VPS Virtuozzo ID
	 */
	std::string getVpsVzid();

	/*! \brief Set VPS Virtuozzo ID
	 */
	void setVpsVzid(std::string vps_vzid);
	/*! \brief Get Currency used for billing
	 */
	std::string getVpsCurrency();

	/*! \brief Set Currency used for billing
	 */
	void setVpsCurrency(std::string vps_currency);
	/*! \brief Get VPS type
	 */
	std::string getVpsType();

	/*! \brief Set VPS type
	 */
	void setVpsType(std::string vps_type);
	/*! \brief Get Date of VPS order
	 */
	std::string getVpsOrderDate();

	/*! \brief Set Date of VPS order
	 */
	void setVpsOrderDate(std::string vps_order_date);
	/*! \brief Get VPS status
	 */
	std::string getVpsStatus();

	/*! \brief Set VPS status
	 */
	void setVpsStatus(std::string vps_status);
	/*! \brief Get VPS invoice number
	 */
	std::string getVpsInvoice();

	/*! \brief Set VPS invoice number
	 */
	void setVpsInvoice(std::string vps_invoice);
	/*! \brief Get VPS coupon code
	 */
	std::string getVpsCoupon();

	/*! \brief Set VPS coupon code
	 */
	void setVpsCoupon(std::string vps_coupon);
	/*! \brief Get Additional information about the VPS
	 */
	std::string getVpsExtra();

	/*! \brief Set Additional information about the VPS
	 */
	void setVpsExtra(std::string vps_extra);
	/*! \brief Get VPS hostname
	 */
	std::string getVpsHostname();

	/*! \brief Set VPS hostname
	 */
	void setVpsHostname(std::string vps_hostname);
	/*! \brief Get Status of the VPS server
	 */
	std::string getVpsServerStatus();

	/*! \brief Set Status of the VPS server
	 */
	void setVpsServerStatus(std::string vps_server_status);
	/*! \brief Get Comment associated with the VPS
	 */
	std::string getVpsComment();

	/*! \brief Set Comment associated with the VPS
	 */
	void setVpsComment(std::string vps_comment);
	/*! \brief Get Number of VPS slices
	 */
	std::string getVpsSlices();

	/*! \brief Set Number of VPS slices
	 */
	void setVpsSlices(std::string vps_slices);
	/*! \brief Get VNC address
	 */
	std::string getVpsVnc();

	/*! \brief Set VNC address
	 */
	void setVpsVnc(std::string vps_vnc);
	/*! \brief Get VNC port
	 */
	std::string getVpsVncPort();

	/*! \brief Set VNC port
	 */
	void setVpsVncPort(std::string vps_vnc_port);
	/*! \brief Get Root password of the VPS
	 */
	std::string getVpsRootpass();

	/*! \brief Set Root password of the VPS
	 */
	void setVpsRootpass(std::string vps_rootpass);
	/*! \brief Get MAC address of the VPS
	 */
	std::string getVpsMac();

	/*! \brief Set MAC address of the VPS
	 */
	void setVpsMac(std::string vps_mac);
	/*! \brief Get Operating system of the VPS
	 */
	std::string getVpsOs();

	/*! \brief Set Operating system of the VPS
	 */
	void setVpsOs(std::string vps_os);
	/*! \brief Get Version of the operating system
	 */
	std::string getVpsVersion();

	/*! \brief Set Version of the operating system
	 */
	void setVpsVersion(std::string vps_version);
	/*! \brief Get Location of the VPS
	 */
	std::string getVpsLocation();

	/*! \brief Set Location of the VPS
	 */
	void setVpsLocation(std::string vps_location);
	/*! \brief Get Virtualization platform
	 */
	std::string getVpsPlatform();

	/*! \brief Set Virtualization platform
	 */
	void setVpsPlatform(std::string vps_platform);
	/*! \brief Get Amount of disk space used
	 */
	std::string getVpsDiskused();

	/*! \brief Set Amount of disk space used
	 */
	void setVpsDiskused(std::string vps_diskused);
	/*! \brief Get Maximum disk space available
	 */
	std::string getVpsDiskmax();

	/*! \brief Set Maximum disk space available
	 */
	void setVpsDiskmax(std::string vps_diskmax);


    private:
    std::string vps_id{};
    std::string vps_custid{};
    std::string vps_server{};
    std::string vps_ip{};
    AnyType vps_ipv6;
    std::string vps_vzid{};
    std::string vps_currency{};
    std::string vps_type{};
    std::string vps_order_date{};
    std::string vps_status{};
    std::string vps_invoice{};
    std::string vps_coupon{};
    std::string vps_extra{};
    std::string vps_hostname{};
    std::string vps_server_status{};
    std::string vps_comment{};
    std::string vps_slices{};
    std::string vps_vnc{};
    std::string vps_vnc_port{};
    std::string vps_rootpass{};
    std::string vps_mac{};
    std::string vps_os{};
    std::string vps_version{};
    std::string vps_location{};
    std::string vps_platform{};
    std::string vps_diskused{};
    std::string vps_diskmax{};
};
}

#endif /* TINY_CPP_CLIENT_VpsServiceInfo_H_ */
