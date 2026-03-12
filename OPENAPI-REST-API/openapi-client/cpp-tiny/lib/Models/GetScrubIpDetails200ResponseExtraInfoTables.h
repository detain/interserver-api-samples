
/*
 * GetScrubIpDetails_200_response_extraInfoTables.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_extraInfoTables{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_extraInfoTables();
    GetScrubIpDetails_200_response_extraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_extraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips getScrubIps();

	/*! \brief Set 
	 */
	void setScrubIps(GetScrubIpDetails_200_response_extraInfoTables_scrub_ips scrub_ips);


    private:
    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips scrub_ips;
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_H_ */
