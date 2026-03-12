
/*
 * DomainProvProcessPending.h
 *
 * Provisioning status data for a pending domain order.
 */

#ifndef TINY_CPP_CLIENT_DomainProvProcessPending_H_
#define TINY_CPP_CLIENT_DomainProvProcessPending_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainProvProcessPending_attributes.h"

namespace Tiny {


/*! \brief Provisioning status data for a pending domain order.
 *
 *  \ingroup Models
 *
 */

class DomainProvProcessPending{
public:

    /*! \brief Constructor.
	 */
    DomainProvProcessPending();
    DomainProvProcessPending(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainProvProcessPending();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getOPSVersion();

	/*! \brief Set 
	 */
	void setOPSVersion(std::string _OPS_version);
	/*! \brief Get 
	 */
	std::string getResponseText();

	/*! \brief Set 
	 */
	void setResponseText(std::string response_text);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string protocol);
	/*! \brief Get 
	 */
	std::string getResponseCode();

	/*! \brief Set 
	 */
	void setResponseCode(std::string response_code);
	/*! \brief Get 
	 */
	std::string getAction();

	/*! \brief Set 
	 */
	void setAction(std::string action);
	/*! \brief Get 
	 */
	std::string getObject();

	/*! \brief Set 
	 */
	void setObject(std::string object);
	/*! \brief Get 
	 */
	std::string getIsSuccess();

	/*! \brief Set 
	 */
	void setIsSuccess(std::string is_success);
	/*! \brief Get 
	 */
	DomainProvProcessPending_attributes getAttributes();

	/*! \brief Set 
	 */
	void setAttributes(DomainProvProcessPending_attributes attributes);


    private:
    std::string _OPS_version{};
    std::string response_text{};
    std::string protocol{};
    std::string response_code{};
    std::string action{};
    std::string object{};
    std::string is_success{};
    DomainProvProcessPending_attributes attributes;
};
}

#endif /* TINY_CPP_CLIENT_DomainProvProcessPending_H_ */
