package io.swagger.server.model


/**
 * @param services_id The ID of the service. for example: ''11447''
 * @param services_name The name of the service. for example: ''Web Hosting Direct Admin (PriceLock)''
 * @param services_cost The cost of the service. for example: ''5.00''
 * @param services_category The category of the service. for example: ''204''
 * @param services_buyable Indicates if the service is buyable (1 for yes, 0 for no). for example: ''1''
 * @param services_type The type of the service. for example: ''206''
 * @param services_field1 Additional field 1 for the service.
 * @param services_field2 Additional field 2 for the service. for example: ''Standard''
 * @param services_module The module of the service. for example: ''webhosting''
 * @param services_html HTML content for the service.
 * @param services_description Description of the service.
 * @param services_moreinfo_url URL for more information about the service.
 * @param services_hidden Indicates if the service is hidden (1 for yes, 0 for no). for example: ''1''
 */
case class WebsitesOrderServiceTypes (
  services_id: String,
  services_name: String,
  services_cost: String,
  services_category: String,
  services_buyable: String,
  services_type: String,
  services_field1: Option[String],
  services_field2: Option[String],
  services_module: String,
  services_html: Option[],
  services_description: Option[],
  services_moreinfo_url: Option[],
  services_hidden: String
)

