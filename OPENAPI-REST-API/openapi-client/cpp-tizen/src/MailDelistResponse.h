/*
 * MailDelistResponse.h
 *
 * Blocklist status information for a mail service.
 */

#ifndef _MailDelistResponse_H_
#define _MailDelistResponse_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Blocklist status information for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailDelistResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	MailDelistResponse();
	MailDelistResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailDelistResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Mail service ID.
	 */
	int getId();

	/*! \brief Set Mail service ID.
	 */
	void setId(int  id);
	/*! \brief Get Local blocklist entries.
	 */
	std::list<std::string> getLocal();

	/*! \brief Set Local blocklist entries.
	 */
	void setLocal(std::list <std::string> local);
	/*! \brief Get MailBaby trap block entries.
	 */
	std::list<std::string> getMbtrap();

	/*! \brief Set MailBaby trap block entries.
	 */
	void setMbtrap(std::list <std::string> mbtrap);
	/*! \brief Get Subject-based block entries.
	 */
	std::list<std::string> getSubject();

	/*! \brief Set Subject-based block entries.
	 */
	void setSubject(std::list <std::string> subject);
	/*! \brief Get Manually blocked entries.
	 */
	std::list<std::string> getManual();

	/*! \brief Set Manually blocked entries.
	 */
	void setManual(std::list <std::string> manual);

private:
	int id;
	std::list <std::string>local;
	std::list <std::string>mbtrap;
	std::list <std::string>subject;
	std::list <std::string>manual;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailDelistResponse_H_ */
