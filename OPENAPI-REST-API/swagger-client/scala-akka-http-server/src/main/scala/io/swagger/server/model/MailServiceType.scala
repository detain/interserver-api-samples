package io.swagger.server.model


/**
 * Service type definition for a mail service, including name, pricing, and category.
 *
 * @param services_id The ID of the service type. for example: ''10880''
 * @param services_name The name of the service type. for example: ''MailBaby Mail''
 * @param services_cost The cost of the service type. for example: ''1.00''
 * @param services_category The category of the service type. for example: ''800''
 * @param services_buyable Whether the service type is buyable. for example: ''1''
 * @param services_type The type of the service type. for example: ''800''
 * @param services_field1 Additional field for the service type.
 * @param services_field2 Additional field for the service type.
 * @param services_module The module of the service type. for example: ''mail''
 */
case class MailServiceType (
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

