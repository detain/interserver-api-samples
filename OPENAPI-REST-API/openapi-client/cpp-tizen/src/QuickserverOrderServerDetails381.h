/*
 * QuickserverOrderServerDetails381.h
 *
 * 
 */

#ifndef _QuickserverOrderServerDetails381_H_
#define _QuickserverOrderServerDetails381_H_


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

class QuickserverOrderServerDetails381 : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrderServerDetails381();
	QuickserverOrderServerDetails381(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrderServerDetails381();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get CPU details of the server.
	 */
	std::string getCpu();

	/*! \brief Set CPU details of the server.
	 */
	void setCpu(std::string  cpu);
	/*! \brief Get RAM capacity of the server.
	 */
	std::string getRam();

	/*! \brief Set RAM capacity of the server.
	 */
	void setRam(std::string  ram);
	/*! \brief Get Hard disk capacity of the server.
	 */
	std::string getHd();

	/*! \brief Set Hard disk capacity of the server.
	 */
	void setHd(std::string  hd);
	/*! \brief Get Number of CPU cores.
	 */
	int getCores();

	/*! \brief Set Number of CPU cores.
	 */
	void setCores(int  cores);
	/*! \brief Get Cost of the server.
	 */
	std::string getCost();

	/*! \brief Set Cost of the server.
	 */
	void setCost(std::string  cost);

private:
	std::string cpu;
	std::string ram;
	std::string hd;
	int cores;
	std::string cost;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrderServerDetails381_H_ */
