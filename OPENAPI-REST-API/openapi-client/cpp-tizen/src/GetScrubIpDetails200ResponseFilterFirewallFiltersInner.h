/*
 * GetScrubIpDetails_200_response_filter_firewall_filters_inner.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_
#define _GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_


#include <string>
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

class GetScrubIpDetails_200_response_filter_firewall_filters_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_filter_firewall_filters_inner();
	GetScrubIpDetails_200_response_filter_firewall_filters_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_filter_firewall_filters_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDaddr();

	/*! \brief Set 
	 */
	void setDaddr(std::string  daddr);
	/*! \brief Get 
	 */
	std::string getDest();

	/*! \brief Set 
	 */
	void setDest(std::string  dest);
	/*! \brief Get 
	 */
	std::string getFilterName();

	/*! \brief Set 
	 */
	void setFilterName(std::string  filter_name);
	/*! \brief Get 
	 */
	std::string getDestinationIp();

	/*! \brief Set 
	 */
	void setDestinationIp(std::string  destination_ip);
	/*! \brief Get 
	 */
	std::string getFilter();

	/*! \brief Set 
	 */
	void setFilter(std::string  filter);

private:
	std::string daddr;
	std::string dest;
	std::string filter_name;
	std::string destination_ip;
	std::string filter;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_ */
