package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import HomeDetails._

case class HomeDetails (
  modules: Option[HomeDetailsModules])

object HomeDetails {
  import DateTimeCodecs._

  implicit val HomeDetailsCodecJson: CodecJson[HomeDetails] = CodecJson.derive[HomeDetails]
  implicit val HomeDetailsDecoder: EntityDecoder[HomeDetails] = jsonOf[HomeDetails]
  implicit val HomeDetailsEncoder: EntityEncoder[HomeDetails] = jsonEncoderOf[HomeDetails]
}
