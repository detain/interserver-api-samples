
package org.openapitools.client.model


case class LoginServiceCounts (
    /* The number of total VPS orders that have been placed in our billing system. */
    _vps: Integer,
    /* The number of total website orders that have been placed in our billing system. */
    _websites: Integer,
    /* The number of total server orders that have been placed in our billing system. */
    _servers: Integer
)
object LoginServiceCounts {
    def toStringBody(var_vps: Object, var_websites: Object, var_servers: Object) =
        s"""
        | {
        | "vps":$var_vps,"websites":$var_websites,"servers":$var_servers
        | }
        """.stripMargin
}
