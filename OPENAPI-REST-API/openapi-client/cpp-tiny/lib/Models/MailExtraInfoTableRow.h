
/*
 * MailExtraInfoTableRow.h
 *
 * A single row in the mail service supplementary information table.
 */

#ifndef TINY_CPP_CLIENT_MailExtraInfoTableRow_H_
#define TINY_CPP_CLIENT_MailExtraInfoTableRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A single row in the mail service supplementary information table.
 *
 *  \ingroup Models
 *
 */

class MailExtraInfoTableRow{
public:

    /*! \brief Constructor.
	 */
    MailExtraInfoTableRow();
    MailExtraInfoTableRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailExtraInfoTableRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The description of the extra info table row.
	 */
	std::string getDesc();

	/*! \brief Set The description of the extra info table row.
	 */
	void setDesc(std::string desc);
	/*! \brief Get The value of the extra info table row.
	 */
	std::string getValue();

	/*! \brief Set The value of the extra info table row.
	 */
	void setValue(std::string value);


    private:
    std::string desc{};
    std::string value{};
};
}

#endif /* TINY_CPP_CLIENT_MailExtraInfoTableRow_H_ */
