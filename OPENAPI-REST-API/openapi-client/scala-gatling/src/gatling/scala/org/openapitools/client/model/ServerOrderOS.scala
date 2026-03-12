
package org.openapitools.client.model


case class ServerOrderOS (
    /* Operating System ID. */
    _id: Option[String],
    /* Operating System price. */
    _price: Option[Integer],
    /* Operating System image. */
    _img: Option[String],
    /* Short description of the OS. */
    _short_desc: Option[String],
    /* Long description of the OS. */
    _long_desc: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Active status. */
    _active: Option[String],
    /* Display of OS price. */
    _price_display: Option[String],
    /* Display of monthly OS price. */
    _monthly_price_display: Option[String]
)
object ServerOrderOS {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_monthly_price: Object, var_active: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"monthly_price":$var_monthly_price,"active":$var_active,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
