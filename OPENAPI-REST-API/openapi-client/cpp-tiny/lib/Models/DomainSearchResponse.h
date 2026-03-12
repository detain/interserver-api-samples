
/*
 * DomainSearchResponse.h
 *
 * Lookup and suggestion results returned for a domain search.
 */

#ifndef TINY_CPP_CLIENT_DomainSearchResponse_H_
#define TINY_CPP_CLIENT_DomainSearchResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include <list>

namespace Tiny {


/*! \brief Lookup and suggestion results returned for a domain search.
 *
 *  \ingroup Models
 *
 */

class DomainSearchResponse{
public:

    /*! \brief Constructor.
	 */
    DomainSearchResponse();
    DomainSearchResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainSearchResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Indicates whether the registrar search succeeded.
	 */
	bool isSuccess();

	/*! \brief Set Indicates whether the registrar search succeeded.
	 */
	void setSuccess(bool success);
	/*! \brief Get Human-readable status text from the registrar.
	 */
	std::string getResponseText();

	/*! \brief Set Human-readable status text from the registrar.
	 */
	void setResponseText(std::string response_text);
	/*! \brief Get Response time as reported by the registrar.
	 */
	std::string getResponseTime();

	/*! \brief Set Response time as reported by the registrar.
	 */
	void setResponseTime(std::string response_time);
	/*! \brief Get Availability lookup results for queried domains.
	 */
	std::list<Object> getLookup();

	/*! \brief Set Availability lookup results for queried domains.
	 */
	void setLookup(std::list<Object> lookup);
	/*! \brief Get Suggested alternative domains and availability data.
	 */
	std::list<Object> getSuggest();

	/*! \brief Set Suggested alternative domains and availability data.
	 */
	void setSuggest(std::list<Object> suggest);
	/*! \brief Get TLDs evaluated during the search.
	 */
	std::list<std::string> getTlds();

	/*! \brief Set TLDs evaluated during the search.
	 */
	void setTlds(std::list<std::string> tlds);


    private:
    bool success{};
    std::string response_text{};
    std::string response_time{};
    std::list<Object> lookup;
    std::list<Object> suggest;
    std::list<std::string> tlds;
};
}

#endif /* TINY_CPP_CLIENT_DomainSearchResponse_H_ */
