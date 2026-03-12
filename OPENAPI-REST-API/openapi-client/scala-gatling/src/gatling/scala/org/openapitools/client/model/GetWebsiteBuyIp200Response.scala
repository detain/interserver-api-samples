
package org.openapitools.client.model


case class GetWebsiteBuyIp200Response (
    /* A map of IP addresses to their current reverse DNS hostnames. */
    _ips: Option[Map[String, String]]
)
object GetWebsiteBuyIp200Response {
    def toStringBody(var_ips: Object) =
        s"""
        | {
        | "ips":$var_ips
        | }
        """.stripMargin
}
