
package org.openapitools.client.model


case class HostnameObject (
    _hostname: Option[String]
)
object HostnameObject {
    def toStringBody(var_hostname: Object) =
        s"""
        | {
        | "hostname":$var_hostname
        | }
        """.stripMargin
}
