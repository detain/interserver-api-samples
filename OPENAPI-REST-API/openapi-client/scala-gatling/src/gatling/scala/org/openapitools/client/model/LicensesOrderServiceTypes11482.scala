
package org.openapitools.client.model


case class LicensesOrderServiceTypes11482 (
    /* Service ID */
    _services_id: Option[String],
    /* Service Name */
    _services_name: Option[String],
    /* Service Cost */
    _services_cost: Option[String],
    /* Service Category */
    _services_category: Option[String],
    /* Buyable flag for Service */
    _services_buyable: Option[String],
    /* Service Type */
    _services_type: Option[String],
    /* Field 1 of Service */
    _services_field1: Option[String],
    /* Field 2 of Service */
    _services_field2: Option[String],
    /* Module of Service */
    _services_module: Option[String]
)
object LicensesOrderServiceTypes11482 {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_category: Object, var_services_buyable: Object, var_services_type: Object, var_services_field1: Object, var_services_field2: Object, var_services_module: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_category":$var_services_category,"services_buyable":$var_services_buyable,"services_type":$var_services_type,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_module":$var_services_module
        | }
        """.stripMargin
}
