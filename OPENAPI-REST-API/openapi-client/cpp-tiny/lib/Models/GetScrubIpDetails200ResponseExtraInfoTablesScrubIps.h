
/*
 * GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_extraInfoTables_scrub_ips{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();
    GetScrubIpDetails_200_response_extraInfoTables_scrub_ips(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getTitle();

	/*! \brief Set 
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows);


    private:
    std::string title{};
    std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows;
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_ */
