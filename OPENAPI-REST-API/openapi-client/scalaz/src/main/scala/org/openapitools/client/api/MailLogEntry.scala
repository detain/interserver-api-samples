package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime


import MailLogEntry._

case class MailLogEntry (
  /* internal db id */
  _id: Integer,
/* mail id */
  id: String,
/* from address */
  from: String,
/* to address */
  to: String,
/* email subject */
  subject: String,
/* creation date */
  created: String,
/* creation timestamp */
  time: Integer,
/* user account */
  user: String,
/* transaction type */
  transtype: String,
/* origin ip */
  origin: String,
/* interface name */
  interface: String,
/* sending zone */
  sendingZone: String,
/* email body size in bytes */
  bodySize: Integer,
/* index of email in the to adderess list */
  seq: Integer,
/* to address this email is being sent to */
  recipient: String,
/* to address domain */
  domain: String,
/* locked status */
  locked: Integer,
/* lock timestamp */
  lockTime: Integer,
/* assigned server */
  assigned: String,
/* queued timestamp */
  queued: String,
/* mx hostname */
  mxHostname: String,
/* mail delivery response */
  response: String,
/* message id */
  messageId: Option[String])

object MailLogEntry {
  import DateTimeCodecs._

  implicit val MailLogEntryCodecJson: CodecJson[MailLogEntry] = CodecJson.derive[MailLogEntry]
  implicit val MailLogEntryDecoder: EntityDecoder[MailLogEntry] = jsonOf[MailLogEntry]
  implicit val MailLogEntryEncoder: EntityEncoder[MailLogEntry] = jsonEncoderOf[MailLogEntry]
}
