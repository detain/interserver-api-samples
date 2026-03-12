
package org.openapitools.client.model


case class Bandwidth (
    _id: Option[Integer],
    _short_desc: Option[String],
    _monthly_price: Option[Number],
    _monthly_price_display: Option[String]
)
object Bandwidth {
    def toStringBody(var_id: Object, var_short_desc: Object, var_monthly_price: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"monthly_price":$var_monthly_price,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
