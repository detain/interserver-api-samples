
package org.openapitools.client.model


case class GetScrubIpDetails200ResponseExtraInfoTables (
    _scrub_ips: Option[GetScrubIpDetails200ResponseExtraInfoTablesScrubIps]
)
object GetScrubIpDetails200ResponseExtraInfoTables {
    def toStringBody(var_scrub_ips: Object) =
        s"""
        | {
        | "scrub_ips":$var_scrub_ips
        | }
        """.stripMargin
}
