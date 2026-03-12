package io.swagger.server.model


/**
 * Administrative contact information for a domain registration.
 *
 * @param status 
 * @param state 
 * @param org_name 
 * @param country 
 * @param postal_code 
 * @param email 
 * @param fax 
 * @param address2 
 * @param address3 
 * @param address1 
 * @param city 
 * @param phone 
 * @param first_name 
 * @param last_name 
 */
case class DomainAdminContact (
  status: Option[String],
  state: Option[String],
  org_name: Option[String],
  country: Option[String],
  postal_code: Option[String],
  email: Option[String],
  fax: Option[String],
  address2: Option[String],
  address3: Option[String],
  address1: Option[String],
  city: Option[String],
  phone: Option[String],
  first_name: Option[String],
  last_name: Option[String]
)

