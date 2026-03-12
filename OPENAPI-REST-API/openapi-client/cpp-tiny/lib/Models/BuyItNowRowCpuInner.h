
/*
 * BuyItNowRow_cpu_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BuyItNowRow_cpu_inner_H_
#define TINY_CPP_CLIENT_BuyItNowRow_cpu_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BuyItNowRow_cpu_inner_oneOf.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BuyItNowRow_cpu_inner{
public:

    /*! \brief Constructor.
	 */
    BuyItNowRow_cpu_inner();
    BuyItNowRow_cpu_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BuyItNowRow_cpu_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getImg();

	/*! \brief Set 
	 */
	void setImg(std::string img);
	/*! \brief Get 
	 */
	std::string getType();

	/*! \brief Set 
	 */
	void setType(std::string type);
	/*! \brief Get 
	 */
	std::string getSpeed();

	/*! \brief Set 
	 */
	void setSpeed(std::string speed);
	/*! \brief Get 
	 */
	std::string getNumCpus();

	/*! \brief Set 
	 */
	void setNumCpus(std::string num_cpus);
	/*! \brief Get 
	 */
	std::string getNumCores();

	/*! \brief Set 
	 */
	void setNumCores(std::string num_cores);


    private:
    std::string img{};
    std::string type{};
    std::string speed{};
    std::string num_cpus{};
    std::string num_cores{};
};
}

#endif /* TINY_CPP_CLIENT_BuyItNowRow_cpu_inner_H_ */
