
package org.openapitools.client.model


case class VpsDALicense (
    /* License tier name. */
    _name: Option[String],
    /* License tier sub-name. */
    _sub_name: Option[String],
    /* Monthly cost in cents. */
    _cost: Option[Integer],
    /* Image path for the disabled state icon. */
    _img_disabled: Option[String],
    /* Image path for the active state icon. */
    _img_active: Option[String]
)
object VpsDALicense {
    def toStringBody(var_name: Object, var_sub_name: Object, var_cost: Object, var_img_disabled: Object, var_img_active: Object) =
        s"""
        | {
        | "name":$var_name,"sub_name":$var_sub_name,"cost":$var_cost,"img_disabled":$var_img_disabled,"img_active":$var_img_active
        | }
        """.stripMargin
}
