
package org.openapitools.client.model


case class MailStatsTypeVolumeFrom (
    _billingsomedomain_com: Option[Integer],
    _salessomedomain_com: Option[Integer]
)
object MailStatsTypeVolumeFrom {
    def toStringBody(var_billingsomedomain_com: Object, var_salessomedomain_com: Object) =
        s"""
        | {
        | "billingsomedomain_com":$var_billingsomedomain_com,"salessomedomain_com":$var_salessomedomain_com
        | }
        """.stripMargin
}
