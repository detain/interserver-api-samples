
package org.openapitools.client.model


case class BackupsOrder (
    _packageCosts: BackupsOrderPackageCosts,
    _serviceTypes: BackupsOrderServiceTypes
)
object BackupsOrder {
    def toStringBody(var_packageCosts: Object, var_serviceTypes: Object) =
        s"""
        | {
        | "packageCosts":$var_packageCosts,"serviceTypes":$var_serviceTypes
        | }
        """.stripMargin
}
