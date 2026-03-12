
package org.openapitools.client.model


case class ServiceType (
    _st_id: Integer,
    _st_name: String,
    _st_category: Integer,
    _st_module: String
)
object ServiceType {
    def toStringBody(var_st_id: Object, var_st_name: Object, var_st_category: Object, var_st_module: Object) =
        s"""
        | {
        | "st_id":$var_st_id,"st_name":$var_st_name,"st_category":$var_st_category,"st_module":$var_st_module
        | }
        """.stripMargin
}
