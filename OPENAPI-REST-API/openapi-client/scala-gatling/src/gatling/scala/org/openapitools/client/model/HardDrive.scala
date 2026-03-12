
package org.openapitools.client.model


case class HardDrive (
    _id: Option[Integer],
    _short_desc: Option[String],
    _size: Option[String],
    _drive_type: Option[String],
    _monthly_price: Option[Number],
    _monthly_price_display: Option[String]
)
object HardDrive {
    def toStringBody(var_id: Object, var_short_desc: Object, var_size: Object, var_drive_type: Object, var_monthly_price: Object, var_monthly_price_display: Object) =
        s"""
        | {
        | "id":$var_id,"short_desc":$var_short_desc,"size":$var_size,"drive_type":$var_drive_type,"monthly_price":$var_monthly_price,"monthly_price_display":$var_monthly_price_display
        | }
        """.stripMargin
}
