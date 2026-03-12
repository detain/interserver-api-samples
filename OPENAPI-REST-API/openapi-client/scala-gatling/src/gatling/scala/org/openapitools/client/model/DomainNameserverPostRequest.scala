
package org.openapitools.client.model


case class DomainNameserverPostRequest (
    _name: String,
    _ipAddress: String
)
object DomainNameserverPostRequest {
    def toStringBody(var_name: Object, var_ipAddress: Object) =
        s"""
        | {
        | "name":$var_name,"ipAddress":$var_ipAddress
        | }
        """.stripMargin
}
