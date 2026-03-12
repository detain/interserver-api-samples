
/*
 * BackupIPInfo.h
 *
 * IP address information table for a backup service.
 */

#ifndef TINY_CPP_CLIENT_BackupIPInfo_H_
#define TINY_CPP_CLIENT_BackupIPInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupIPInfoRow.h"
#include <list>

namespace Tiny {


/*! \brief IP address information table for a backup service.
 *
 *  \ingroup Models
 *
 */

class BackupIPInfo{
public:

    /*! \brief Constructor.
	 */
    BackupIPInfo();
    BackupIPInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupIPInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Title of the IP information table.
	 */
	std::string getTitle();

	/*! \brief Set Title of the IP information table.
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<BackupIPInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<BackupIPInfoRow> rows);


    private:
    std::string title{};
    std::list<BackupIPInfoRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_BackupIPInfo_H_ */
