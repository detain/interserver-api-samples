
package org.openapitools.client.model


case class VpsOrderServiceTypes32 (
    _services_id: Option[String],
    _services_name: Option[String],
    _services_cost: Option[String],
    _services_category: Option[String],
    _services_buyable: Option[String],
    _services_type: Option[String],
    _services_field1: Option[String],
    _services_field2: Option[String],
    _services_module: Option[String]
)
object VpsOrderServiceTypes32 {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_category: Object, var_services_buyable: Object, var_services_type: Object, var_services_field1: Object, var_services_field2: Object, var_services_module: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_category":$var_services_category,"services_buyable":$var_services_buyable,"services_type":$var_services_type,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_module":$var_services_module
        | }
        """.stripMargin
}
