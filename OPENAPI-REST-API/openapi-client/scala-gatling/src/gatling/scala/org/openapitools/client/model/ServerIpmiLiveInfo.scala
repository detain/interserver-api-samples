
package org.openapitools.client.model


case class ServerIpmiLiveInfo (
    _text: Option[String],
    _public_ip: Option[String],
    _allowed_ip: Option[String],
    _client_username: Option[String],
    _client_password: Option[String]
)
object ServerIpmiLiveInfo {
    def toStringBody(var_text: Object, var_public_ip: Object, var_allowed_ip: Object, var_client_username: Object, var_client_password: Object) =
        s"""
        | {
        | "text":$var_text,"public_ip":$var_public_ip,"allowed_ip":$var_allowed_ip,"client_username":$var_client_username,"client_password":$var_client_password
        | }
        """.stripMargin
}
