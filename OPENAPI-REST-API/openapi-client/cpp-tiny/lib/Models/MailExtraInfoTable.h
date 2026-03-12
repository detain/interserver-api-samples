
/*
 * MailExtraInfoTable.h
 *
 * A supplementary information table for a mail service (e.g., connection details).
 */

#ifndef TINY_CPP_CLIENT_MailExtraInfoTable_H_
#define TINY_CPP_CLIENT_MailExtraInfoTable_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailExtraInfoTableRow.h"
#include <list>

namespace Tiny {


/*! \brief A supplementary information table for a mail service (e.g., connection details).
 *
 *  \ingroup Models
 *
 */

class MailExtraInfoTable{
public:

    /*! \brief Constructor.
	 */
    MailExtraInfoTable();
    MailExtraInfoTable(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailExtraInfoTable();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The title of the extra info table.
	 */
	std::string getTitle();

	/*! \brief Set The title of the extra info table.
	 */
	void setTitle(std::string title);
	/*! \brief Get The rows of the extra info table.
	 */
	std::list<MailExtraInfoTableRow> getRows();

	/*! \brief Set The rows of the extra info table.
	 */
	void setRows(std::list<MailExtraInfoTableRow> rows);


    private:
    std::string title{};
    std::list<MailExtraInfoTableRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_MailExtraInfoTable_H_ */
