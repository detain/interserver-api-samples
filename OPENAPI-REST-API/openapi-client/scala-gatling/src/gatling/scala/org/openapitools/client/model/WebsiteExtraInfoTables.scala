
package org.openapitools.client.model


case class WebsiteExtraInfoTables (
    _links: Option[WebsiteTable],
    _preview: Option[WebsiteTable],
    _dns: Option[WebsiteTable]
)
object WebsiteExtraInfoTables {
    def toStringBody(var_links: Object, var_preview: Object, var_dns: Object) =
        s"""
        | {
        | "links":$var_links,"preview":$var_preview,"dns":$var_dns
        | }
        """.stripMargin
}
