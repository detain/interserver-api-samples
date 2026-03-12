package io.swagger.server.model


/**
 * Detailed domain service record for a domain order.
 *
 * @param domain_id 
 * @param domain_hostname 
 * @param domain_username 
 * @param domain_password 
 * @param domain_type 
 * @param domain_currency 
 * @param domain_expire_date 
 * @param domain_order_date 
 * @param domain_custid 
 * @param domain_status 
 * @param domain_invoice 
 * @param domain_coupon 
 */
case class DomainServiceInfo (
  domain_id: Option[String],
  domain_hostname: Option[String],
  domain_username: Option[String],
  domain_password: Option[String],
  domain_type: Option[String],
  domain_currency: Option[String],
  domain_expire_date: Option[String],
  domain_order_date: Option[String],
  domain_custid: Option[String],
  domain_status: Option[String],
  domain_invoice: Option[String],
  domain_coupon: Option[String]
)

