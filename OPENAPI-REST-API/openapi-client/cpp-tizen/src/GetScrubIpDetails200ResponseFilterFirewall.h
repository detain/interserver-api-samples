/*
 * GetScrubIpDetails_200_response_filter_firewall.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_filter_firewall_H_
#define _GetScrubIpDetails_200_response_filter_firewall_H_


#include <string>
#include "GetScrubIpDetails_200_response_filter_firewall_filters_inner.h"
#include "GetScrubIpDetails_200_response_filter_firewall_rules_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_filter_firewall : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_filter_firewall();
	GetScrubIpDetails_200_response_filter_firewall(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_filter_firewall();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> getRules();

	/*! \brief Set 
	 */
	void setRules(std::list <GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules);
	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> getFilters();

	/*! \brief Set 
	 */
	void setFilters(std::list <GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters);
	/*! \brief Get 
	 */
	int getScrubEnabled();

	/*! \brief Set 
	 */
	void setScrubEnabled(int  scrub_enabled);

private:
	std::list <GetScrubIpDetails_200_response_filter_firewall_rules_inner>rules;
	std::list <GetScrubIpDetails_200_response_filter_firewall_filters_inner>filters;
	int scrub_enabled;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_filter_firewall_H_ */
