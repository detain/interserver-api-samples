
package org.openapitools.client.model


case class LoginSuccessResponse (
    _sessionId: Option[String],
    _account_id: Option[Integer],
    _account_lid: Option[String],
    _ima: Option[String],
    _gravatar: Option[String]
)
object LoginSuccessResponse {
    def toStringBody(var_sessionId: Object, var_account_id: Object, var_account_lid: Object, var_ima: Object, var_gravatar: Object) =
        s"""
        | {
        | "sessionId":$var_sessionId,"account_id":$var_account_id,"account_lid":$var_account_lid,"ima":$var_ima,"gravatar":$var_gravatar
        | }
        """.stripMargin
}
