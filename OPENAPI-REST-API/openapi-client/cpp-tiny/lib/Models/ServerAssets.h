
/*
 * ServerAssets.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerAssets_H_
#define TINY_CPP_CLIENT_ServerAssets_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerAssets{
public:

    /*! \brief Constructor.
	 */
    ServerAssets();
    ServerAssets(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerAssets();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The title of the assets.
	 */
	std::string getTitle();

	/*! \brief Set The title of the assets.
	 */
	void setTitle(std::string title);
	/*! \brief Get The size of the assets.
	 */
	int getSize();

	/*! \brief Set The size of the assets.
	 */
	void setSize(int size);
	/*! \brief Get The type of the assets.
	 */
	std::string getType();

	/*! \brief Set The type of the assets.
	 */
	void setType(std::string type);
	/*! \brief Get The header of the assets table.
	 */
	std::list<std::string> getHeader();

	/*! \brief Set The header of the assets table.
	 */
	void setHeader(std::list<std::string> header);
	/*! \brief Get The rows of the assets table.
	 */
	std::list<std::list> getRows();

	/*! \brief Set The rows of the assets table.
	 */
	void setRows(std::list<std::list> rows);


    private:
    std::string title{};
    int size{};
    std::string type{};
    std::list<std::string> header;
    std::list<std::list> rows;
};
}

#endif /* TINY_CPP_CLIENT_ServerAssets_H_ */
