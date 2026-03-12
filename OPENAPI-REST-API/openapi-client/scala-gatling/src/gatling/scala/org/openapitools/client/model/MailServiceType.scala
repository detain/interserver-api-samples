
package org.openapitools.client.model


case class MailServiceType (
    /* The ID of the service type. */
    _services_id: Option[String],
    /* The name of the service type. */
    _services_name: Option[String],
    /* The cost of the service type. */
    _services_cost: Option[String],
    /* The category of the service type. */
    _services_category: Option[String],
    /* Whether the service type is buyable. */
    _services_buyable: Option[String],
    /* The type of the service type. */
    _services_type: Option[String],
    /* Additional field for the service type. */
    _services_field1: Option[String],
    /* Additional field for the service type. */
    _services_field2: Option[String],
    /* The module of the service type. */
    _services_module: Option[String]
)
object MailServiceType {
    def toStringBody(var_services_id: Object, var_services_name: Object, var_services_cost: Object, var_services_category: Object, var_services_buyable: Object, var_services_type: Object, var_services_field1: Object, var_services_field2: Object, var_services_module: Object) =
        s"""
        | {
        | "services_id":$var_services_id,"services_name":$var_services_name,"services_cost":$var_services_cost,"services_category":$var_services_category,"services_buyable":$var_services_buyable,"services_type":$var_services_type,"services_field1":$var_services_field1,"services_field2":$var_services_field2,"services_module":$var_services_module
        | }
        """.stripMargin
}
