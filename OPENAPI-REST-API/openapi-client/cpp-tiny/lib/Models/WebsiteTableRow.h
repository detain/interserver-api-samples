
/*
 * WebsiteTableRow.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WebsiteTableRow_H_
#define TINY_CPP_CLIENT_WebsiteTableRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsiteTableRow{
public:

    /*! \brief Constructor.
	 */
    WebsiteTableRow();
    WebsiteTableRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteTableRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Description for the row
	 */
	std::string getDesc();

	/*! \brief Set Description for the row
	 */
	void setDesc(std::string desc);
	/*! \brief Get Value for the row
	 */
	std::string getValue();

	/*! \brief Set Value for the row
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_WebsiteTableRow_H_ */
