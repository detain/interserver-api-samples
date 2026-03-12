package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime

import scala.collection.mutable.ListBuffer

import DomainNameserverGetResponse._

case class DomainNameserverGetResponse (
  
object DomainNameserverGetResponse {
  import DateTimeCodecs._

  implicit val DomainNameserverGetResponseCodecJson: CodecJson[DomainNameserverGetResponse] = CodecJson.derive[DomainNameserverGetResponse]
  implicit val DomainNameserverGetResponseDecoder: EntityDecoder[DomainNameserverGetResponse] = jsonOf[DomainNameserverGetResponse]
  implicit val DomainNameserverGetResponseEncoder: EntityEncoder[DomainNameserverGetResponse] = jsonEncoderOf[DomainNameserverGetResponse]
}
