
package org.openapitools.client.model


case class DomainNameserverGetResponseInner (
    _name: String,
    _ipaddress: String,
    /* Whether the registrar allows deletion of this nameserver entry. */
    _can_delete: String
)
object DomainNameserverGetResponseInner {
    def toStringBody(var_name: Object, var_ipaddress: Object, var_can_delete: Object) =
        s"""
        | {
        | "name":$var_name,"ipaddress":$var_ipaddress,"can_delete":$var_can_delete
        | }
        """.stripMargin
}
