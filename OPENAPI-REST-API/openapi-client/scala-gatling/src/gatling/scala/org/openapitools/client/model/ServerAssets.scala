
package org.openapitools.client.model


case class ServerAssets (
    /* The title of the assets. */
    _title: Option[String],
    /* The size of the assets. */
    _size: Option[Integer],
    /* The type of the assets. */
    _type: Option[String],
    /* The header of the assets table. */
    _header: Option[List[String]],
    /* The rows of the assets table. */
    _rows: Option[List[List[String]]]
)
object ServerAssets {
    def toStringBody(var_title: Object, var_size: Object, var_type: Object, var_header: Object, var_rows: Object) =
        s"""
        | {
        | "title":$var_title,"size":$var_size,"type":$var_type,"header":$var_header,"rows":$var_rows
        | }
        """.stripMargin
}
