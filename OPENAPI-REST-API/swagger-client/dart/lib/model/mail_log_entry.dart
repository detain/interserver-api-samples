part of swagger.api;

class MailLogEntry {
  /* internal db id */
  int id = null;
/* mail id */
  String id = null;
/* from address */
  String from = null;
/* to address */
  String to = null;
/* email subject */
  String subject = null;
/* message id */
  String messageId = null;
/* creation date */
  String created = null;
/* creation timestamp */
  int time = null;
/* user account */
  String user = null;
/* transaction type */
  String transtype = null;
/* origin ip */
  String origin = null;
/* interface name */
  String interface = null;
/* sending zone */
  String sendingZone = null;
/* email body size in bytes */
  int bodySize = null;
/* index of email in the to adderess list */
  int seq = null;
/* to address this email is being sent to */
  String recipient = null;
/* to address domain */
  String domain = null;
/* locked status */
  int locked = null;
/* lock timestamp */
  int lockTime = null;
/* assigned server */
  String assigned = null;
/* queued timestamp */
  String queued = null;
/* mx hostname */
  String mxHostname = null;
/* mail delivery response */
  String response = null;

  MailLogEntry();

  @override
  String toString() {
    return 'MailLogEntry[id=$id, id=$id, from=$from, to=$to, subject=$subject, messageId=$messageId, created=$created, time=$time, user=$user, transtype=$transtype, origin=$origin, interface=$interface, sendingZone=$sendingZone, bodySize=$bodySize, seq=$seq, recipient=$recipient, domain=$domain, locked=$locked, lockTime=$lockTime, assigned=$assigned, queued=$queued, mxHostname=$mxHostname, response=$response, ]';
  }

  MailLogEntry.fromJson(Map<String, dynamic> json) {
    if (json == null) return;
    id = json['_id'];
    id = json['id'];
    from = json['from'];
    to = json['to'];
    subject = json['subject'];
    messageId = json['messageId'];
    created = json['created'];
    time = json['time'];
    user = json['user'];
    transtype = json['transtype'];
    origin = json['origin'];
    interface = json['interface'];
    sendingZone = json['sendingZone'];
    bodySize = json['bodySize'];
    seq = json['seq'];
    recipient = json['recipient'];
    domain = json['domain'];
    locked = json['locked'];
    lockTime = json['lockTime'];
    assigned = json['assigned'];
    queued = json['queued'];
    mxHostname = json['mxHostname'];
    response = json['response'];
  }

  Map<String, dynamic> toJson() {
    return {
      '_id': id,
      'id': id,
      'from': from,
      'to': to,
      'subject': subject,
      'messageId': messageId,
      'created': created,
      'time': time,
      'user': user,
      'transtype': transtype,
      'origin': origin,
      'interface': interface,
      'sendingZone': sendingZone,
      'bodySize': bodySize,
      'seq': seq,
      'recipient': recipient,
      'domain': domain,
      'locked': locked,
      'lockTime': lockTime,
      'assigned': assigned,
      'queued': queued,
      'mxHostname': mxHostname,
      'response': response
     };
  }

  static List<MailLogEntry> listFromJson(List<dynamic> json) {
    return json == null ? new List<MailLogEntry>() : json.map((value) => new MailLogEntry.fromJson(value)).toList();
  }

  static Map<String, MailLogEntry> mapFromJson(Map<String, Map<String, dynamic>> json) {
    var map = new Map<String, MailLogEntry>();
    if (json != null && json.length > 0) {
      json.forEach((String key, Map<String, dynamic> value) => map[key] = new MailLogEntry.fromJson(value));
    }
    return map;
  }
}
