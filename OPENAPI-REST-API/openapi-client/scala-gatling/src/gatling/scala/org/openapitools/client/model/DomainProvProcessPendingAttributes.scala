
package org.openapitools.client.model


case class DomainProvProcessPendingAttributes (
    _id: Option[String],
    _order_id: Option[String],
    _registration_expiration_date: Option[String],
    _f_auto_renew: Option[String]
)
object DomainProvProcessPendingAttributes {
    def toStringBody(var_id: Object, var_order_id: Object, var_registration_expiration_date: Object, var_f_auto_renew: Object) =
        s"""
        | {
        | "id":$var_id,"order_id":$var_order_id,"registration_expiration_date":$var_registration_expiration_date,"f_auto_renew":$var_f_auto_renew
        | }
        """.stripMargin
}
