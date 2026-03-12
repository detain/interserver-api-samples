
package org.openapitools.client.model


case class ScrubIpPlaceOrder (
    _service_type: Integer,
    _ip: String
)
object ScrubIpPlaceOrder {
    def toStringBody(var_service_type: Object, var_ip: Object) =
        s"""
        | {
        | "service_type":$var_service_type,"ip":$var_ip
        | }
        """.stripMargin
}
