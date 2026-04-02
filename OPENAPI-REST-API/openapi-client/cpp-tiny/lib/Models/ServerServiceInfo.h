
/*
 * ServerServiceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerServiceInfo_H_
#define TINY_CPP_CLIENT_ServerServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerServiceInfo{
public:

    /*! \brief Constructor.
	 */
    ServerServiceInfo();
    ServerServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID of the server.
	 */
	std::string getServerId();

	/*! \brief Set The ID of the server.
	 */
	void setServerId(std::string server_id);
	/*! \brief Get The hostname of the server.
	 */
	std::string getServerHostname();

	/*! \brief Set The hostname of the server.
	 */
	void setServerHostname(std::string server_hostname);
	/*! \brief Get The customer ID associated with the server.
	 */
	std::string getServerCustid();

	/*! \brief Set The customer ID associated with the server.
	 */
	void setServerCustid(std::string server_custid);
	/*! \brief Get The type of the server.
	 */
	std::string getServerType();

	/*! \brief Set The type of the server.
	 */
	void setServerType(std::string server_type);
	/*! \brief Get The currency used for billing.
	 */
	std::string getServerCurrency();

	/*! \brief Set The currency used for billing.
	 */
	void setServerCurrency(std::string server_currency);
	/*! \brief Get The date when the server was ordered.
	 */
	std::string getServerOrderDate();

	/*! \brief Set The date when the server was ordered.
	 */
	void setServerOrderDate(std::string server_order_date);
	/*! \brief Get The invoice number for the server.
	 */
	std::string getServerInvoice();

	/*! \brief Set The invoice number for the server.
	 */
	void setServerInvoice(std::string server_invoice);
	/*! \brief Get The coupon associated with the server.
	 */
	std::string getServerCoupon();

	/*! \brief Set The coupon associated with the server.
	 */
	void setServerCoupon(std::string server_coupon);
	/*! \brief Get The status of the server.
	 */
	std::string getServerStatus();

	/*! \brief Set The status of the server.
	 */
	void setServerStatus(std::string server_status);
	/*! \brief Get The root of the server.
	 */
	std::string getServerRoot();

	/*! \brief Set The root of the server.
	 */
	void setServerRoot(std::string server_root);
	/*! \brief Get The dedicated tag of the server.
	 */
	std::string getServerDedicatedTag();

	/*! \brief Set The dedicated tag of the server.
	 */
	void setServerDedicatedTag(std::string server_dedicated_tag);
	/*! \brief Get The custom tag of the server.
	 */
	std::string getServerCustomTag();

	/*! \brief Set The custom tag of the server.
	 */
	void setServerCustomTag(std::string server_custom_tag);
	/*! \brief Get Comments related to the server.
	 */
	std::string getServerComment();

	/*! \brief Set Comments related to the server.
	 */
	void setServerComment(std::string server_comment);
	/*! \brief Get The initial billing amount for the server.
	 */
	std::string getServerInitialBill();

	/*! \brief Set The initial billing amount for the server.
	 */
	void setServerInitialBill(std::string server_initial_bill);
	/*! \brief Get The hardware information of the server.
	 */
	std::string getServerHardware();

	/*! \brief Set The hardware information of the server.
	 */
	void setServerHardware(std::string server_hardware);
	/*! \brief Get The number of IPs associated with the server.
	 */
	std::string getServerIps();

	/*! \brief Set The number of IPs associated with the server.
	 */
	void setServerIps(std::string server_ips);
	/*! \brief Get The monthly billing amount for the server.
	 */
	std::string getServerMonthlyBill();

	/*! \brief Set The monthly billing amount for the server.
	 */
	void setServerMonthlyBill(std::string server_monthly_bill);
	/*! \brief Get The setup status of the server.
	 */
	std::string getServerSetup();

	/*! \brief Set The setup status of the server.
	 */
	void setServerSetup(std::string server_setup);
	/*! \brief Get Discount information for the server.
	 */
	std::string getServerDiscount();

	/*! \brief Set Discount information for the server.
	 */
	void setServerDiscount(std::string server_discount);
	/*! \brief Get The reputation of the server.
	 */
	std::string getServerRep();

	/*! \brief Set The reputation of the server.
	 */
	void setServerRep(std::string server_rep);
	/*! \brief Get The date related to the server.
	 */
	std::string getServerDate();

	/*! \brief Set The date related to the server.
	 */
	void setServerDate(std::string server_date);
	/*! \brief Get The total cost of the server.
	 */
	std::string getServerTotalCost();

	/*! \brief Set The total cost of the server.
	 */
	void setServerTotalCost(std::string server_total_cost);
	/*! \brief Get The location of the server.
	 */
	std::string getServerLocation();

	/*! \brief Set The location of the server.
	 */
	void setServerLocation(std::string server_location);
	/*! \brief Get The ordered hardware for the server.
	 */
	std::string getServerHardwareOrdered();

	/*! \brief Set The ordered hardware for the server.
	 */
	void setServerHardwareOrdered(std::string server_hardware_ordered);
	/*! \brief Get The billed amount for the server.
	 */
	std::string getServerBilled();

	/*! \brief Set The billed amount for the server.
	 */
	void setServerBilled(std::string server_billed);
	/*! \brief Get Indicates whether a welcome email was sent.
	 */
	std::string getServerWelcomeEmail();

	/*! \brief Set Indicates whether a welcome email was sent.
	 */
	void setServerWelcomeEmail(std::string server_welcome_email);
	/*! \brief Get The number of dedicated CPUs for the server.
	 */
	std::string getServerDedicatedCpu();

	/*! \brief Set The number of dedicated CPUs for the server.
	 */
	void setServerDedicatedCpu(std::string server_dedicated_cpu);
	/*! \brief Get The amount of dedicated memory for the server.
	 */
	std::string getServerDedicatedMemory();

	/*! \brief Set The amount of dedicated memory for the server.
	 */
	void setServerDedicatedMemory(std::string server_dedicated_memory);
	/*! \brief Get The size of the first dedicated hard drive.
	 */
	std::string getServerDedicatedHd1();

	/*! \brief Set The size of the first dedicated hard drive.
	 */
	void setServerDedicatedHd1(std::string server_dedicated_hd1);
	/*! \brief Get The size of the second dedicated hard drive.
	 */
	std::string getServerDedicatedHd2();

	/*! \brief Set The size of the second dedicated hard drive.
	 */
	void setServerDedicatedHd2(std::string server_dedicated_hd2);
	/*! \brief Get The bandwidth of the server.
	 */
	std::string getServerDedicatedBandwidth();

	/*! \brief Set The bandwidth of the server.
	 */
	void setServerDedicatedBandwidth(std::string server_dedicated_bandwidth);
	/*! \brief Get The number of dedicated IPs for the server.
	 */
	std::string getServerDedicatedIps();

	/*! \brief Set The number of dedicated IPs for the server.
	 */
	void setServerDedicatedIps(std::string server_dedicated_ips);
	/*! \brief Get The operating system of the server.
	 */
	std::string getServerDedicatedOs();

	/*! \brief Set The operating system of the server.
	 */
	void setServerDedicatedOs(std::string server_dedicated_os);
	/*! \brief Get The control panel of the server.
	 */
	std::string getServerDedicatedCp();

	/*! \brief Set The control panel of the server.
	 */
	void setServerDedicatedCp(std::string server_dedicated_cp);
	/*! \brief Get The RAID configuration of the server.
	 */
	std::string getServerDedicatedRaid();

	/*! \brief Set The RAID configuration of the server.
	 */
	void setServerDedicatedRaid(std::string server_dedicated_raid);
	/*! \brief Get Additional information about the server.
	 */
	std::string getServerExtra();

	/*! \brief Set Additional information about the server.
	 */
	void setServerExtra(std::string server_extra);


    private:
    std::string server_id{};
    std::string server_hostname{};
    std::string server_custid{};
    std::string server_type{};
    std::string server_currency{};
    std::string server_order_date{};
    std::string server_invoice{};
    std::string server_coupon{};
    std::string server_status{};
    std::string server_root{};
    std::string server_dedicated_tag{};
    std::string server_custom_tag{};
    std::string server_comment{};
    std::string server_initial_bill{};
    std::string server_hardware{};
    std::string server_ips{};
    std::string server_monthly_bill{};
    std::string server_setup{};
    std::string server_discount{};
    std::string server_rep{};
    std::string server_date{};
    std::string server_total_cost{};
    std::string server_location{};
    std::string server_hardware_ordered{};
    std::string server_billed{};
    std::string server_welcome_email{};
    std::string server_dedicated_cpu{};
    std::string server_dedicated_memory{};
    std::string server_dedicated_hd1{};
    std::string server_dedicated_hd2{};
    std::string server_dedicated_bandwidth{};
    std::string server_dedicated_ips{};
    std::string server_dedicated_os{};
    std::string server_dedicated_cp{};
    std::string server_dedicated_raid{};
    std::string server_extra{};
};
}

#endif /* TINY_CPP_CLIENT_ServerServiceInfo_H_ */
