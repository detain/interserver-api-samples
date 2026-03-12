
/*
 * GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner();
    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getDesc();

	/*! \brief Set 
	 */
	void setDesc(std::string desc);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_ */
