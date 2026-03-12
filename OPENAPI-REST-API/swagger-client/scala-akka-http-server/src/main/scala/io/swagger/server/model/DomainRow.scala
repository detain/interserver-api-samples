package io.swagger.server.model


/**
 * = DomainRow =
 *
 * A result row from the `Domains` `GET` request.
 *
 * @param domain_id The ID number of the domain in our billing system. for example: ''59237''
 * @param domain_hostname The hostname of the domain. for example: ''mydomain.com''
 * @param domain_expire_date The expiration date of the domain. for example: ''2023-08-14T00:59:38.000Z''
 * @param cost The cost of the domain. for example: ''11.00''
 * @param domain_status The billing / registration status of the domain. for example: ''active''
 */
case class DomainRow (
  domain_id: Option[String],
  domain_hostname: Option[String],
  domain_expire_date: Option[String],
  cost: Option[String],
  domain_status: Option[String]
)

