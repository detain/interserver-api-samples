
package org.openapitools.client.model


case class TicketsCountArray (
    _Open: Option[Integer],
    _On_Hold: Option[Integer],
    _Closed: Option[Integer]
)
object TicketsCountArray {
    def toStringBody(var_Open: Object, var_On_Hold: Object, var_Closed: Object) =
        s"""
        | {
        | "Open":$var_Open,"On_Hold":$var_On_Hold,"Closed":$var_Closed
        | }
        """.stripMargin
}
