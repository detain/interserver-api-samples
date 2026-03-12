
package org.openapitools.client.model


case class Service (
    _services_id: Integer,
    _services_name: String,
    _services_cost: Number,
    _services_currency: String,
    _services_category: Integer,
    _services_buyable: Boolean,
    _services_type: Integer,
    _services_field1: String,
    _services_field2: String,
    _services_module: String
)
object Service {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_currency: Object, var_services_category: Object, var_services_buyable: Object, var_services_type: Object, var_services_field1: Object, var_services_field2: Object, var_services_module: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_currency":$var_services_currency,"services_category":$var_services_category,"services_buyable":$var_services_buyable,"services_type":$var_services_type,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_module":$var_services_module
        | }
        """.stripMargin
}
