
/*
 * QuickserverAddons.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_QuickserverAddons_H_
#define TINY_CPP_CLIENT_QuickserverAddons_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverAddonsRow.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class QuickserverAddons{
public:

    /*! \brief Constructor.
	 */
    QuickserverAddons();
    QuickserverAddons(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverAddons();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Table title
	 */
	std::string getTitle();

	/*! \brief Set Table title
	 */
	void setTitle(std::string title);
	/*! \brief Get 
	 */
	std::list<QuickserverAddonsRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list<QuickserverAddonsRow> rows);


    private:
    std::string title{};
    std::list<QuickserverAddonsRow> rows;
};
}

#endif /* TINY_CPP_CLIENT_QuickserverAddons_H_ */
