
package org.openapitools.client.model


case class HomeTicketStatusView (
    /* Status corresponding to view number 4. */
    _4: Option[String],
    /* Status corresponding to view number 5. */
    _5: Option[String],
    /* Status corresponding to view number 6. */
    _6: Option[String]
)
object HomeTicketStatusView {
    def toStringBody(var_4: Object, var_5: Object, var_6: Object) =
        s"""
        | {
        | "4":$var_4,"5":$var_5,"6":$var_6
        | }
        """.stripMargin
}
