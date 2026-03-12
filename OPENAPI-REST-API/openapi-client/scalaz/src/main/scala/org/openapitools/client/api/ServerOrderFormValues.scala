package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderFormValues._

case class ServerOrderFormValues (
  /* Memory value for the server order. */
  memory: Option[Integer],
/* Bandwidth value for the server order. */
  bandwidth: Option[String],
/* IPs value for the server order. */
  ips: Option[String],
/* Operating System value for the server order. */
  os: Option[String],
/* Control Panel value for the server order. */
  cp: Option[Integer],
/* RAID value for the server order. */
  raid: Option[String],
/* Hard Drives value for the server order. */
  hd: Option[String])

object ServerOrderFormValues {
  import DateTimeCodecs._

  implicit val ServerOrderFormValuesCodecJson: CodecJson[ServerOrderFormValues] = CodecJson.derive[ServerOrderFormValues]
  implicit val ServerOrderFormValuesDecoder: EntityDecoder[ServerOrderFormValues] = jsonOf[ServerOrderFormValues]
  implicit val ServerOrderFormValuesEncoder: EntityEncoder[ServerOrderFormValues] = jsonEncoderOf[ServerOrderFormValues]
}
