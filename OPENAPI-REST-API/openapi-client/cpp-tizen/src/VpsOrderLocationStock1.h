/*
 * VpsOrder_locationStock_1.h
 *
 * 
 */

#ifndef _VpsOrder_locationStock_1_H_
#define _VpsOrder_locationStock_1_H_


#include <string>
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

class VpsOrder_locationStock_1 : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_locationStock_1();
	VpsOrder_locationStock_1(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_locationStock_1();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getKvm();

	/*! \brief Set 
	 */
	void setKvm(bool  kvm);
	/*! \brief Get 
	 */
	bool getKvmstorage();

	/*! \brief Set 
	 */
	void setKvmstorage(bool  kvmstorage);
	/*! \brief Get 
	 */
	bool getHyperv();

	/*! \brief Set 
	 */
	void setHyperv(bool  hyperv);

private:
	bool kvm;
	bool kvmstorage;
	bool hyperv;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_locationStock_1_H_ */
