package io.swagger.server.model


/**
 * = MailLogEntry =
 *
 * An email record
 *
 * @param _id internal db id for example: ''103172''
 * @param id mail id for example: ''17c7eda538e0005d03''
 * @param from from address for example: ''person@mysite.com''
 * @param to to address for example: ''client@isp.com''
 * @param subject email subject for example: ''sell 0.005 shares''
 * @param messageId message id for example: ''<vmiLEebsuCbSpUxD7oN3REpaN4VbN6BrdCAbNKIrdAo@relay0.mailbaby.net>''
 * @param created creation date for example: ''2021-10-14 08:50:10''
 * @param time creation timestamp for example: ''1634215809''
 * @param user user account for example: ''mb5658''
 * @param transtype transaction type for example: ''ESMTPSA''
 * @param origin origin ip for example: ''199.231.189.154''
 * @param interface interface name for example: ''feeder''
 * @param sendingZone sending zone for example: ''interserver''
 * @param bodySize email body size in bytes for example: ''63''
 * @param seq index of email in the to adderess list for example: ''1''
 * @param recipient to address this email is being sent to for example: ''client@isp.com''
 * @param domain to address domain for example: ''interserver.net''
 * @param locked locked status for example: ''1''
 * @param lockTime lock timestamp for example: ''1634215818533''
 * @param assigned assigned server for example: ''relay1''
 * @param queued queued timestamp for example: ''2021-10-14T12:50:15.487Z''
 * @param mxHostname mx hostname for example: ''mx.j.is.cc''
 * @param response mail delivery response for example: ''250 2.0.0 Ok queued as C91D83E128C''
 */
case class MailLogEntry (
  _id: Int,
  id: String,
  from: String,
  to: String,
  subject: String,
  messageId: Option[String],
  created: String,
  time: Int,
  user: String,
  transtype: String,
  origin: String,
  interface: String,
  sendingZone: String,
  bodySize: Int,
  seq: Int,
  recipient: String,
  domain: String,
  locked: Int,
  lockTime: Int,
  assigned: String,
  queued: String,
  mxHostname: String,
  response: String
)

