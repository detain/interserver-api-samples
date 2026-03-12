
package org.openapitools.client.model


case class DomainOrderResponse (
    __OPS_version: Option[String],
    _protocol: Option[String],
    _is_success: Option[String],
    _action: Option[String],
    _attributes: Option[DomainOrderResponseAttributes],
    _response_text: Option[String],
    _object: Option[String],
    _response_code: Option[String]
)
object DomainOrderResponse {
    def toStringBody(var__OPS_version: Object, var_protocol: Object, var_is_success: Object, var_action: Object, var_attributes: Object, var_response_text: Object, var_object: Object, var_response_code: Object) =
        s"""
        | {
        | "_OPS_version":$var__OPS_version,"protocol":$var_protocol,"is_success":$var_is_success,"action":$var_action,"attributes":$var_attributes,"response_text":$var_response_text,"object":$var_object,"response_code":$var_response_code
        | }
        """.stripMargin
}
