package io.swagger.server.model


/**
 * Service type definition for a software license, including name, pricing, and category.
 *
 * @param services_id Service ID for example: ''5034''
 * @param services_name Service name for example: ''KernelCare License''
 * @param services_cost Service cost for example: ''2.95''
 * @param services_category Service category for example: ''508''
 * @param services_buyable Buyable status for example: ''1''
 * @param services_type Service type for example: ''508''
 * @param services_field1 Service field 1 for example: ''16''
 * @param services_field2 Service field 2
 * @param services_module Service module for example: ''licenses''
 */
case class LicenseServiceType (
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

