package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import CreateFilter._

case class CreateFilter (
  filter_type: String,
port: Integer)

object CreateFilter {
  import DateTimeCodecs._

  implicit val CreateFilterCodecJson: CodecJson[CreateFilter] = CodecJson.derive[CreateFilter]
  implicit val CreateFilterDecoder: EntityDecoder[CreateFilter] = jsonOf[CreateFilter]
  implicit val CreateFilterEncoder: EntityEncoder[CreateFilter] = jsonEncoderOf[CreateFilter]
}
