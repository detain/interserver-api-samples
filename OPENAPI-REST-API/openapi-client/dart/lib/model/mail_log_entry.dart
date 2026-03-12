//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class MailLogEntry {
  /// Returns a new [MailLogEntry] instance.
  MailLogEntry({
    required this.id,
    required this.id,
    required this.from,
    required this.to,
    required this.subject,
    required this.created,
    required this.time,
    required this.user,
    required this.transtype,
    required this.origin,
    required this.interface_,
    required this.sendingZone,
    required this.bodySize,
    required this.seq,
    required this.recipient,
    required this.domain,
    required this.locked,
    required this.lockTime,
    required this.assigned,
    required this.queued,
    required this.mxHostname,
    required this.response,
    this.messageId,
  });

  /// internal db id
  int id;

  /// mail id
  String id;

  /// from address
  String from;

  /// to address
  String to;

  /// email subject
  String subject;

  /// creation date
  String created;

  /// creation timestamp
  int time;

  /// user account
  String user;

  /// transaction type
  String transtype;

  /// origin ip
  String origin;

  /// interface name
  String interface_;

  /// sending zone
  String sendingZone;

  /// email body size in bytes
  int bodySize;

  /// index of email in the to adderess list
  int seq;

  /// to address this email is being sent to
  String recipient;

  /// to address domain
  String domain;

  /// locked status
  int locked;

  /// lock timestamp
  int lockTime;

  /// assigned server
  String assigned;

  /// queued timestamp
  String queued;

  /// mx hostname
  String mxHostname;

  /// mail delivery response
  String response;

  /// message id
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? messageId;

  @override
  bool operator ==(Object other) => identical(this, other) || other is MailLogEntry &&
    other.id == id &&
    other.id == id &&
    other.from == from &&
    other.to == to &&
    other.subject == subject &&
    other.created == created &&
    other.time == time &&
    other.user == user &&
    other.transtype == transtype &&
    other.origin == origin &&
    other.interface_ == interface_ &&
    other.sendingZone == sendingZone &&
    other.bodySize == bodySize &&
    other.seq == seq &&
    other.recipient == recipient &&
    other.domain == domain &&
    other.locked == locked &&
    other.lockTime == lockTime &&
    other.assigned == assigned &&
    other.queued == queued &&
    other.mxHostname == mxHostname &&
    other.response == response &&
    other.messageId == messageId;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (id.hashCode) +
    (id.hashCode) +
    (from.hashCode) +
    (to.hashCode) +
    (subject.hashCode) +
    (created.hashCode) +
    (time.hashCode) +
    (user.hashCode) +
    (transtype.hashCode) +
    (origin.hashCode) +
    (interface_.hashCode) +
    (sendingZone.hashCode) +
    (bodySize.hashCode) +
    (seq.hashCode) +
    (recipient.hashCode) +
    (domain.hashCode) +
    (locked.hashCode) +
    (lockTime.hashCode) +
    (assigned.hashCode) +
    (queued.hashCode) +
    (mxHostname.hashCode) +
    (response.hashCode) +
    (messageId == null ? 0 : messageId!.hashCode);

  @override
  String toString() => 'MailLogEntry[id=$id, id=$id, from=$from, to=$to, subject=$subject, created=$created, time=$time, user=$user, transtype=$transtype, origin=$origin, interface_=$interface_, sendingZone=$sendingZone, bodySize=$bodySize, seq=$seq, recipient=$recipient, domain=$domain, locked=$locked, lockTime=$lockTime, assigned=$assigned, queued=$queued, mxHostname=$mxHostname, response=$response, messageId=$messageId]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'_id'] = this.id;
      json[r'id'] = this.id;
      json[r'from'] = this.from;
      json[r'to'] = this.to;
      json[r'subject'] = this.subject;
      json[r'created'] = this.created;
      json[r'time'] = this.time;
      json[r'user'] = this.user;
      json[r'transtype'] = this.transtype;
      json[r'origin'] = this.origin;
      json[r'interface'] = this.interface_;
      json[r'sendingZone'] = this.sendingZone;
      json[r'bodySize'] = this.bodySize;
      json[r'seq'] = this.seq;
      json[r'recipient'] = this.recipient;
      json[r'domain'] = this.domain;
      json[r'locked'] = this.locked;
      json[r'lockTime'] = this.lockTime;
      json[r'assigned'] = this.assigned;
      json[r'queued'] = this.queued;
      json[r'mxHostname'] = this.mxHostname;
      json[r'response'] = this.response;
    if (this.messageId != null) {
      json[r'messageId'] = this.messageId;
    } else {
      json[r'messageId'] = null;
    }
    return json;
  }

  /// Returns a new [MailLogEntry] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static MailLogEntry? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "MailLogEntry[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "MailLogEntry[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return MailLogEntry(
        id: mapValueOfType<int>(json, r'_id')!,
        id: mapValueOfType<String>(json, r'id')!,
        from: mapValueOfType<String>(json, r'from')!,
        to: mapValueOfType<String>(json, r'to')!,
        subject: mapValueOfType<String>(json, r'subject')!,
        created: mapValueOfType<String>(json, r'created')!,
        time: mapValueOfType<int>(json, r'time')!,
        user: mapValueOfType<String>(json, r'user')!,
        transtype: mapValueOfType<String>(json, r'transtype')!,
        origin: mapValueOfType<String>(json, r'origin')!,
        interface_: mapValueOfType<String>(json, r'interface')!,
        sendingZone: mapValueOfType<String>(json, r'sendingZone')!,
        bodySize: mapValueOfType<int>(json, r'bodySize')!,
        seq: mapValueOfType<int>(json, r'seq')!,
        recipient: mapValueOfType<String>(json, r'recipient')!,
        domain: mapValueOfType<String>(json, r'domain')!,
        locked: mapValueOfType<int>(json, r'locked')!,
        lockTime: mapValueOfType<int>(json, r'lockTime')!,
        assigned: mapValueOfType<String>(json, r'assigned')!,
        queued: mapValueOfType<String>(json, r'queued')!,
        mxHostname: mapValueOfType<String>(json, r'mxHostname')!,
        response: mapValueOfType<String>(json, r'response')!,
        messageId: mapValueOfType<String>(json, r'messageId'),
      );
    }
    return null;
  }

  static List<MailLogEntry> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <MailLogEntry>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = MailLogEntry.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, MailLogEntry> mapFromJson(dynamic json) {
    final map = <String, MailLogEntry>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = MailLogEntry.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of MailLogEntry-objects as value to a dart map
  static Map<String, List<MailLogEntry>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<MailLogEntry>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = MailLogEntry.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    '_id',
    'id',
    'from',
    'to',
    'subject',
    'created',
    'time',
    'user',
    'transtype',
    'origin',
    'interface',
    'sendingZone',
    'bodySize',
    'seq',
    'recipient',
    'domain',
    'locked',
    'lockTime',
    'assigned',
    'queued',
    'mxHostname',
    'response',
  };
}

