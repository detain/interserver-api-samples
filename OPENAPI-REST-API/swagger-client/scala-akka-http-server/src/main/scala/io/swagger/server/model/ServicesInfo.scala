package io.swagger.server.model


/**
 * Contains the complete catalog of available modules, services, service types, and service categories.
 *
 * @param modules 
 * @param services 
 * @param serviceTypes 
 * @param serviceCategories 
 */
case class ServicesInfo (
  modules: Modules,
  services: Services,
  serviceTypes: ServiceTypes,
  serviceCategories: ServiceCategories
)

