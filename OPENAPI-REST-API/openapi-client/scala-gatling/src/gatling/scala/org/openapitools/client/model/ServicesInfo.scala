
package org.openapitools.client.model


case class ServicesInfo (
    _modules: Modules,
    _services: Services,
    _serviceTypes: ServiceTypes,
    _serviceCategories: ServiceCategories
)
object ServicesInfo {
    def toStringBody(var_modules: Object, var_services: Object, var_serviceTypes: Object, var_serviceCategories: Object) =
        s"""
        | {
        | "modules":$var_modules,"services":$var_services,"serviceTypes":$var_serviceTypes,"serviceCategories":$var_serviceCategories
        | }
        """.stripMargin
}
