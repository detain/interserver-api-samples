
package org.openapitools.client.model


case class ServerIpmiPowerRequest (
    /* The power action to send to the ipmi controller. */
    _action: String,
    /* The Asset ID */
    _asset: Option[Integer]
)
object ServerIpmiPowerRequest {
    def toStringBody(var_action: Object, var_asset: Object) =
        s"""
        | {
        | "action":$var_action,"asset":$var_asset
        | }
        """.stripMargin
}
