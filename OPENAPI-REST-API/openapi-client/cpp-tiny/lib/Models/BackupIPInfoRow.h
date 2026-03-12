
/*
 * BackupIPInfoRow.h
 *
 * A single row in the backup IP information table.
 */

#ifndef TINY_CPP_CLIENT_BackupIPInfoRow_H_
#define TINY_CPP_CLIENT_BackupIPInfoRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single row in the backup IP information table.
 *
 *  \ingroup Models
 *
 */

class BackupIPInfoRow{
public:

    /*! \brief Constructor.
	 */
    BackupIPInfoRow();
    BackupIPInfoRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupIPInfoRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Description of the IP information.
	 */
	std::string getDesc();

	/*! \brief Set Description of the IP information.
	 */
	void setDesc(std::string desc);
	/*! \brief Get Value of the IP information.
	 */
	std::string getValue();

	/*! \brief Set Value of the IP information.
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_BackupIPInfoRow_H_ */
