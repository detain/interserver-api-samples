
package org.openapitools.client.model


case class PlaceBuyNowServerRequest (
    /* The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs. */
    _server_id: Option[Number],
    /* The fully-qualified hostname to assign to the server. */
    _server_hostname: Option[String],
    /* The root or administrator password to set on the server. */
    _server_root_password: Option[String]
)
object PlaceBuyNowServerRequest {
    def toStringBody(var_server_id: Object, var_server_hostname: Object, var_server_root_password: Object) =
        s"""
        | {
        | "server_id":$var_server_id,"server_hostname":$var_server_hostname,"server_root_password":$var_server_root_password
        | }
        """.stripMargin
}
