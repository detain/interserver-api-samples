
package org.openapitools.client.model


case class GetOrderDetail200ResponseIpsInner (
    _service_id: Option[Number],
    _service_module: Option[String],
    _service_hostname: Option[String]
)
object GetOrderDetail200ResponseIpsInner {
    def toStringBody(var_service_id: Object, var_service_module: Object, var_service_hostname: Object) =
        s"""
        | {
        | "service_id":$var_service_id,"service_module":$var_service_module,"service_hostname":$var_service_hostname
        | }
        """.stripMargin
}
