
package org.openapitools.client.model


case class MailDeliverabilityResponse (
    /* Delivered and bounced counts. */
    _stat: Option[Any],
    /* Bounce percentage. */
    _percent: Option[Number],
    /* Detailed deliverability breakdown by sender or domain. */
    _table_data: Option[List[List[String]]]
)
object MailDeliverabilityResponse {
    def toStringBody(var_stat: Object, var_percent: Object, var_table_data: Object) =
        s"""
        | {
        | "stat":$var_stat,"percent":$var_percent,"table_data":$var_table_data
        | }
        """.stripMargin
}
