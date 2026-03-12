package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import BackupsOrder._

case class BackupsOrder (
  packageCosts: BackupsOrderPackageCosts,
serviceTypes: BackupsOrderServiceTypes)

object BackupsOrder {
  import DateTimeCodecs._

  implicit val BackupsOrderCodecJson: CodecJson[BackupsOrder] = CodecJson.derive[BackupsOrder]
  implicit val BackupsOrderDecoder: EntityDecoder[BackupsOrder] = jsonOf[BackupsOrder]
  implicit val BackupsOrderEncoder: EntityEncoder[BackupsOrder] = jsonEncoderOf[BackupsOrder]
}
