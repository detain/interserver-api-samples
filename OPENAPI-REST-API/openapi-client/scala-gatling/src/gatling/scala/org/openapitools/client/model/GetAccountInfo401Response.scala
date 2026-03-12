
package org.openapitools.client.model


case class GetAccountInfo401Response (
    _code: Integer,
    _message: String
)
object GetAccountInfo401Response {
    def toStringBody(var_code: Object, var_message: Object) =
        s"""
        | {
        | "code":$var_code,"message":$var_message
        | }
        """.stripMargin
}
