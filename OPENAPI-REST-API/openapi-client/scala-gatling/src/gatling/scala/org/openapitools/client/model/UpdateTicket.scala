
package org.openapitools.client.model


case class UpdateTicket (
    _ip: Option[String],
    _ip_address: Option[String],
    _customer_server_access: Option[String],
    _root_password: Option[String],
    _sudo_username: Option[String],
    _sudo_password: Option[String],
    _port: Option[Integer]
)
object UpdateTicket {
    def toStringBody(var_ip: Object, var_ip_address: Object, var_customer_server_access: Object, var_root_password: Object, var_sudo_username: Object, var_sudo_password: Object, var_port: Object) =
        s"""
        | {
        | "ip":$var_ip,"ip_address":$var_ip_address,"customer_server_access":$var_customer_server_access,"root_password":$var_root_password,"sudo_username":$var_sudo_username,"sudo_password":$var_sudo_password,"port":$var_port
        | }
        """.stripMargin
}
