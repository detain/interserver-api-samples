
package org.openapitools.client.model


case class VpsServiceExtra (
    /* Spice */
    _spice: Option[Integer],
    _snapshots: Option[List[VpsSnapshot]]
)
object VpsServiceExtra {
    def toStringBody(var_spice: Object, var_snapshots: Object) =
        s"""
        | {
        | "spice":$var_spice,"snapshots":$var_snapshots
        | }
        """.stripMargin
}
