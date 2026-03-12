
package org.openapitools.client.model


case class ServerOrderIP (
    /* IP ID. */
    _id: Option[String],
    /* IP price. */
    _price: Option[Integer],
    /* IP image. */
    _img: Option[String],
    /* Short description of the IP. */
    _short_desc: Option[String],
    /* Long description of the IP. */
    _long_desc: Option[String],
    /* Quantity of IPs. */
    _qty: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Display of IP price. */
    _price_display: Option[String],
    /* Display of monthly IP price. */
    _monthly_price_display: Option[String]
)
object ServerOrderIP {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_qty: Object, var_monthly_price: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"qty":$var_qty,"monthly_price":$var_monthly_price,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
