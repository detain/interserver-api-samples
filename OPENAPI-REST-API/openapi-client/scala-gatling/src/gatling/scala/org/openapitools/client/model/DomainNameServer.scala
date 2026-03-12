
package org.openapitools.client.model


case class DomainNameServer (
    _sortorder: Option[String],
    _name: Option[String],
    _ipaddress: Option[String]
)
object DomainNameServer {
    def toStringBody(var_sortorder: Object, var_name: Object, var_ipaddress: Object) =
        s"""
        | {
        | "sortorder":$var_sortorder,"name":$var_name,"ipaddress":$var_ipaddress
        | }
        """.stripMargin
}
