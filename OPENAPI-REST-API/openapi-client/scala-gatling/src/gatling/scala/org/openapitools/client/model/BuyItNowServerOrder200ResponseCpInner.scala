
package org.openapitools.client.model


case class BuyItNowServerOrder200ResponseCpInner (
    _id: Option[String],
    _short_desc: Option[String],
    _long_desc: Option[String],
    _os_type: Option[String],
    _monthly_price: Option[String]
)
object BuyItNowServerOrder200ResponseCpInner {
    def toStringBody(var_id: Object, var_short_desc: Object, var_long_desc: Object, var_os_type: Object, var_monthly_price: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"os_type":$var_os_type,"monthly_price":$var_monthly_price
        | }
        """.stripMargin
}
