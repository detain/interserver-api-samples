
/*
 * MailTutorialsTableRow.h
 *
 * A single tutorial entry with a label and URL.
 */

#ifndef TINY_CPP_CLIENT_MailTutorialsTableRow_H_
#define TINY_CPP_CLIENT_MailTutorialsTableRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single tutorial entry with a label and URL.
 *
 *  \ingroup Models
 *
 */

class MailTutorialsTableRow{
public:

    /*! \brief Constructor.
	 */
    MailTutorialsTableRow();
    MailTutorialsTableRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailTutorialsTableRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The description of the tutorials table row.
	 */
	std::string getDesc();

	/*! \brief Set The description of the tutorials table row.
	 */
	void setDesc(std::string desc);
	/*! \brief Get The value of the tutorials table row.
	 */
	std::string getValue();

	/*! \brief Set The value of the tutorials table row.
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_MailTutorialsTableRow_H_ */
