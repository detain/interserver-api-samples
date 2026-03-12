
/*
 * QuickserverIpInfo.h
 *
 * IP address information table for a QuickServer service.
 */

#ifndef TINY_CPP_CLIENT_QuickserverIpInfo_H_
#define TINY_CPP_CLIENT_QuickserverIpInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverIpTableRow.h"
#include <list>

namespace Tiny {


/*! \brief IP address information table for a QuickServer service.
 *
 *  \ingroup Models
 *
 */

class QuickserverIpInfo{
public:

    /*! \brief Constructor.
	 */
    QuickserverIpInfo();
    QuickserverIpInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverIpInfo();


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
	std::list<QuickserverIpTableRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<QuickserverIpTableRow> rows);


    private:
    std::string title{};
    std::list<QuickserverIpTableRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverIpInfo_H_ */
