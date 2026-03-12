
/*
 * QuickserverOrderServerDetails381.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_QuickserverOrderServerDetails381_H_
#define TINY_CPP_CLIENT_QuickserverOrderServerDetails381_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class QuickserverOrderServerDetails381{
public:

    /*! \brief Constructor.
	 */
    QuickserverOrderServerDetails381();
    QuickserverOrderServerDetails381(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~QuickserverOrderServerDetails381();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get CPU details of the server.
	 */
	std::string getCpu();

	/*! \brief Set CPU details of the server.
	 */
	void setCpu(std::string cpu);
	/*! \brief Get RAM capacity of the server.
	 */
	std::string getRam();

	/*! \brief Set RAM capacity of the server.
	 */
	void setRam(std::string ram);
	/*! \brief Get Hard disk capacity of the server.
	 */
	std::string getHd();

	/*! \brief Set Hard disk capacity of the server.
	 */
	void setHd(std::string hd);
	/*! \brief Get Number of CPU cores.
	 */
	int getCores();

	/*! \brief Set Number of CPU cores.
	 */
	void setCores(int cores);
	/*! \brief Get Cost of the server.
	 */
	std::string getCost();

	/*! \brief Set Cost of the server.
	 */
	void setCost(std::string cost);


    private:
    std::string cpu{};
    std::string ram{};
    std::string hd{};
    int cores{};
    std::string cost{};
};
}

#endif /* TINY_CPP_CLIENT_QuickserverOrderServerDetails381_H_ */
