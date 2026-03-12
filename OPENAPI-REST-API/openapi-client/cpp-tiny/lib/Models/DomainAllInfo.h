
/*
 * DomainAllInfo.h
 *
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 */

#ifndef TINY_CPP_CLIENT_DomainAllInfo_H_
#define TINY_CPP_CLIENT_DomainAllInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainAllInfo_attributes.h"

namespace Tiny {


/*! \brief Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 *
 *  \ingroup Models
 *
 */

class DomainAllInfo{
public:

    /*! \brief Constructor.
	 */
    DomainAllInfo();
    DomainAllInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainAllInfo();


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
	DomainAllInfo_attributes getAttributes();

	/*! \brief Set 
	 */
	void setAttributes(DomainAllInfo_attributes attributes);
	/*! \brief Get 
	 */
	std::string getObject();

	/*! \brief Set 
	 */
	void setObject(std::string object);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string protocol);
	/*! \brief Get 
	 */
	std::string getResponseText();

	/*! \brief Set 
	 */
	void setResponseText(std::string response_text);
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
	std::string getIsSuccess();

	/*! \brief Set 
	 */
	void setIsSuccess(std::string is_success);


    private:
    std::string _OPS_version{};
    DomainAllInfo_attributes attributes;
    std::string object{};
    std::string protocol{};
    std::string response_text{};
    std::string response_code{};
    std::string action{};
    std::string is_success{};
};
}

#endif /* TINY_CPP_CLIENT_DomainAllInfo_H_ */
