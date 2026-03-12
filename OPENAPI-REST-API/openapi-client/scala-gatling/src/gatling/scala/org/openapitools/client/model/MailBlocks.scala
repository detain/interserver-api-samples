
package org.openapitools.client.model


case class MailBlocks (
    _local: List[MailBlockClickHouse],
    _mbtrap: List[MailBlockClickHouse],
    _subject: List[MailBlockRspamd]
)
object MailBlocks {
    def toStringBody(var_local: Object, var_mbtrap: Object, var_subject: Object) =
        s"""
        | {
        | "local":$var_local,"mbtrap":$var_mbtrap,"subject":$var_subject
        | }
        """.stripMargin
}
