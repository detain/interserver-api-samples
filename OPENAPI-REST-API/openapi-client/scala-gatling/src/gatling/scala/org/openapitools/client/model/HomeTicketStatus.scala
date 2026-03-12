
package org.openapitools.client.model


case class HomeTicketStatus (
    /* Count of open tickets. */
    _Open: Option[Integer],
    /* Count of tickets on hold. */
    _On_Hold: Option[Integer]
)
object HomeTicketStatus {
    def toStringBody(var_Open: Object, var_On_Hold: Object) =
        s"""
        | {
        | "Open":$var_Open,"On_Hold":$var_On_Hold
        | }
        """.stripMargin
}
