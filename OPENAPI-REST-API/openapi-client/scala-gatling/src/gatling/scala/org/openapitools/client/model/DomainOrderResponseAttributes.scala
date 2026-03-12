
package org.openapitools.client.model


case class DomainOrderResponseAttributes (
    /* Registrar order ID. */
    _id: Option[String],
    /* Administrative contact email provided for the order. */
    _admin_email: Option[String]
)
object DomainOrderResponseAttributes {
    def toStringBody(var_id: Object, var_admin_email: Object) =
        s"""
        | {
        | "id":$var_id,"admin_email":$var_admin_email
        | }
        """.stripMargin
}
