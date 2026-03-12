package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountFeatures._

case class AccountFeatures (
  disable_reset: Option[Integer],
disable_reinstall: Option[Integer])

object AccountFeatures {
  import DateTimeCodecs._

  implicit val AccountFeaturesCodecJson: CodecJson[AccountFeatures] = CodecJson.derive[AccountFeatures]
  implicit val AccountFeaturesDecoder: EntityDecoder[AccountFeatures] = jsonOf[AccountFeatures]
  implicit val AccountFeaturesEncoder: EntityEncoder[AccountFeatures] = jsonEncoderOf[AccountFeatures]
}
