package io.swagger.server.model


/**
 * Extended billing context for a domain including registrar order details and contact info.
 *
 * @param order 
 * @param order_id 
 * @param domain_id 
 * @param provProcessPending 
 * @param email 
 * @param firstname 
 * @param lastname 
 * @param company 
 * @param address 
 * @param address2 
 * @param address3 
 * @param city 
 * @param state 
 * @param zip 
 * @param country 
 * @param phone 
 * @param fax 
 */
case class DomainBillingExtra (
  order: Option[DomainOrderResponse],
  order_id: Option[String],
  domain_id: Option[String],
  provProcessPending: Option[DomainProvProcessPending],
  email: Option[String],
  firstname: Option[String],
  lastname: Option[String],
  company: Option[String],
  address: Option[String],
  address2: Option[String],
  address3: Option[String],
  city: Option[String],
  state: Option[String],
  zip: Option[String],
  country: Option[String],
  phone: Option[String],
  fax: Option[String]
)

