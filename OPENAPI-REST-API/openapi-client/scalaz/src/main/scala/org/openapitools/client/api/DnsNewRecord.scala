package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsNewRecord._

case class DnsNewRecord (
  /* Name part of record */
  name: String,
`type`: DnsRecordType,
/* Content of record */
  content: String,
/* Time-to-live */
  ttl: Option[Integer],
/* Priority */
  prio: Option[Integer])

object DnsNewRecord {
  import DateTimeCodecs._

  implicit val DnsNewRecordCodecJson: CodecJson[DnsNewRecord] = CodecJson.derive[DnsNewRecord]
  implicit val DnsNewRecordDecoder: EntityDecoder[DnsNewRecord] = jsonOf[DnsNewRecord]
  implicit val DnsNewRecordEncoder: EntityEncoder[DnsNewRecord] = jsonEncoderOf[DnsNewRecord]
}
