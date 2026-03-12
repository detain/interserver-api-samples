
package org.openapitools.client.model


case class DomainNameserverPutRequest (
    _nameserver: List[String]
)
object DomainNameserverPutRequest {
    def toStringBody(var_nameserver: Object) =
        s"""
        | {
        | "nameserver":$var_nameserver
        | }
        """.stripMargin
}
