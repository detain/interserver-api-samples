//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class TicketsRow {
  /// Returns a new [TicketsRow] instance.
  TicketsRow({
    required this.title,
    required this.ticketmaskid,
    required this.lastreplier,
    required this.status,
    required this.priority,
    required this.totalReplies,
    required this.lastactivity,
    required this.departmenttitle,
    required this.ticketid,
    required this.canClose,
    required this.attachments,
    required this.statusText,
    required this.checked,
  });

  String title;

  String ticketmaskid;

  String lastreplier;

  String status;

  String priority;

  int totalReplies;

  String lastactivity;

  String departmenttitle;

  int ticketid;

  String canClose;

  Object? attachments;

  String statusText;

  bool checked;

  @override
  bool operator ==(Object other) => identical(this, other) || other is TicketsRow &&
    other.title == title &&
    other.ticketmaskid == ticketmaskid &&
    other.lastreplier == lastreplier &&
    other.status == status &&
    other.priority == priority &&
    other.totalReplies == totalReplies &&
    other.lastactivity == lastactivity &&
    other.departmenttitle == departmenttitle &&
    other.ticketid == ticketid &&
    other.canClose == canClose &&
    other.attachments == attachments &&
    other.statusText == statusText &&
    other.checked == checked;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (title.hashCode) +
    (ticketmaskid.hashCode) +
    (lastreplier.hashCode) +
    (status.hashCode) +
    (priority.hashCode) +
    (totalReplies.hashCode) +
    (lastactivity.hashCode) +
    (departmenttitle.hashCode) +
    (ticketid.hashCode) +
    (canClose.hashCode) +
    (attachments == null ? 0 : attachments!.hashCode) +
    (statusText.hashCode) +
    (checked.hashCode);

  @override
  String toString() => 'TicketsRow[title=$title, ticketmaskid=$ticketmaskid, lastreplier=$lastreplier, status=$status, priority=$priority, totalReplies=$totalReplies, lastactivity=$lastactivity, departmenttitle=$departmenttitle, ticketid=$ticketid, canClose=$canClose, attachments=$attachments, statusText=$statusText, checked=$checked]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'title'] = this.title;
      json[r'ticketmaskid'] = this.ticketmaskid;
      json[r'lastreplier'] = this.lastreplier;
      json[r'status'] = this.status;
      json[r'priority'] = this.priority;
      json[r'total_replies'] = this.totalReplies;
      json[r'lastactivity'] = this.lastactivity;
      json[r'departmenttitle'] = this.departmenttitle;
      json[r'ticketid'] = this.ticketid;
      json[r'can_close'] = this.canClose;
    if (this.attachments != null) {
      json[r'attachments'] = this.attachments;
    } else {
      json[r'attachments'] = null;
    }
      json[r'status_text'] = this.statusText;
      json[r'checked'] = this.checked;
    return json;
  }

  /// Returns a new [TicketsRow] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static TicketsRow? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "TicketsRow[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "TicketsRow[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return TicketsRow(
        title: mapValueOfType<String>(json, r'title')!,
        ticketmaskid: mapValueOfType<String>(json, r'ticketmaskid')!,
        lastreplier: mapValueOfType<String>(json, r'lastreplier')!,
        status: mapValueOfType<String>(json, r'status')!,
        priority: mapValueOfType<String>(json, r'priority')!,
        totalReplies: mapValueOfType<int>(json, r'total_replies')!,
        lastactivity: mapValueOfType<String>(json, r'lastactivity')!,
        departmenttitle: mapValueOfType<String>(json, r'departmenttitle')!,
        ticketid: mapValueOfType<int>(json, r'ticketid')!,
        canClose: mapValueOfType<String>(json, r'can_close')!,
        attachments: mapValueOfType<Object>(json, r'attachments'),
        statusText: mapValueOfType<String>(json, r'status_text')!,
        checked: mapValueOfType<bool>(json, r'checked')!,
      );
    }
    return null;
  }

  static List<TicketsRow> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <TicketsRow>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = TicketsRow.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, TicketsRow> mapFromJson(dynamic json) {
    final map = <String, TicketsRow>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = TicketsRow.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of TicketsRow-objects as value to a dart map
  static Map<String, List<TicketsRow>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<TicketsRow>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = TicketsRow.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'title',
    'ticketmaskid',
    'lastreplier',
    'status',
    'priority',
    'total_replies',
    'lastactivity',
    'departmenttitle',
    'ticketid',
    'can_close',
    'attachments',
    'status_text',
    'checked',
  };
}

