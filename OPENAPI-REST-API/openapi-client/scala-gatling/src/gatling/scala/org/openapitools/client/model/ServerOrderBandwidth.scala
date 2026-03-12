
package org.openapitools.client.model


case class ServerOrderBandwidth (
    /* Bandwidth ID. */
    _id: Option[String],
    /* Bandwidth price. */
    _price: Option[Integer],
    /* Bandwidth image. */
    _img: Option[String],
    /* Short description of the bandwidth. */
    _short_desc: Option[String],
    /* Long description of the bandwidth. */
    _long_desc: Option[String],
    /* Bandwidth type. */
    _type: Option[String],
    /* Quantity of bandwidth. */
    _qty: Option[String],
    /* Active status. */
    _active: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Display of bandwidth price. */
    _price_display: Option[String],
    /* Display of monthly bandwidth price. */
    _monthly_price_display: Option[String]
)
object ServerOrderBandwidth {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_type: Object, var_qty: Object, var_active: Object, var_monthly_price: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"type":$var_type,"qty":$var_qty,"active":$var_active,"monthly_price":$var_monthly_price,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
