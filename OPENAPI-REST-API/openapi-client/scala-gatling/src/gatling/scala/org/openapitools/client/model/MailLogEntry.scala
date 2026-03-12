
package org.openapitools.client.model


case class MailLogEntry (
    /* internal db id */
    __id: Integer,
    /* mail id */
    _id: String,
    /* from address */
    _from: String,
    /* to address */
    _to: String,
    /* email subject */
    _subject: String,
    /* creation date */
    _created: String,
    /* creation timestamp */
    _time: Integer,
    /* user account */
    _user: String,
    /* transaction type */
    _transtype: String,
    /* origin ip */
    _origin: String,
    /* interface name */
    _interface: String,
    /* sending zone */
    _sendingZone: String,
    /* email body size in bytes */
    _bodySize: Integer,
    /* index of email in the to adderess list */
    _seq: Integer,
    /* to address this email is being sent to */
    _recipient: String,
    /* to address domain */
    _domain: String,
    /* locked status */
    _locked: Integer,
    /* lock timestamp */
    _lockTime: Integer,
    /* assigned server */
    _assigned: String,
    /* queued timestamp */
    _queued: String,
    /* mx hostname */
    _mxHostname: String,
    /* mail delivery response */
    _response: String,
    /* message id */
    _messageId: Option[String]
)
object MailLogEntry {
    def toStringBody(var__id: Object, var_id: Object, var_from: Object, var_to: Object, var_subject: Object, var_created: Object, var_time: Object, var_user: Object, var_transtype: Object, var_origin: Object, var_interface: Object, var_sendingZone: Object, var_bodySize: Object, var_seq: Object, var_recipient: Object, var_domain: Object, var_locked: Object, var_lockTime: Object, var_assigned: Object, var_queued: Object, var_mxHostname: Object, var_response: Object, var_messageId: Object) =
        s"""
        | {
        | "_id":$var__id,"id":$var_id,"from":$var_from,"to":$var_to,"subject":$var_subject,"created":$var_created,"time":$var_time,"user":$var_user,"transtype":$var_transtype,"origin":$var_origin,"interface":$var_interface,"sendingZone":$var_sendingZone,"bodySize":$var_bodySize,"seq":$var_seq,"recipient":$var_recipient,"domain":$var_domain,"locked":$var_locked,"lockTime":$var_lockTime,"assigned":$var_assigned,"queued":$var_queued,"mxHostname":$var_mxHostname,"response":$var_response,"messageId":$var_messageId
        | }
        """.stripMargin
}
