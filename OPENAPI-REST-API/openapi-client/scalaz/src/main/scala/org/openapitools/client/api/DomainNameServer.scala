package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainNameServer._

case class DomainNameServer (
  sortorder: Option[String],
name: Option[String],
ipaddress: Option[String])

object DomainNameServer {
  import DateTimeCodecs._

  implicit val DomainNameServerCodecJson: CodecJson[DomainNameServer] = CodecJson.derive[DomainNameServer]
  implicit val DomainNameServerDecoder: EntityDecoder[DomainNameServer] = jsonOf[DomainNameServer]
  implicit val DomainNameServerEncoder: EntityEncoder[DomainNameServer] = jsonEncoderOf[DomainNameServer]
}
