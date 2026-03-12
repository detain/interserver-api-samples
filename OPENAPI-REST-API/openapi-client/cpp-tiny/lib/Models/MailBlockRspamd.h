
/*
 * MailBlockRspamd.h
 *
 * This is a block entry from the rspamd block list.
 */

#ifndef TINY_CPP_CLIENT_MailBlockRspamd_H_
#define TINY_CPP_CLIENT_MailBlockRspamd_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief This is a block entry from the rspamd block list.
 *
 *  \ingroup Models
 *
 */

class MailBlockRspamd{
public:

    /*! \brief Constructor.
	 */
    MailBlockRspamd();
    MailBlockRspamd(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailBlockRspamd();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getFrom();

	/*! \brief Set 
	 */
	void setFrom(std::string from);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string subject);


    private:
    std::string from{};
    std::string subject{};
};
}

#endif /* TINY_CPP_CLIENT_MailBlockRspamd_H_ */
