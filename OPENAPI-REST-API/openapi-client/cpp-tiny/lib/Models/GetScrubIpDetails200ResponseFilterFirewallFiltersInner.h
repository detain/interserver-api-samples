
/*
 * GetScrubIpDetails_200_response_filter_firewall_filters_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_filter_firewall_filters_inner{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_filter_firewall_filters_inner();
    GetScrubIpDetails_200_response_filter_firewall_filters_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_filter_firewall_filters_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getDaddr();

	/*! \brief Set 
	 */
	void setDaddr(std::string daddr);
	/*! \brief Get 
	 */
	std::string getDest();

	/*! \brief Set 
	 */
	void setDest(std::string dest);
	/*! \brief Get 
	 */
	std::string getFilterName();

	/*! \brief Set 
	 */
	void setFilterName(std::string filter_name);
	/*! \brief Get 
	 */
	std::string getDestinationIp();

	/*! \brief Set 
	 */
	void setDestinationIp(std::string destination_ip);
	/*! \brief Get 
	 */
	std::string getFilter();

	/*! \brief Set 
	 */
	void setFilter(std::string filter);


    private:
    std::string daddr{};
    std::string dest{};
    std::string filter_name{};
    std::string destination_ip{};
    std::string filter{};
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_filters_inner_H_ */
