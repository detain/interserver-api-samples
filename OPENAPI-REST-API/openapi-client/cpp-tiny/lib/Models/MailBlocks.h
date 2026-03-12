
/*
 * MailBlocks.h
 *
 * The listing of blocked emails.
 */

#ifndef TINY_CPP_CLIENT_MailBlocks_H_
#define TINY_CPP_CLIENT_MailBlocks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailBlockClickHouse.h"
#include "MailBlockRspamd.h"
#include <list>

namespace Tiny {


/*! \brief The listing of blocked emails.
 *
 *  \ingroup Models
 *
 */

class MailBlocks{
public:

    /*! \brief Constructor.
	 */
    MailBlocks();
    MailBlocks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailBlocks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<MailBlockClickHouse> getLocal();

	/*! \brief Set 
	 */
	void setLocal(std::list<MailBlockClickHouse> local);
	/*! \brief Get 
	 */
	std::list<MailBlockClickHouse> getMbtrap();

	/*! \brief Set 
	 */
	void setMbtrap(std::list<MailBlockClickHouse> mbtrap);
	/*! \brief Get 
	 */
	std::list<MailBlockRspamd> getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::list<MailBlockRspamd> subject);


    private:
    std::list<MailBlockClickHouse> local;
    std::list<MailBlockClickHouse> mbtrap;
    std::list<MailBlockRspamd> subject;
};
}

#endif /* TINY_CPP_CLIENT_MailBlocks_H_ */
