
package org.openapitools.client.model


case class VpsPleskLicense (
    _id: Option[Integer],
    _name: Option[String],
    _sub_name: Option[String],
    _cost: Option[Integer]
)
object VpsPleskLicense {
    def toStringBody(var_id: Object, var_name: Object, var_sub_name: Object, var_cost: Object) =
        s"""
        | {
        | "id":$var_id,"name":$var_name,"sub_name":$var_sub_name,"cost":$var_cost
        | }
        """.stripMargin
}
