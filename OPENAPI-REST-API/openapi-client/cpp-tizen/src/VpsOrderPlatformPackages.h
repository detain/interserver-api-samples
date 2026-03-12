/*
 * VpsOrder_platformPackages.h
 *
 * Platform Packages
 */

#ifndef _VpsOrder_platformPackages_H_
#define _VpsOrder_platformPackages_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Platform Packages
 *
 *  \ingroup Models
 *
 */

class VpsOrder_platformPackages : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_platformPackages();
	VpsOrder_platformPackages(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_platformPackages();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getKvm();

	/*! \brief Set 
	 */
	void setKvm(long long  kvm);
	/*! \brief Get 
	 */
	long long getKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(long long  kvmstorage);
	/*! \brief Get 
	 */
	long long getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(long long  hyperv);

private:
	long long kvm;
	long long kvmstorage;
	long long hyperv;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_platformPackages_H_ */
