
package org.openapitools.client.model


case class ServiceCategory (
    _category_id: Integer,
    _category_name: String,
    _category_tag: String,
    _category_module: String
)
object ServiceCategory {
    def toStringBody(var_category_id: Object, var_category_name: Object, var_category_tag: Object, var_category_module: Object) =
        s"""
        | {
        | "category_id":$var_category_id,"category_name":$var_category_name,"category_tag":$var_category_tag,"category_module":$var_category_module
        | }
        """.stripMargin
}
