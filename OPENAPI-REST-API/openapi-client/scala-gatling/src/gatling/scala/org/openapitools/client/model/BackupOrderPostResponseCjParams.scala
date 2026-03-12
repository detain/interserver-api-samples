
package org.openapitools.client.model


case class BackupOrderPostResponseCjParams (
    _containerTagId: Option[String],
    _CID: Option[String],
    _OID: Option[String],
    _TYPE: Option[String],
    _ITEM1: Option[String],
    _AMT1: Option[String],
    _QTY1: Option[Integer],
    _CURRENCY: Option[String]
)
object BackupOrderPostResponseCjParams {
    def toStringBody(var_containerTagId: Object, var_CID: Object, var_OID: Object, var_TYPE: Object, var_ITEM1: Object, var_AMT1: Object, var_QTY1: Object, var_CURRENCY: Object) =
        s"""
        | {
        | "containerTagId":$var_containerTagId,"CID":$var_CID,"OID":$var_OID,"TYPE":$var_TYPE,"ITEM1":$var_ITEM1,"AMT1":$var_AMT1,"QTY1":$var_QTY1,"CURRENCY":$var_CURRENCY
        | }
        """.stripMargin
}
