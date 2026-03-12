package io.swagger.server.model


/**
 * Service type definition for a domain registration, including name, pricing, and category.
 *
 * @param services_id Service type ID.
 * @param services_name Service type name (e.g., .com Registration).
 * @param services_cost Service cost per billing period.
 * @param services_category Service category ID.
 * @param services_buyable Whether this service type is available for purchase.
 * @param services_type Internal service type identifier.
 * @param services_field1 TLD or first configurable field for the service type.
 * @param services_field2 Second configurable field for the service type.
 * @param services_module Backend module handling this service type.
 */
case class DomainServiceType (
  services_id: Option[String],
  services_name: Option[String],
  services_cost: Option[String],
  services_category: Option[String],
  services_buyable: Option[String],
  services_type: Option[String],
  services_field1: Option[String],
  services_field2: Option[String],
  services_module: Option[String]
)

