
/*
 * LicenseIpInfo.h
 *
 * IP address information table for a software license service.
 */

#ifndef TINY_CPP_CLIENT_LicenseIpInfo_H_
#define TINY_CPP_CLIENT_LicenseIpInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LicenseIpInfoRow.h"
#include <list>

namespace Tiny {


/*! \brief IP address information table for a software license service.
 *
 *  \ingroup Models
 *
 */

class LicenseIpInfo{
public:

    /*! \brief Constructor.
	 */
    LicenseIpInfo();
    LicenseIpInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicenseIpInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Table title
	 */
	std::string getTitle();

	/*! \brief Set Table title
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<LicenseIpInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<LicenseIpInfoRow> rows);


    private:
    std::string title{};
    std::list<LicenseIpInfoRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_LicenseIpInfo_H_ */
