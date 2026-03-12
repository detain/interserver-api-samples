
package org.openapitools.client.model


case class PostWebsiteBuyIpRequest (
    /* A map of IP addresses to their desired reverse DNS hostnames. */
    _ips: Option[Map[String, String]]
)
object PostWebsiteBuyIpRequest {
    def toStringBody(var_ips: Object) =
        s"""
        | {
        | "ips":$var_ips
        | }
        """.stripMargin
}
