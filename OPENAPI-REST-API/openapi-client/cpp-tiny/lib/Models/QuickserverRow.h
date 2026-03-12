
/*
 * QuickserverRow.h
 *
 * A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_QuickserverRow_H_
#define TINY_CPP_CLIENT_QuickserverRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Quickservers` `GET` request.
 *
 *  \ingroup Models
 *
 */

class QuickserverRow{
public:

    /*! \brief Constructor.
	 */
    QuickserverRow();
    QuickserverRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the qs.
	 */
	std::string getQsId();

	/*! \brief Set The id of the qs.
	 */
	void setQsId(std::string qs_id);
	/*! \brief Get The name of the qs.
	 */
	std::string getQsName();

	/*! \brief Set The name of the qs.
	 */
	void setQsName(std::string qs_name);
	/*! \brief Get The cost of the qs.
	 */
	std::string getCost();

	/*! \brief Set The cost of the qs.
	 */
	void setCost(std::string cost);
	/*! \brief Get The hostname of the qs.
	 */
	std::string getQsHostname();

	/*! \brief Set The hostname of the qs.
	 */
	void setQsHostname(std::string qs_hostname);
	/*! \brief Get The status of the qs.
	 */
	std::string getQsStatus();

	/*! \brief Set The status of the qs.
	 */
	void setQsStatus(std::string qs_status);
	/*! \brief Get The comment of the qs.
	 */
	std::string getQsComment();

	/*! \brief Set The comment of the qs.
	 */
	void setQsComment(std::string qs_comment);


    private:
    std::string qs_id{};
    std::string qs_name{};
    std::string cost{};
    std::string qs_hostname{};
    std::string qs_status{};
    std::string qs_comment{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserverRow_H_ */
