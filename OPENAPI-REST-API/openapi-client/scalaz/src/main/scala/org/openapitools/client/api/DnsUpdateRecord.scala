package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsUpdateRecord._

case class DnsUpdateRecord (
  name: Option[String],
`type`: Option[DnsRecordType],
content: Option[String],
ttl: Option[String],
prio: Option[String],
disabled: Option[String],
ordername: Option[String],
auth: Option[String])

object DnsUpdateRecord {
  import DateTimeCodecs._

  implicit val DnsUpdateRecordCodecJson: CodecJson[DnsUpdateRecord] = CodecJson.derive[DnsUpdateRecord]
  implicit val DnsUpdateRecordDecoder: EntityDecoder[DnsUpdateRecord] = jsonOf[DnsUpdateRecord]
  implicit val DnsUpdateRecordEncoder: EntityEncoder[DnsUpdateRecord] = jsonEncoderOf[DnsUpdateRecord]
}
