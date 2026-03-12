package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import ServerOrderFieldLabels._

case class ServerOrderFieldLabels (
  /* Bandwidth field label. */
  bandwidth: Option[ServerOrderFieldLabel],
/* IPs field label. */
  ips: Option[ServerOrderFieldLabel],
/* Operating System field label. */
  os: Option[ServerOrderFieldLabel],
/* Control Panel field label. */
  cp: Option[ServerOrderFieldLabel],
/* RAID field label. */
  raid: Option[ServerOrderFieldLabel],
/* Memory field label. */
  memory: Option[ServerOrderFieldLabel],
/* Hard Drives field label */
  hd: Option[ServerOrderFieldLabel])

object ServerOrderFieldLabels {
  import DateTimeCodecs._

  implicit val ServerOrderFieldLabelsCodecJson: CodecJson[ServerOrderFieldLabels] = CodecJson.derive[ServerOrderFieldLabels]
  implicit val ServerOrderFieldLabelsDecoder: EntityDecoder[ServerOrderFieldLabels] = jsonOf[ServerOrderFieldLabels]
  implicit val ServerOrderFieldLabelsEncoder: EntityEncoder[ServerOrderFieldLabels] = jsonEncoderOf[ServerOrderFieldLabels]
}
