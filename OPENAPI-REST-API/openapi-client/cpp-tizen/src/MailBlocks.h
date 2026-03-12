/*
 * MailBlocks.h
 *
 * The listing of blocked emails.
 */

#ifndef _MailBlocks_H_
#define _MailBlocks_H_


#include <string>
#include "MailBlockClickHouse.h"
#include "MailBlockRspamd.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The listing of blocked emails.
 *
 *  \ingroup Models
 *
 */

class MailBlocks : public Object {
public:
	/*! \brief Constructor.
	 */
	MailBlocks();
	MailBlocks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailBlocks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<MailBlockClickHouse> getLocal();

	/*! \brief Set 
	 */
	void setLocal(std::list <MailBlockClickHouse> local);
	/*! \brief Get 
	 */
	std::list<MailBlockClickHouse> getMbtrap();

	/*! \brief Set 
	 */
	void setMbtrap(std::list <MailBlockClickHouse> mbtrap);
	/*! \brief Get 
	 */
	std::list<MailBlockRspamd> getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::list <MailBlockRspamd> subject);

private:
	std::list <MailBlockClickHouse>local;
	std::list <MailBlockClickHouse>mbtrap;
	std::list <MailBlockRspamd>subject;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailBlocks_H_ */
