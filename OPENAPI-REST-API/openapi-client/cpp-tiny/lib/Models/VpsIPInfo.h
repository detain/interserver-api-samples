
/*
 * VpsIPInfo.h
 *
 * IP address information table for a VPS service.
 */

#ifndef TINY_CPP_CLIENT_VpsIPInfo_H_
#define TINY_CPP_CLIENT_VpsIPInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsIPInfoRow.h"
#include <list>

namespace Tiny {


/*! \brief IP address information table for a VPS service.
 *
 *  \ingroup Models
 *
 */

class VpsIPInfo{
public:

    /*! \brief Constructor.
	 */
    VpsIPInfo();
    VpsIPInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsIPInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Title of the table
	 */
	std::string getTitle();

	/*! \brief Set Title of the table
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<VpsIPInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<VpsIPInfoRow> rows);


    private:
    std::string title{};
    std::list<VpsIPInfoRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_VpsIPInfo_H_ */
