
package org.openapitools.client.model


case class ServerOrderControlPanel (
    /* Control Panel ID. */
    _id: Option[String],
    /* Control Panel price. */
    _price: Option[Integer],
    /* Control Panel image. */
    _img: Option[String],
    /* Short description of the control panel. */
    _short_desc: Option[String],
    /* Long description of the control panel. */
    _long_desc: Option[String],
    /* OS types compatible with the control panel. */
    _os_type: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* List of types. */
    _types: Option[List[String]],
    /* Display of control panel price. */
    _price_display: Option[String],
    /* Display of monthly control panel price. */
    _monthly_price_display: Option[String]
)
object ServerOrderControlPanel {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_os_type: Object, var_monthly_price: Object, var_types: Object, var_price_display: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"os_type":$var_os_type,"monthly_price":$var_monthly_price,"types":$var_types,"price_display":$var_price_display,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
