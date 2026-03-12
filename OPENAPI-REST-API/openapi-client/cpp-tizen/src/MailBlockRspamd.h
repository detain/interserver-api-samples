/*
 * MailBlockRspamd.h
 *
 * This is a block entry from the rspamd block list.
 */

#ifndef _MailBlockRspamd_H_
#define _MailBlockRspamd_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief This is a block entry from the rspamd block list.
 *
 *  \ingroup Models
 *
 */

class MailBlockRspamd : public Object {
public:
	/*! \brief Constructor.
	 */
	MailBlockRspamd();
	MailBlockRspamd(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailBlockRspamd();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getFrom();

	/*! \brief Set 
	 */
	void setFrom(std::string  from);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string  subject);

private:
	std::string from;
	std::string subject;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailBlockRspamd_H_ */
