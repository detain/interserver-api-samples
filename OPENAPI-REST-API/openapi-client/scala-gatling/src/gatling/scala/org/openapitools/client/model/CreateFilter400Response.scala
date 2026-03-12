
package org.openapitools.client.model


case class CreateFilter400Response (
    _success: Option[Boolean],
    _text: Option[String],
    _errors: Option[List[String]]
)
object CreateFilter400Response {
    def toStringBody(var_success: Object, var_text: Object, var_errors: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text,"errors":$var_errors
        | }
        """.stripMargin
}
