
package org.openapitools.client.model


case class VpsCPData (
    /* Control panel name (e.g., cPanel). */
    _name: Option[String],
    /* Monthly cost in cents for the control panel license. */
    _cost: Option[Integer]
)
object VpsCPData {
    def toStringBody(var_name: Object, var_cost: Object) =
        s"""
        | {
        | "name":$var_name,"cost":$var_cost
        | }
        """.stripMargin
}
