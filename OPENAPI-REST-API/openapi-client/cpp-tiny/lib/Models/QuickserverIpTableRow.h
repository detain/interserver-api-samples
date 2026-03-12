
/*
 * QuickserverIpTableRow.h
 *
 * A single row in the QuickServer IP information table.
 */

#ifndef TINY_CPP_CLIENT_QuickserverIpTableRow_H_
#define TINY_CPP_CLIENT_QuickserverIpTableRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single row in the QuickServer IP information table.
 *
 *  \ingroup Models
 *
 */

class QuickserverIpTableRow{
public:

    /*! \brief Constructor.
	 */
    QuickserverIpTableRow();
    QuickserverIpTableRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverIpTableRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Description
	 */
	std::string getDesc();

	/*! \brief Set Description
	 */
	void setDesc(std::string desc);
	/*! \brief Get Value
	 */
	std::string getValue();

	/*! \brief Set Value
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserverIpTableRow_H_ */
