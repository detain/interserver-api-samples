
package org.openapitools.client.model


case class OperatingSystem (
    _id: Option[Integer],
    _short_desc: Option[String],
    _monthly_price: Option[Number]
)
object OperatingSystem {
    def toStringBody(var_id: Object, var_short_desc: Object, var_monthly_price: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"monthly_price":$var_monthly_price
        | }
        """.stripMargin
}
