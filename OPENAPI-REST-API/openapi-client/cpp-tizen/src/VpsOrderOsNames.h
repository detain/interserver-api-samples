/*
 * VpsOrder_osNames.h
 *
 * OS Names
 */

#ifndef _VpsOrder_osNames_H_
#define _VpsOrder_osNames_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief OS Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_osNames : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_osNames();
	VpsOrder_osNames(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_osNames();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getOpensuse();

	/*! \brief Set 
	 */
	void setOpensuse(std::string  opensuse);
	/*! \brief Get 
	 */
	std::string getUbuntu();

	/*! \brief Set 
	 */
	void setUbuntu(std::string  ubuntu);

private:
	std::string opensuse;
	std::string ubuntu;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_osNames_H_ */
