
package org.openapitools.client.model


case class GetOrderDetail200ResponseServiceTypesInner (
    _services_id: Option[Integer],
    _services_name: Option[String],
    _services_cost: Option[Integer],
    _services_field1: Option[String],
    _services_field2: Option[String],
    _services_module: Option[String]
)
object GetOrderDetail200ResponseServiceTypesInner {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_field1: Object, var_services_field2: Object, var_services_module: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_module":$var_services_module
        | }
        """.stripMargin
}
