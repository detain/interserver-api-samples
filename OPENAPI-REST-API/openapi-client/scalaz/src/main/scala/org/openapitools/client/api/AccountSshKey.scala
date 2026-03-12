package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import AccountSshKey._

case class AccountSshKey (
  ssh_key: Option[String])

object AccountSshKey {
  import DateTimeCodecs._

  implicit val AccountSshKeyCodecJson: CodecJson[AccountSshKey] = CodecJson.derive[AccountSshKey]
  implicit val AccountSshKeyDecoder: EntityDecoder[AccountSshKey] = jsonOf[AccountSshKey]
  implicit val AccountSshKeyEncoder: EntityEncoder[AccountSshKey] = jsonEncoderOf[AccountSshKey]
}
