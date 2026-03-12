
/*
 * VpsBackupRow.h
 *
 * A single backed-up item and information about it.
 */

#ifndef TINY_CPP_CLIENT_VpsBackupRow_H_
#define TINY_CPP_CLIENT_VpsBackupRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single backed-up item and information about it.
 *
 *  \ingroup Models
 *
 */

class VpsBackupRow{
public:

    /*! \brief Constructor.
	 */
    VpsBackupRow();
    VpsBackupRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsBackupRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Backup Type
	 */
	std::string getType();

	/*! \brief Set Backup Type
	 */
	void setType(std::string type);
	/*! \brief Get The service id such as vps  id.
	 */
	int getService();

	/*! \brief Set The service id such as vps  id.
	 */
	void setService(int service);
	/*! \brief Get The name of the backup.
	 */
	std::string getName();

	/*! \brief Set The name of the backup.
	 */
	void setName(std::string name);
	/*! \brief Get Size of the file in bytes
	 */
	int getSize();

	/*! \brief Set Size of the file in bytes
	 */
	void setSize(int size);
	/*! \brief Get The creation date of the backup in a unix timestamp.
	 */
	int getDate();

	/*! \brief Set The creation date of the backup in a unix timestamp.
	 */
	void setDate(int date);


    private:
    std::string type{};
    int service{};
    std::string name{};
    int size{};
    int date{};
};
}

#endif /* TINY_CPP_CLIENT_VpsBackupRow_H_ */
