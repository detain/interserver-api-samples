
/*
 * DomainProvProcessPending_attributes.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DomainProvProcessPending_attributes_H_
#define TINY_CPP_CLIENT_DomainProvProcessPending_attributes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainProvProcessPending_attributes{
public:

    /*! \brief Constructor.
	 */
    DomainProvProcessPending_attributes();
    DomainProvProcessPending_attributes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainProvProcessPending_attributes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string id);
	/*! \brief Get 
	 */
	std::string getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(std::string order_id);
	/*! \brief Get 
	 */
	std::string getRegistrationexpirationdate();

	/*! \brief Set 
	 */
	void setRegistrationexpirationdate(std::string registrationexpirationdate);
	/*! \brief Get 
	 */
	std::string getFAutoRenew();

	/*! \brief Set 
	 */
	void setFAutoRenew(std::string f_auto_renew);


    private:
    std::string id{};
    std::string order_id{};
    std::string registrationexpirationdate{};
    std::string f_auto_renew{};
};
}

#endif /* TINY_CPP_CLIENT_DomainProvProcessPending_attributes_H_ */
