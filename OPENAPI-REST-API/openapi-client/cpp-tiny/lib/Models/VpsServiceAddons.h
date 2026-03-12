
/*
 * VpsServiceAddons.h
 *
 * Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 */

#ifndef TINY_CPP_CLIENT_VpsServiceAddons_H_
#define TINY_CPP_CLIENT_VpsServiceAddons_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
 *
 *  \ingroup Models
 *
 */

class VpsServiceAddons{
public:

    /*! \brief Constructor.
	 */
    VpsServiceAddons();
    VpsServiceAddons(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsServiceAddons();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether a cPanel license is active on this VPS.
	 */
	bool isHasCpanel();

	/*! \brief Set Whether a cPanel license is active on this VPS.
	 */
	void setHasCpanel(bool has_cpanel);
	/*! \brief Get Whether a DirectAdmin license is active on this VPS.
	 */
	bool isHasDirectadmin();

	/*! \brief Set Whether a DirectAdmin license is active on this VPS.
	 */
	void setHasDirectadmin(bool has_directadmin);
	/*! \brief Get Whether a Fantastico license is active on this VPS.
	 */
	bool isHasFantastico();

	/*! \brief Set Whether a Fantastico license is active on this VPS.
	 */
	void setHasFantastico(bool has_fantastico);
	/*! \brief Get Whether a Softaculous license is active on this VPS.
	 */
	bool isHasSoftaculous();

	/*! \brief Set Whether a Softaculous license is active on this VPS.
	 */
	void setHasSoftaculous(bool has_softaculous);
	/*! \brief Get Whether extra disk space has been added to this VPS.
	 */
	bool isHasHdspace();

	/*! \brief Set Whether extra disk space has been added to this VPS.
	 */
	void setHasHdspace(bool has_hdspace);
	/*! \brief Get Whether a dedicated IP address is assigned to this VPS.
	 */
	bool isDedicatedIp();

	/*! \brief Set Whether a dedicated IP address is assigned to this VPS.
	 */
	void setDedicatedIp(bool dedicated_ip);
	/*! \brief Get List of additional IPv4 addresses assigned to this VPS.
	 */
	std::list<std::string> getExtraIps();

	/*! \brief Set List of additional IPv4 addresses assigned to this VPS.
	 */
	void setExtraIps(std::list<std::string> extra_ips);
	/*! \brief Get List of additional IPv6 addresses assigned to this VPS.
	 */
	std::list<std::string> getExtraIps6();

	/*! \brief Set List of additional IPv6 addresses assigned to this VPS.
	 */
	void setExtraIps6(std::list<std::string> extra_ips6);
	/*! \brief Get List of IP addresses that have unpaid charges.
	 */
	std::list<std::string> getUnpaidIps();

	/*! \brief Set List of IP addresses that have unpaid charges.
	 */
	void setUnpaidIps(std::list<std::string> unpaid_ips);
	/*! \brief Get All IPv4 addresses assigned to this VPS.
	 */
	std::list<std::string> getIps();

	/*! \brief Set All IPv4 addresses assigned to this VPS.
	 */
	void setIps(std::list<std::string> ips);
	/*! \brief Get All IPv6 addresses assigned to this VPS.
	 */
	std::list<std::string> getIps6();

	/*! \brief Set All IPv6 addresses assigned to this VPS.
	 */
	void setIps6(std::list<std::string> ips6);
	/*! \brief Get The add-on service ID for the cPanel license.
	 */
	int getCpanelId();

	/*! \brief Set The add-on service ID for the cPanel license.
	 */
	void setCpanelId(int cpanel_id);
	/*! \brief Get Total monthly add-on cost in cents.
	 */
	int getCost();

	/*! \brief Set Total monthly add-on cost in cents.
	 */
	void setCost(int cost);
	/*! \brief Get List of add-on service IDs active on this VPS.
	 */
	std::list<std::string> getIds();

	/*! \brief Set List of add-on service IDs active on this VPS.
	 */
	void setIds(std::list<std::string> ids);
	/*! \brief Get Raw add-on data entries.
	 */
	std::list<std::string> getRdata();

	/*! \brief Set Raw add-on data entries.
	 */
	void setRdata(std::list<std::string> rdata);


    private:
    bool has_cpanel{};
    bool has_directadmin{};
    bool has_fantastico{};
    bool has_softaculous{};
    bool has_hdspace{};
    bool dedicated_ip{};
    std::list<std::string> extra_ips;
    std::list<std::string> extra_ips6;
    std::list<std::string> unpaid_ips;
    std::list<std::string> ips;
    std::list<std::string> ips6;
    int cpanel_id{};
    int cost{};
    std::list<std::string> ids;
    std::list<std::string> rdata;
};
}

#endif /* TINY_CPP_CLIENT_VpsServiceAddons_H_ */
