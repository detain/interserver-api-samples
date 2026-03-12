
package org.openapitools.client.model


case class ServerExtraInfoTables (
    _assets: ServerAssets
)
object ServerExtraInfoTables {
    def toStringBody(var_assets: Object) =
        s"""
        | {
        | "assets":$var_assets
        | }
        """.stripMargin
}
