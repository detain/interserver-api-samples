
package org.openapitools.client.model


case class LoginErrorResponse (
    _message: Option[String],
    _field: Option[String]
)
object LoginErrorResponse {
    def toStringBody(var_message: Object, var_field: Object) =
        s"""
        | {
        | "message":$var_message,"field":$var_field
        | }
        """.stripMargin
}
