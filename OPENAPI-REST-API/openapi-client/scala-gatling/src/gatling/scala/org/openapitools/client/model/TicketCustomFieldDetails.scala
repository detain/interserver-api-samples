
package org.openapitools.client.model


case class TicketCustomFieldDetails (
    _Customer_Server_Access: Option[String],
    _Ip_Address: Option[String],
    _Root_Password: Option[String],
    _Sudo_User: Option[String],
    _Sudo_Password: Option[Integer],
    _Port: Option[Integer]
)
object TicketCustomFieldDetails {
    def toStringBody(var_Customer_Server_Access: Object, var_Ip_Address: Object, var_Root_Password: Object, var_Sudo_User: Object, var_Sudo_Password: Object, var_Port: Object) =
        s"""
        | {
        | "Customer_Server_Access":$var_Customer_Server_Access,"Ip_Address":$var_Ip_Address,"Root_Password":$var_Root_Password,"Sudo_User":$var_Sudo_User,"Sudo_Password":$var_Sudo_Password,"Port":$var_Port
        | }
        """.stripMargin
}
