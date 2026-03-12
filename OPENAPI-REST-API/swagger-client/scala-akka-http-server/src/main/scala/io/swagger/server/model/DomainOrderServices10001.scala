package io.swagger.server.model


/**
 * Example schema for a domain service catalog entry.
 *
 * @param services_id Service ID for example: ''10001''
 * @param services_name Service Name for example: ''.asia Domain Name Registration''
 * @param services_cost Service Cost for example: ''19.00''
 * @param services_currency Currency of Service Cost for example: ''USD''
 * @param services_category Service Category for example: ''100''
 * @param services_buyable Buyable flag for Service for example: ''1''
 * @param services_type Service Type for example: ''100''
 * @param services_field1 Field 1 of Service for example: ''.asia''
 * @param services_field2 Field 2 of Service
 * @param services_module Module of Service for example: ''domains''
 * @param services_hidden Hidden flag for Service for example: ''0''
 */
case class DomainOrderServices10001 (
  services_id: Option[String],
  services_name: Option[String],
  services_cost: Option[String],
  services_currency: Option[String],
  services_category: Option[String],
  services_buyable: Option[String],
  services_type: Option[String],
  services_field1: Option[String],
  services_field2: Option[String],
  services_module: Option[String],
  services_hidden: Option[String]
)

