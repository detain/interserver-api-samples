package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DnsListItem._

case class DnsListItem (
  id: Option[Integer],
name: Option[String],
content: Option[String])

object DnsListItem {
  import DateTimeCodecs._

  implicit val DnsListItemCodecJson: CodecJson[DnsListItem] = CodecJson.derive[DnsListItem]
  implicit val DnsListItemDecoder: EntityDecoder[DnsListItem] = jsonOf[DnsListItem]
  implicit val DnsListItemEncoder: EntityEncoder[DnsListItem] = jsonEncoderOf[DnsListItem]
}
