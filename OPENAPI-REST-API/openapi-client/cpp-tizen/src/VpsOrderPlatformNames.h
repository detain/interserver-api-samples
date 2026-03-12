/*
 * VpsOrder_platformNames.h
 *
 * Platform Names
 */

#ifndef _VpsOrder_platformNames_H_
#define _VpsOrder_platformNames_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Platform Names
 *
 *  \ingroup Models
 *
 */

class VpsOrder_platformNames : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_platformNames();
	VpsOrder_platformNames(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_platformNames();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getKvm();

	/*! \brief Set 
	 */
	void setKvm(std::string  kvm);
	/*! \brief Get 
	 */
	std::string getKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(std::string  kvmstorage);
	/*! \brief Get 
	 */
	std::string getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(std::string  hyperv);

private:
	std::string kvm;
	std::string kvmstorage;
	std::string hyperv;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_platformNames_H_ */
