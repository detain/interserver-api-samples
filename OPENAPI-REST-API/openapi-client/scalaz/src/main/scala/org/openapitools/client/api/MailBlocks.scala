package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailBlocks._

case class MailBlocks (
  local: List[MailBlockClickHouse],
mbtrap: List[MailBlockClickHouse],
subject: List[MailBlockRspamd])

object MailBlocks {
  import DateTimeCodecs._

  implicit val MailBlocksCodecJson: CodecJson[MailBlocks] = CodecJson.derive[MailBlocks]
  implicit val MailBlocksDecoder: EntityDecoder[MailBlocks] = jsonOf[MailBlocks]
  implicit val MailBlocksEncoder: EntityEncoder[MailBlocks] = jsonEncoderOf[MailBlocks]
}
