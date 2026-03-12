
/*
 * VpsRow.h
 *
 * A result row from the &#x60;Vps&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_VpsRow_H_
#define TINY_CPP_CLIENT_VpsRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Vps` `GET` request.
 *
 *  \ingroup Models
 *
 */

class VpsRow{
public:

    /*! \brief Constructor.
	 */
    VpsRow();
    VpsRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the vps.
	 */
	std::string getVpsId();

	/*! \brief Set The id of the vps.
	 */
	void setVpsId(std::string vps_id);
	/*! \brief Get The name of the vps.
	 */
	std::string getVpsName();

	/*! \brief Set The name of the vps.
	 */
	void setVpsName(std::string vps_name);
	/*! \brief Get The repeat invoices cost of the vps.
	 */
	std::string getRepeatInvoicesCost();

	/*! \brief Set The repeat invoices cost of the vps.
	 */
	void setRepeatInvoicesCost(std::string repeat_invoices_cost);
	/*! \brief Get The hostname of the vps.
	 */
	std::string getVpsHostname();

	/*! \brief Set The hostname of the vps.
	 */
	void setVpsHostname(std::string vps_hostname);
	/*! \brief Get The ip of the vps.
	 */
	std::string getVpsIp();

	/*! \brief Set The ip of the vps.
	 */
	void setVpsIp(std::string vps_ip);
	/*! \brief Get The status of the vps.
	 */
	std::string getVpsStatus();

	/*! \brief Set The status of the vps.
	 */
	void setVpsStatus(std::string vps_status);
	/*! \brief Get The services name of the vps.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the vps.
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get The comment of the vps.
	 */
	std::string getVpsComment();

	/*! \brief Set The comment of the vps.
	 */
	void setVpsComment(std::string vps_comment);


    private:
    std::string vps_id{};
    std::string vps_name{};
    std::string repeat_invoices_cost{};
    std::string vps_hostname{};
    std::string vps_ip{};
    std::string vps_status{};
    std::string services_name{};
    std::string vps_comment{};
};
}

#endif /* TINY_CPP_CLIENT_VpsRow_H_ */
