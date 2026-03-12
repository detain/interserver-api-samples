/*
 * BuyItNowRow_cpu_inner.h
 *
 * 
 */

#ifndef _BuyItNowRow_cpu_inner_H_
#define _BuyItNowRow_cpu_inner_H_


#include <string>
#include "BuyItNowRow_cpu_inner_oneOf.h"
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

class BuyItNowRow_cpu_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	BuyItNowRow_cpu_inner();
	BuyItNowRow_cpu_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BuyItNowRow_cpu_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getImg();

	/*! \brief Set 
	 */
	void setImg(std::string  img);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string  type);
	/*! \brief Get 
	 */
	std::string getSpeed();

	/*! \brief Set 
	 */
	void setSpeed(std::string  speed);
	/*! \brief Get 
	 */
	std::string getNumCpus();

	/*! \brief Set 
	 */
	void setNumCpus(std::string  num_cpus);
	/*! \brief Get 
	 */
	std::string getNumCores();

	/*! \brief Set 
	 */
	void setNumCores(std::string  num_cores);

private:
	std::string img;
	std::string type;
	std::string speed;
	std::string num_cpus;
	std::string num_cores;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BuyItNowRow_cpu_inner_H_ */
