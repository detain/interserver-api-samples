
package org.openapitools.client.model


case class ServerOrderRAID (
    /* RAID ID. */
    _id: Option[String],
    /* RAID price. */
    _price: Option[Integer],
    /* RAID image. */
    _img: Option[String],
    /* Short description of the RAID. */
    _short_desc: Option[String],
    /* Long description of the RAID. */
    _long_desc: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Active status. */
    _active: Option[String],
    /* Display of RAID price. */
    _price_display: Option[String],
    /* Display of monthly RAID price. */
    _monthly_price_display: Option[String]
)
object ServerOrderRAID {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_monthly_price: Object, var_active: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"monthly_price":$var_monthly_price,"active":$var_active,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
