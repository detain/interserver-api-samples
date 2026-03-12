
package org.openapitools.client.model


case class AssetServer (
    _id: Option[Integer],
    _Region: Option[String],
    _price: Option[String],
    _CPU: Option[List[AssetServerCPUInner]],
    _Memory: Option[List[AssetServerCPUInner]],
    _Bandwidth: Option[List[AssetServerCPUInner]],
    _IPs: Option[List[AssetServerCPUInner]],
    _HD: Option[Map[String, String]]
)
object AssetServer {
    def toStringBody(var_id: Object, var_Region: Object, var_price: Object, var_CPU: Object, var_Memory: Object, var_Bandwidth: Object, var_IPs: Object, var_HD: Object) =
        s"""
        | {
        | "id":$var_id,"Region":$var_Region,"price":$var_price,"CPU":$var_CPU,"Memory":$var_Memory,"Bandwidth":$var_Bandwidth,"IPs":$var_IPs,"HD":$var_HD
        | }
        """.stripMargin
}
