/*
 * MailSchema_extraInfoTables.h
 *
 * Additional information tables for the mail service.
 */

#ifndef _MailSchema_extraInfoTables_H_
#define _MailSchema_extraInfoTables_H_


#include <string>
#include "MailExtraInfoTable.h"
#include "MailTutorialsTable.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Additional information tables for the mail service.
 *
 *  \ingroup Models
 *
 */

class MailSchema_extraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	MailSchema_extraInfoTables();
	MailSchema_extraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailSchema_extraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	MailExtraInfoTable getMail();

	/*! \brief Set 
	 */
	void setMail(MailExtraInfoTable  mail);
	/*! \brief Get 
	 */
	MailTutorialsTable getTutorials();

	/*! \brief Set 
	 */
	void setTutorials(MailTutorialsTable  tutorials);

private:
	MailExtraInfoTable mail;
	MailTutorialsTable tutorials;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailSchema_extraInfoTables_H_ */
