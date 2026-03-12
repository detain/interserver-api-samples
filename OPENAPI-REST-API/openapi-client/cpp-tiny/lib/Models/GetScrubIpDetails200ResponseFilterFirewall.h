
/*
 * GetScrubIpDetails_200_response_filter_firewall.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "GetScrubIpDetails_200_response_filter_firewall_filters_inner.h"
#include "GetScrubIpDetails_200_response_filter_firewall_rules_inner.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_filter_firewall{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_filter_firewall();
    GetScrubIpDetails_200_response_filter_firewall(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_filter_firewall();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> getRules();

	/*! \brief Set 
	 */
	void setRules(std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules);
	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> getFilters();

	/*! \brief Set 
	 */
	void setFilters(std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters);
	/*! \brief Get 
	 */
	int getScrubEnabled();

	/*! \brief Set 
	 */
	void setScrubEnabled(int scrub_enabled);


    private:
    std::list<GetScrubIpDetails_200_response_filter_firewall_rules_inner> rules;
    std::list<GetScrubIpDetails_200_response_filter_firewall_filters_inner> filters;
    int scrub_enabled{};
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_filter_firewall_H_ */
