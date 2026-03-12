
/*
 * MailSchema_extraInfoTables.h
 *
 * Additional information tables for the mail service.
 */

#ifndef TINY_CPP_CLIENT_MailSchema_extraInfoTables_H_
#define TINY_CPP_CLIENT_MailSchema_extraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailExtraInfoTable.h"
#include "MailTutorialsTable.h"

namespace Tiny {


/*! \brief Additional information tables for the mail service.
 *
 *  \ingroup Models
 *
 */

class MailSchema_extraInfoTables{
public:

    /*! \brief Constructor.
	 */
    MailSchema_extraInfoTables();
    MailSchema_extraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailSchema_extraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	MailExtraInfoTable getMail();

	/*! \brief Set 
	 */
	void setMail(MailExtraInfoTable mail);
	/*! \brief Get 
	 */
	MailTutorialsTable getTutorials();

	/*! \brief Set 
	 */
	void setTutorials(MailTutorialsTable tutorials);


    private:
    MailExtraInfoTable mail;
    MailTutorialsTable tutorials;
};
}

#endif /* TINY_CPP_CLIENT_MailSchema_extraInfoTables_H_ */
