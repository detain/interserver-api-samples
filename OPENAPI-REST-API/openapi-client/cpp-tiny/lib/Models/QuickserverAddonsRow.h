
/*
 * QuickserverAddonsRow.h
 *
 * A single add-on item associated with a QuickServer service.
 */

#ifndef TINY_CPP_CLIENT_QuickserverAddonsRow_H_
#define TINY_CPP_CLIENT_QuickserverAddonsRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single add-on item associated with a QuickServer service.
 *
 *  \ingroup Models
 *
 */

class QuickserverAddonsRow{
public:

    /*! \brief Constructor.
	 */
    QuickserverAddonsRow();
    QuickserverAddonsRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverAddonsRow();


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

#endif /* TINY_CPP_CLIENT_QuickserverAddonsRow_H_ */
