
package org.openapitools.client.model


case class ServerLease (
    /* MAC address associated with the lease. */
    _mac: String,
    /* Indicates if the lease is authenticated. */
    _authenticated: Boolean,
    /* Group identifier for the lease. */
    _group: String
)
object ServerLease {
    def toStringBody(var_mac: Object, var_authenticated: Object, var_group: Object) =
        s"""
        | {
        | "mac":$var_mac,"authenticated":$var_authenticated,"group":$var_group
        | }
        """.stripMargin
}
