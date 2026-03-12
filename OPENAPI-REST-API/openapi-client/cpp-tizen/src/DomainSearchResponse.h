/*
 * DomainSearchResponse.h
 *
 * Lookup and suggestion results returned for a domain search.
 */

#ifndef _DomainSearchResponse_H_
#define _DomainSearchResponse_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Lookup and suggestion results returned for a domain search.
 *
 *  \ingroup Models
 *
 */

class DomainSearchResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainSearchResponse();
	DomainSearchResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainSearchResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Indicates whether the registrar search succeeded.
	 */
	bool getSuccess();

	/*! \brief Set Indicates whether the registrar search succeeded.
	 */
	void setSuccess(bool  success);
	/*! \brief Get Human-readable status text from the registrar.
	 */
	std::string getResponseText();

	/*! \brief Set Human-readable status text from the registrar.
	 */
	void setResponseText(std::string  response_text);
	/*! \brief Get Response time as reported by the registrar.
	 */
	std::string getResponseTime();

	/*! \brief Set Response time as reported by the registrar.
	 */
	void setResponseTime(std::string  response_time);
	/*! \brief Get Availability lookup results for queried domains.
	 */
	std::list<std::string> getLookup();

	/*! \brief Set Availability lookup results for queried domains.
	 */
	void setLookup(std::list <std::string> lookup);
	/*! \brief Get Suggested alternative domains and availability data.
	 */
	std::list<std::string> getSuggest();

	/*! \brief Set Suggested alternative domains and availability data.
	 */
	void setSuggest(std::list <std::string> suggest);
	/*! \brief Get TLDs evaluated during the search.
	 */
	std::list<std::string> getTlds();

	/*! \brief Set TLDs evaluated during the search.
	 */
	void setTlds(std::list <std::string> tlds);

private:
	bool success;
	std::string response_text;
	std::string response_time;
	std::list <std::string>lookup;
	std::list <std::string>suggest;
	std::list <std::string>tlds;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainSearchResponse_H_ */
