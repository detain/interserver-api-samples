
package org.openapitools.client.model


case class ServerOrderMemory (
    /* Memory ID. */
    _id: Option[String],
    /* Memory price. */
    _price: Option[String],
    /* Memory image. */
    _img: Option[String],
    /* Short description of the memory. */
    _short_desc: Option[String],
    /* Long description of the memory. */
    _long_desc: Option[String],
    /* Manufacturer information. */
    _manu: Option[String],
    /* Memory size. */
    _size: Option[String],
    /* Memory type. */
    _type: Option[String],
    /* Hidden status. */
    _hidden: Option[String],
    /* Monthly price. */
    _monthly_price: Option[Integer],
    /* Drive type. */
    _drive_type: Option[String],
    /* Display of monthly memory price. */
    _monthly_price_display: Option[String]
)
object ServerOrderMemory {
    def toStringBody(var_id: Object, var_price: Object, var_img: Object, var_short_desc: Object, var_long_desc: Object, var_manu: Object, var_size: Object, var_type: Object, var_hidden: Object, var_monthly_price: Object, var_drive_type: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"price":$var_price,"img":$var_img,"short_desc":$var_short_desc,"long_desc":$var_long_desc,"manu":$var_manu,"size":$var_size,"type":$var_type,"hidden":$var_hidden,"monthly_price":$var_monthly_price,"drive_type":$var_drive_type,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
