
package org.openapitools.client.model


case class CreateRule500Response (
    _success: Option[Boolean],
    _text: Option[String]
)
object CreateRule500Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
