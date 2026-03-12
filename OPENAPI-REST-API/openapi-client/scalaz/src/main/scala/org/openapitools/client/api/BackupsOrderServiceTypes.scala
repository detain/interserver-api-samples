package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupsOrderServiceTypes._

case class BackupsOrderServiceTypes (
  `11006`: Option[BackupsOrderServiceTypes])

object BackupsOrderServiceTypes {
  import DateTimeCodecs._

  implicit val BackupsOrderServiceTypesCodecJson: CodecJson[BackupsOrderServiceTypes] = CodecJson.derive[BackupsOrderServiceTypes]
  implicit val BackupsOrderServiceTypesDecoder: EntityDecoder[BackupsOrderServiceTypes] = jsonOf[BackupsOrderServiceTypes]
  implicit val BackupsOrderServiceTypesEncoder: EntityEncoder[BackupsOrderServiceTypes] = jsonEncoderOf[BackupsOrderServiceTypes]
}
