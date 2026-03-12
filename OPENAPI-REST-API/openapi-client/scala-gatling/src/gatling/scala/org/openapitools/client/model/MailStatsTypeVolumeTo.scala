
package org.openapitools.client.model


case class MailStatsTypeVolumeTo (
    _clientdomain_com: Option[Integer],
    _usersite_net: Option[Integer],
    _salescompany_com: Option[Integer],
    _clientanothersite_com: Option[Integer]
)
object MailStatsTypeVolumeTo {
    def toStringBody(var_clientdomain_com: Object, var_usersite_net: Object, var_salescompany_com: Object, var_clientanothersite_com: Object) =
        s"""
        | {
        | "clientdomain_com":$var_clientdomain_com,"usersite_net":$var_usersite_net,"salescompany_com":$var_salescompany_com,"clientanothersite_com":$var_clientanothersite_com
        | }
        """.stripMargin
}
