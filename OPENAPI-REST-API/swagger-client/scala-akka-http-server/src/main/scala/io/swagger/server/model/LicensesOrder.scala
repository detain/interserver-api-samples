package io.swagger.server.model


/**
 * Available license packages and pricing for ordering a new software license.
 *
 * @param serviceCategories 
 * @param packageCosts 
 * @param serviceTypes 
 */
case class LicensesOrder (
  serviceCategories: Option[LicensesOrder_serviceCategories],
  packageCosts: Option[LicensesOrder_packageCosts],
  serviceTypes: Option[LicensesOrder_serviceTypes]
)

