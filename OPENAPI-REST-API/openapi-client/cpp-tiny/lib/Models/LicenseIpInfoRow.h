
/*
 * LicenseIpInfoRow.h
 *
 * A single row in the license IP information table.
 */

#ifndef TINY_CPP_CLIENT_LicenseIpInfoRow_H_
#define TINY_CPP_CLIENT_LicenseIpInfoRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single row in the license IP information table.
 *
 *  \ingroup Models
 *
 */

class LicenseIpInfoRow{
public:

    /*! \brief Constructor.
	 */
    LicenseIpInfoRow();
    LicenseIpInfoRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicenseIpInfoRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Row description
	 */
	std::string getDesc();

	/*! \brief Set Row description
	 */
	void setDesc(std::string desc);
	/*! \brief Get Row value
	 */
	std::string getValue();

	/*! \brief Set Row value
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_LicenseIpInfoRow_H_ */
