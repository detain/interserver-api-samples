/*
 * ServerAssets.h
 *
 * 
 */

#ifndef _ServerAssets_H_
#define _ServerAssets_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerAssets : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerAssets();
	ServerAssets(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerAssets();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The title of the assets.
	 */
	std::string getTitle();

	/*! \brief Set The title of the assets.
	 */
	void setTitle(std::string  title);
	/*! \brief Get The size of the assets.
	 */
	int getSize();

	/*! \brief Set The size of the assets.
	 */
	void setSize(int  size);
	/*! \brief Get The type of the assets.
	 */
	std::string getType();

	/*! \brief Set The type of the assets.
	 */
	void setType(std::string  type);
	/*! \brief Get The header of the assets table.
	 */
	std::list<std::string> getHeader();

	/*! \brief Set The header of the assets table.
	 */
	void setHeader(std::list <std::string> header);
	/*! \brief Get The rows of the assets table.
	 */
	std::list<std::list> getRows();

	/*! \brief Set The rows of the assets table.
	 */
	void setRows(std::list <std::list> rows);

private:
	std::string title;
	int size;
	std::string type;
	std::list <std::string>header;
	std::list <std::list>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerAssets_H_ */
