
/*
 * WebsiteTable.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WebsiteTable_H_
#define TINY_CPP_CLIENT_WebsiteTable_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsiteTableRow.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsiteTable{
public:

    /*! \brief Constructor.
	 */
    WebsiteTable();
    WebsiteTable(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteTable();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Title of the table
	 */
	std::string getTitle();

	/*! \brief Set Title of the table
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<WebsiteTableRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<WebsiteTableRow> rows);


    private:
    std::string title{};
    std::list<WebsiteTableRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_WebsiteTable_H_ */
