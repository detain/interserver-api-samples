package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import DomainNameserverPutRequest._

case class DomainNameserverPutRequest (
  nameserver: List[String])

object DomainNameserverPutRequest {
  import DateTimeCodecs._

  implicit val DomainNameserverPutRequestCodecJson: CodecJson[DomainNameserverPutRequest] = CodecJson.derive[DomainNameserverPutRequest]
  implicit val DomainNameserverPutRequestDecoder: EntityDecoder[DomainNameserverPutRequest] = jsonOf[DomainNameserverPutRequest]
  implicit val DomainNameserverPutRequestEncoder: EntityEncoder[DomainNameserverPutRequest] = jsonEncoderOf[DomainNameserverPutRequest]
}
