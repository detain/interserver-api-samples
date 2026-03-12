package io.swagger.server.model


/**
 * @param services_id Service ID for example: ''11482''
 * @param services_name Service Name for example: ''DirectAdmin Standard''
 * @param services_cost Service Cost for example: ''21.75''
 * @param services_category Service Category for example: ''506''
 * @param services_buyable Buyable flag for Service for example: ''1''
 * @param services_type Service Type for example: ''506''
 * @param services_field1 Field 1 of Service for example: ''2704,Standard''
 * @param services_field2 Field 2 of Service for example: ''Unlimited Accounts & Domains<br><br>The DirectAdmin standard license is best for medium to large shared-hosting and/or reseller-hosting companies. No limit on accounts or domains.''
 * @param services_module Module of Service for example: ''licenses''
 */
case class LicensesOrderServiceTypes11482 (
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

