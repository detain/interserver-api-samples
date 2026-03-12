
package org.openapitools.client.model


case class PlaceScrubOrder201ResponseOrderDetailsCjParams (
    _containerTagId: Option[Integer],
    _CID: Option[Integer],
    _OID: Option[String],
    _TYPE: Option[Integer],
    _ITEM1: Option[String],
    _AMT1: Option[Integer],
    _QTY1: Option[Integer],
    _CURRENCY: Option[String]
)
object PlaceScrubOrder201ResponseOrderDetailsCjParams {
    def toStringBody(var_containerTagId: Object, var_CID: Object, var_OID: Object, var_TYPE: Object, var_ITEM1: Object, var_AMT1: Object, var_QTY1: Object, var_CURRENCY: Object) =
        s"""
        | {
        | "containerTagId":$var_containerTagId,"CID":$var_CID,"OID":$var_OID,"TYPE":$var_TYPE,"ITEM1":$var_ITEM1,"AMT1":$var_AMT1,"QTY1":$var_QTY1,"CURRENCY":$var_CURRENCY
        | }
        """.stripMargin
}
