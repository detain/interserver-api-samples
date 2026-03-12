
package org.openapitools.client.model


case class ServersBuyNowError (
    /* Always false for error responses. */
    _success: Option[Boolean],
    /* Human-readable error summary. */
    _text: Option[String],
    /* List of specific validation error messages. */
    _errors: Option[List[String]]
)
object ServersBuyNowError {
    def toStringBody(var_success: Object, var_text: Object, var_errors: Object) =
        s"""
        | {
        | "success":$var_success,"text":$var_text,"errors":$var_errors
        | }
        """.stripMargin
}
