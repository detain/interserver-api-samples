
package org.openapitools.client.model


case class ServerRow (
    /* The id of the server. */
    _server_id: String,
    /* The account lid of the server. */
    _account_lid: String,
    /* The hostname of the server. */
    _server_hostname: String,
    /* The status of the server. */
    _server_status: String
)
object ServerRow {
    def toStringBody(var_server_id: Object, var_account_lid: Object, var_server_hostname: Object, var_server_status: Object) =
        s"""
        | {
        | "server_id":$var_server_id,"account_lid":$var_account_lid,"server_hostname":$var_server_hostname,"server_status":$var_server_status
        | }
        """.stripMargin
}
