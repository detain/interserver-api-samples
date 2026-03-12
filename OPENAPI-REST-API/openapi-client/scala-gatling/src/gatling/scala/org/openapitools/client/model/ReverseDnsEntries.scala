
package org.openapitools.client.model


case class ReverseDnsEntries (
    /* The IPs you have access to and their current reverse dns mapping. */
    _ips: Option[Map[String, AnyType]]
)
object ReverseDnsEntries {
    def toStringBody(var_ips: Object) =
        s"""
        | {
        | "ips":$var_ips
        | }
        """.stripMargin
}
