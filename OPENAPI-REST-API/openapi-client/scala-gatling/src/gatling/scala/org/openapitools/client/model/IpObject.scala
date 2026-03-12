
package org.openapitools.client.model


case class IpObject (
    /* IP Address */
    _ip: String
)
object IpObject {
    def toStringBody(var_ip: Object) =
        s"""
        | {
        | "ip":$var_ip
        | }
        """.stripMargin
}
