
/*
 * MailTutorialsTable.h
 *
 * A table of tutorial links displayed for a mail service.
 */

#ifndef TINY_CPP_CLIENT_MailTutorialsTable_H_
#define TINY_CPP_CLIENT_MailTutorialsTable_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailTutorialsTableRow.h"
#include <list>

namespace Tiny {


/*! \brief A table of tutorial links displayed for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailTutorialsTable{
public:

    /*! \brief Constructor.
	 */
    MailTutorialsTable();
    MailTutorialsTable(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailTutorialsTable();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The title of the tutorials table.
	 */
	std::string getTitle();

	/*! \brief Set The title of the tutorials table.
	 */
	void setTitle(std::string title);
	/*! \brief Get The rows of the tutorials table.
	 */
	std::list<MailTutorialsTableRow> getRows();

	/*! \brief Set The rows of the tutorials table.
	 */
	void setRows(std::list<MailTutorialsTableRow> rows);


    private:
    std::string title{};
    std::list<MailTutorialsTableRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_MailTutorialsTable_H_ */
