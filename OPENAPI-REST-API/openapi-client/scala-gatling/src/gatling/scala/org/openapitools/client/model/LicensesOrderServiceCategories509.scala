
package org.openapitools.client.model


case class LicensesOrderServiceCategories509 (
    /* Category ID */
    _category_id: Option[String],
    /* Category Name */
    _category_name: Option[String],
    /* Category Tag */
    _category_tag: Option[String],
    /* Category Module */
    _category_module: Option[String]
)
object LicensesOrderServiceCategories509 {
    def toStringBody(var_category_id: Object, var_category_name: Object, var_category_tag: Object, var_category_module: Object) =
        s"""
        | {
        | "category_id":$var_category_id,"category_name":$var_category_name,"category_tag":$var_category_tag,"category_module":$var_category_module
        | }
        """.stripMargin
}
