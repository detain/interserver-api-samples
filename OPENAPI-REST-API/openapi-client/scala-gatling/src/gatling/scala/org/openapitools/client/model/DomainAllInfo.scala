
package org.openapitools.client.model


case class DomainAllInfo (
    __OPS_version: Option[String],
    _attributes: Option[DomainAllInfoAttributes],
    _object: Option[String],
    _protocol: Option[String],
    _response_text: Option[String],
    _response_code: Option[String],
    _action: Option[String],
    _is_success: Option[String]
)
object DomainAllInfo {
    def toStringBody(var__OPS_version: Object, var_attributes: Object, var_object: Object, var_protocol: Object, var_response_text: Object, var_response_code: Object, var_action: Object, var_is_success: Object) =
        s"""
        | {
        | "_OPS_version":$var__OPS_version,"attributes":$var_attributes,"object":$var_object,"protocol":$var_protocol,"response_text":$var_response_text,"response_code":$var_response_code,"action":$var_action,"is_success":$var_is_success
        | }
        """.stripMargin
}
