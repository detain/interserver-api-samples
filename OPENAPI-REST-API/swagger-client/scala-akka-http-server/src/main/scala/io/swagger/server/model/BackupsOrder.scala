package io.swagger.server.model


/**
 * Available backup storage packages and pricing for ordering a new backup service.
 *
 * @param packageCosts 
 * @param serviceTypes 
 */
case class BackupsOrder (
  packageCosts: BackupsOrderPackageCosts,
  serviceTypes: BackupsOrder_serviceTypes
)

