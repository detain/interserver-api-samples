
package org.openapitools.client.model


case class IpBlock (
    _id: Option[Integer],
    _short_desc: Option[String],
    _qty: Option[String],
    _monthly_price: Option[Number]
)
object IpBlock {
    def toStringBody(var_id: Object, var_short_desc: Object, var_qty: Object, var_monthly_price: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"qty":$var_qty,"monthly_price":$var_monthly_price
        | }
        """.stripMargin
}
