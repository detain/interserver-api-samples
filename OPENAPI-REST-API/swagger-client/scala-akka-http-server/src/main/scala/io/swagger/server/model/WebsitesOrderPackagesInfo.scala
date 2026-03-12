package io.swagger.server.model


/**
 * @param services_id The ID of the package. for example: ''11440''
 * @param services_name The name of the package. for example: ''DA BOOST X''
 * @param services_cost The cost of the package. for example: ''69.95''
 * @param services_category The category of the package. for example: ''204''
 * @param services_buyable Indicates if the package is buyable (1 for yes, 0 for no). for example: ''1''
 * @param services_type The type of the package. for example: ''206''
 * @param services_field1 Additional field 1 for the package.
 * @param services_field2 Additional field 2 for the package. for example: ''BoostX''
 * @param services_module The module of the package. for example: ''webhosting''
 * @param services_html HTML content for the package.
 * @param services_description Description of the package. for example: ''Direct Admin Web hosting package with 10x more resources over our standard web hosting package.''
 * @param services_moreinfo_url URL for more information about the package.
 * @param services_hidden Indicates if the package is hidden (1 for yes, 0 for no). for example: ''0''
 */
case class WebsitesOrderPackagesInfo (
  services_id: String,
  services_name: String,
  services_cost: String,
  services_category: String,
  services_buyable: String,
  services_type: String,
  services_field1: Option[String],
  services_field2: Option[String],
  services_module: String,
  services_html: Option[String],
  services_description: String,
  services_moreinfo_url: Option[String],
  services_hidden: Option[String]
)

