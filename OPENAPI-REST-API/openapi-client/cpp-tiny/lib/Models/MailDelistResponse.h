
/*
 * MailDelistResponse.h
 *
 * Blocklist status information for a mail service.
 */

#ifndef TINY_CPP_CLIENT_MailDelistResponse_H_
#define TINY_CPP_CLIENT_MailDelistResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include <list>

namespace Tiny {


/*! \brief Blocklist status information for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailDelistResponse{
public:

    /*! \brief Constructor.
	 */
    MailDelistResponse();
    MailDelistResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailDelistResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Mail service ID.
	 */
	int getId();

	/*! \brief Set Mail service ID.
	 */
	void setId(int id);
	/*! \brief Get Local blocklist entries.
	 */
	std::list<Object> getLocal();

	/*! \brief Set Local blocklist entries.
	 */
	void setLocal(std::list<Object> local);
	/*! \brief Get MailBaby trap block entries.
	 */
	std::list<Object> getMbtrap();

	/*! \brief Set MailBaby trap block entries.
	 */
	void setMbtrap(std::list<Object> mbtrap);
	/*! \brief Get Subject-based block entries.
	 */
	std::list<Object> getSubject();

	/*! \brief Set Subject-based block entries.
	 */
	void setSubject(std::list<Object> subject);
	/*! \brief Get Manually blocked entries.
	 */
	std::list<Object> getManual();

	/*! \brief Set Manually blocked entries.
	 */
	void setManual(std::list<Object> manual);


    private:
    int id{};
    std::list<Object> local;
    std::list<Object> mbtrap;
    std::list<Object> subject;
    std::list<Object> manual;
};
}

#endif /* TINY_CPP_CLIENT_MailDelistResponse_H_ */
