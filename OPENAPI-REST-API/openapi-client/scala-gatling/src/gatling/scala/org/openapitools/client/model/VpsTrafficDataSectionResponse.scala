
package org.openapitools.client.model


case class VpsTrafficDataSectionResponse (
    _name: String,
    _data: List[VPSTrafficDataDataSectionResponse]
)
object VpsTrafficDataSectionResponse {
    def toStringBody(var_name: Object, var_data: Object) =
        s"""
        | {
        | "name":$var_name,"data":$var_data
        | }
        """.stripMargin
}
