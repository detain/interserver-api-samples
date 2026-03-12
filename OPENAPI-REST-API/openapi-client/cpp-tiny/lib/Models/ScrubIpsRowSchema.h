
/*
 * ScrubIpsRowSchema.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ScrubIpsRowSchema_H_
#define TINY_CPP_CLIENT_ScrubIpsRowSchema_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ScrubIpsRowSchema{
public:

    /*! \brief Constructor.
	 */
    ScrubIpsRowSchema();
    ScrubIpsRowSchema(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ScrubIpsRowSchema();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getScrubIpId();

	/*! \brief Set 
	 */
	void setScrubIpId(int scrub_ip_id);
	/*! \brief Get 
	 */
	long getRepeatInvoicesCost();

	/*! \brief Set 
	 */
	void setRepeatInvoicesCost(long repeat_invoices_cost);
	/*! \brief Get 
	 */
	std::string getScrubIpIp();

	/*! \brief Set 
	 */
	void setScrubIpIp(std::string scrub_ip_ip);
	/*! \brief Get 
	 */
	std::string getScrubIpStatus();

	/*! \brief Set 
	 */
	void setScrubIpStatus(std::string scrub_ip_status);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string services_name);


    private:
    int scrub_ip_id{};
    long repeat_invoices_cost{};
    std::string scrub_ip_ip{};
    std::string scrub_ip_status{};
    std::string services_name{};
};
}

#endif /* TINY_CPP_CLIENT_ScrubIpsRowSchema_H_ */
