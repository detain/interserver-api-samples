
/*
 * ServerAsset.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerAsset_H_
#define TINY_CPP_CLIENT_ServerAsset_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AnyType.h"
#include "ServerLease.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerAsset{
public:

    /*! \brief Constructor.
	 */
    ServerAsset();
    ServerAsset(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerAsset();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique identifier for the asset.
	 */
	int getId();

	/*! \brief Set Unique identifier for the asset.
	 */
	void setId(int id);
	/*! \brief Get Order identifier for the asset.
	 */
	std::string getOrderId();

	/*! \brief Set Order identifier for the asset.
	 */
	void setOrderId(std::string order_id);
	/*! \brief Get Hostname associated with the asset.
	 */
	std::string getHostname();

	/*! \brief Set Hostname associated with the asset.
	 */
	void setHostname(std::string hostname);
	/*! \brief Get Status of the asset.
	 */
	std::string getStatus();

	/*! \brief Set Status of the asset.
	 */
	void setStatus(std::string status);
	/*! \brief Get Primary IPv4 address of the asset.
	 */
	std::string getPrimaryIpv4();

	/*! \brief Set Primary IPv4 address of the asset.
	 */
	void setPrimaryIpv4(std::string primary_ipv4);
	/*! \brief Get Primary IPv6 address of the asset.
	 */
	std::string getPrimaryIpv6();

	/*! \brief Set Primary IPv6 address of the asset.
	 */
	void setPrimaryIpv6(std::string primary_ipv6);
	/*! \brief Get Datacenter identifier for the asset.
	 */
	std::string getDatacenter();

	/*! \brief Set Datacenter identifier for the asset.
	 */
	void setDatacenter(std::string datacenter);
	/*! \brief Get Type identifier for the asset.
	 */
	std::string getTypeId();

	/*! \brief Set Type identifier for the asset.
	 */
	void setTypeId(std::string type_id);
	/*! \brief Get Asset tag associated with the asset.
	 */
	std::string getAssetTag();

	/*! \brief Set Asset tag associated with the asset.
	 */
	void setAssetTag(std::string asset_tag);
	/*! \brief Get Rack identifier for the asset.
	 */
	std::string getRack();

	/*! \brief Set Rack identifier for the asset.
	 */
	void setRack(std::string rack);
	/*! \brief Get Row identifier for the asset.
	 */
	std::string getRow();

	/*! \brief Set Row identifier for the asset.
	 */
	void setRow(std::string row);
	/*! \brief Get Column identifier for the asset.
	 */
	std::string getCol();

	/*! \brief Set Column identifier for the asset.
	 */
	void setCol(std::string col);
	/*! \brief Get Starting unit identifier for the asset.
	 */
	std::string getUnitStart();

	/*! \brief Set Starting unit identifier for the asset.
	 */
	void setUnitStart(std::string unit_start);
	/*! \brief Get Ending unit identifier for the asset.
	 */
	std::string getUnitEnd();

	/*! \brief Set Ending unit identifier for the asset.
	 */
	void setUnitEnd(std::string unit_end);
	/*! \brief Get Subunit identifier for the asset.
	 */
	std::string getUnitSub();

	/*! \brief Set Subunit identifier for the asset.
	 */
	void setUnitSub(std::string unit_sub);
	/*! \brief Get IPMI MAC address associated with the asset.
	 */
	std::string getIpmiMac();

	/*! \brief Set IPMI MAC address associated with the asset.
	 */
	void setIpmiMac(std::string ipmi_mac);
	/*! \brief Get IPMI IP address associated with the asset.
	 */
	std::string getIpmiIp();

	/*! \brief Set IPMI IP address associated with the asset.
	 */
	void setIpmiIp(std::string ipmi_ip);
	/*! \brief Get IPMI working status associated with the asset.
	 */
	std::string getIpmiWorking();

	/*! \brief Set IPMI working status associated with the asset.
	 */
	void setIpmiWorking(std::string ipmi_working);
	/*! \brief Get Company associated with the asset.
	 */
	std::string getCompany();

	/*! \brief Set Company associated with the asset.
	 */
	void setCompany(std::string company);
	/*! \brief Get Comments associated with the asset.
	 */
	std::string getComments();

	/*! \brief Set Comments associated with the asset.
	 */
	void setComments(std::string comments);
	/*! \brief Get Make of the asset.
	 */
	std::string getMake();

	/*! \brief Set Make of the asset.
	 */
	void setMake(std::string make);
	/*! \brief Get Model of the asset.
	 */
	std::string getModel();

	/*! \brief Set Model of the asset.
	 */
	void setModel(std::string model);
	/*! \brief Get Description of the asset.
	 */
	std::string getDescription();

	/*! \brief Set Description of the asset.
	 */
	void setDescription(std::string description);
	/*! \brief Get Customer identifier for the asset.
	 */
	std::string getCustomerId();

	/*! \brief Set Customer identifier for the asset.
	 */
	void setCustomerId(std::string customer_id);
	/*! \brief Get External identifier for the asset.
	 */
	std::string getExternalId();

	/*! \brief Set External identifier for the asset.
	 */
	void setExternalId(std::string external_id);
	/*! \brief Get Billing status of the asset.
	 */
	std::string getBillingStatus();

	/*! \brief Set Billing status of the asset.
	 */
	void setBillingStatus(std::string billing_status);
	/*! \brief Get Overdue status of the asset.
	 */
	std::string getOverdue();

	/*! \brief Set Overdue status of the asset.
	 */
	void setOverdue(std::string overdue);
	/*! \brief Get Asset identifier for the asset.
	 */
	std::string getAssetId();

	/*! \brief Set Asset identifier for the asset.
	 */
	void setAssetId(std::string asset_id);
	/*! \brief Get Name of the asset.
	 */
	std::string getAssetName();

	/*! \brief Set Name of the asset.
	 */
	void setAssetName(std::string asset_name);
	/*! \brief Get Rack identifier for the asset.
	 */
	std::string getRackId();

	/*! \brief Set Rack identifier for the asset.
	 */
	void setRackId(std::string rack_id);
	/*! \brief Get Rack name associated with the asset.
	 */
	std::string getRackName();

	/*! \brief Set Rack name associated with the asset.
	 */
	void setRackName(std::string rack_name);
	/*! \brief Get Location of the rack associated with the asset.
	 */
	std::string getRackLocation();

	/*! \brief Set Location of the rack associated with the asset.
	 */
	void setRackLocation(std::string rack_location);
	/*! \brief Get Size of the rack associated with the asset.
	 */
	std::string getRackSize();

	/*! \brief Set Size of the rack associated with the asset.
	 */
	void setRackSize(std::string rack_size);
	/*! \brief Get X-coordinate of the asset within the rack.
	 */
	std::string getRackX();

	/*! \brief Set X-coordinate of the asset within the rack.
	 */
	void setRackX(std::string rack_x);
	/*! \brief Get Y-coordinate of the asset within the rack.
	 */
	std::string getRackY();

	/*! \brief Set Y-coordinate of the asset within the rack.
	 */
	void setRackY(std::string rack_y);
	/*! \brief Get List of switchports associated with the asset.
	 */
	std::list<int> getSwitchports();

	/*! \brief Set List of switchports associated with the asset.
	 */
	void setSwitchports(std::list<int> switchports);
	/*! \brief Get List of VLANs associated with the asset.
	 */
	std::list<std::string> getVlans();

	/*! \brief Set List of VLANs associated with the asset.
	 */
	void setVlans(std::list<std::string> vlans);
	/*! \brief Get List of IPv6 VLANs associated with the asset.
	 */
	std::list<std::string> getVlans6();

	/*! \brief Set List of IPv6 VLANs associated with the asset.
	 */
	void setVlans6(std::list<std::string> vlans6);
	/*! \brief Get 
	 */
	ServerLease getLease();

	/*! \brief Set 
	 */
	void setLease(ServerLease lease);
	/*! \brief Get MAC address associated with the asset.
	 */
	AnyType getMac();

	/*! \brief Set MAC address associated with the asset.
	 */
	void setMac(AnyType mac);
	/*! \brief Get IPMI admin username associated with the asset.
	 */
	AnyType getIpmiAdminUsername();

	/*! \brief Set IPMI admin username associated with the asset.
	 */
	void setIpmiAdminUsername(AnyType ipmi_admin_username);
	/*! \brief Get IPMI admin password associated with the asset.
	 */
	AnyType getIpmiAdminPassword();

	/*! \brief Set IPMI admin password associated with the asset.
	 */
	void setIpmiAdminPassword(AnyType ipmi_admin_password);
	/*! \brief Get IPMI client username associated with the asset.
	 */
	AnyType getIpmiClientUsername();

	/*! \brief Set IPMI client username associated with the asset.
	 */
	void setIpmiClientUsername(AnyType ipmi_client_username);
	/*! \brief Get IPMI client password associated with the asset.
	 */
	AnyType getIpmiClientPassword();

	/*! \brief Set IPMI client password associated with the asset.
	 */
	void setIpmiClientPassword(AnyType ipmi_client_password);
	/*! \brief Get IPMI update status associated with the asset.
	 */
	AnyType getIpmiUpdated();

	/*! \brief Set IPMI update status associated with the asset.
	 */
	void setIpmiUpdated(AnyType ipmi_updated);
	/*! \brief Get Timestamp of asset creation.
	 */
	AnyType getCreateTimestamp();

	/*! \brief Set Timestamp of asset creation.
	 */
	void setCreateTimestamp(AnyType create_timestamp);
	/*! \brief Get Timestamp of asset update.
	 */
	AnyType getUpdateTimestamp();

	/*! \brief Set Timestamp of asset update.
	 */
	void setUpdateTimestamp(AnyType update_timestamp);
	/*! \brief Get Comment associated with the asset.
	 */
	AnyType getComment();

	/*! \brief Set Comment associated with the asset.
	 */
	void setComment(AnyType comment);


    private:
    int id{};
    std::string order_id{};
    std::string hostname{};
    std::string status{};
    std::string primary_ipv4{};
    std::string primary_ipv6{};
    std::string datacenter{};
    std::string type_id{};
    std::string asset_tag{};
    std::string rack{};
    std::string row{};
    std::string col{};
    std::string unit_start{};
    std::string unit_end{};
    std::string unit_sub{};
    std::string ipmi_mac{};
    std::string ipmi_ip{};
    std::string ipmi_working{};
    std::string company{};
    std::string comments{};
    std::string make{};
    std::string model{};
    std::string description{};
    std::string customer_id{};
    std::string external_id{};
    std::string billing_status{};
    std::string overdue{};
    std::string asset_id{};
    std::string asset_name{};
    std::string rack_id{};
    std::string rack_name{};
    std::string rack_location{};
    std::string rack_size{};
    std::string rack_x{};
    std::string rack_y{};
    std::list<int> switchports;
    std::list<std::string> vlans;
    std::list<std::string> vlans6;
    ServerLease lease;
    AnyType mac;
    AnyType ipmi_admin_username;
    AnyType ipmi_admin_password;
    AnyType ipmi_client_username;
    AnyType ipmi_client_password;
    AnyType ipmi_updated;
    AnyType create_timestamp;
    AnyType update_timestamp;
    AnyType comment;
};
}

#endif /* TINY_CPP_CLIENT_ServerAsset_H_ */
