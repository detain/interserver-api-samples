
package org.openapitools.client.model


case class CreateFilter500Response (
    _success: Option[Boolean],
    _text: Option[String]
)
object CreateFilter500Response {
    def toStringBody(var_success: Object, var_text: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text
        | }
        """.stripMargin
}
