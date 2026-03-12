
package org.openapitools.client.model


case class DomainProvProcessPending (
    __OPS_version: Option[String],
    _response_text: Option[String],
    _protocol: Option[String],
    _response_code: Option[String],
    _action: Option[String],
    _object: Option[String],
    _is_success: Option[String],
    _attributes: Option[DomainProvProcessPendingAttributes]
)
object DomainProvProcessPending {
    def toStringBody(var__OPS_version: Object, var_response_text: Object, var_protocol: Object, var_response_code: Object, var_action: Object, var_object: Object, var_is_success: Object, var_attributes: Object) =
        s"""
        | {
        | "_OPS_version":$var__OPS_version,"response_text":$var_response_text,"protocol":$var_protocol,"response_code":$var_response_code,"action":$var_action,"object":$var_object,"is_success":$var_is_success,"attributes":$var_attributes
        | }
        """.stripMargin
}
