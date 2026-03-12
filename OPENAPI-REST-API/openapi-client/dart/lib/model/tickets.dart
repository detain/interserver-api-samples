//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class Tickets {
  /// Returns a new [Tickets] instance.
  Tickets({
    required this.ima,
    required this.custid,
    required this.view,
    required this.currentPage,
    required this.limit,
    required this.sortcol,
    required this.sortdir,
    required this.rowsOffset,
    this.tickets = const [],
    required this.pages,
    required this.rowsTotal,
    required this.inboxCount,
    required this.countArray,
    required this.viewText,
  });

  String ima;

  String custid;

  String view;

  int currentPage;

  int limit;

  int sortcol;

  int sortdir;

  int rowsOffset;

  List<TicketsRow> tickets;

  int pages;

  int rowsTotal;

  int inboxCount;

  TicketsCountArray countArray;

  String viewText;

  @override
  bool operator ==(Object other) => identical(this, other) || other is Tickets &&
    other.ima == ima &&
    other.custid == custid &&
    other.view == view &&
    other.currentPage == currentPage &&
    other.limit == limit &&
    other.sortcol == sortcol &&
    other.sortdir == sortdir &&
    other.rowsOffset == rowsOffset &&
    _deepEquality.equals(other.tickets, tickets) &&
    other.pages == pages &&
    other.rowsTotal == rowsTotal &&
    other.inboxCount == inboxCount &&
    other.countArray == countArray &&
    other.viewText == viewText;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (ima.hashCode) +
    (custid.hashCode) +
    (view.hashCode) +
    (currentPage.hashCode) +
    (limit.hashCode) +
    (sortcol.hashCode) +
    (sortdir.hashCode) +
    (rowsOffset.hashCode) +
    (tickets.hashCode) +
    (pages.hashCode) +
    (rowsTotal.hashCode) +
    (inboxCount.hashCode) +
    (countArray.hashCode) +
    (viewText.hashCode);

  @override
  String toString() => 'Tickets[ima=$ima, custid=$custid, view=$view, currentPage=$currentPage, limit=$limit, sortcol=$sortcol, sortdir=$sortdir, rowsOffset=$rowsOffset, tickets=$tickets, pages=$pages, rowsTotal=$rowsTotal, inboxCount=$inboxCount, countArray=$countArray, viewText=$viewText]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'ima'] = this.ima;
      json[r'custid'] = this.custid;
      json[r'view'] = this.view;
      json[r'currentPage'] = this.currentPage;
      json[r'limit'] = this.limit;
      json[r'sortcol'] = this.sortcol;
      json[r'sortdir'] = this.sortdir;
      json[r'rowsOffset'] = this.rowsOffset;
      json[r'tickets'] = this.tickets;
      json[r'pages'] = this.pages;
      json[r'rowsTotal'] = this.rowsTotal;
      json[r'inboxCount'] = this.inboxCount;
      json[r'countArray'] = this.countArray;
      json[r'viewText'] = this.viewText;
    return json;
  }

  /// Returns a new [Tickets] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static Tickets? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "Tickets[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "Tickets[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return Tickets(
        ima: mapValueOfType<String>(json, r'ima')!,
        custid: mapValueOfType<String>(json, r'custid')!,
        view: mapValueOfType<String>(json, r'view')!,
        currentPage: mapValueOfType<int>(json, r'currentPage')!,
        limit: mapValueOfType<int>(json, r'limit')!,
        sortcol: mapValueOfType<int>(json, r'sortcol')!,
        sortdir: mapValueOfType<int>(json, r'sortdir')!,
        rowsOffset: mapValueOfType<int>(json, r'rowsOffset')!,
        tickets: TicketsRow.listFromJson(json[r'tickets']),
        pages: mapValueOfType<int>(json, r'pages')!,
        rowsTotal: mapValueOfType<int>(json, r'rowsTotal')!,
        inboxCount: mapValueOfType<int>(json, r'inboxCount')!,
        countArray: TicketsCountArray.fromJson(json[r'countArray'])!,
        viewText: mapValueOfType<String>(json, r'viewText')!,
      );
    }
    return null;
  }

  static List<Tickets> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <Tickets>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = Tickets.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, Tickets> mapFromJson(dynamic json) {
    final map = <String, Tickets>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = Tickets.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of Tickets-objects as value to a dart map
  static Map<String, List<Tickets>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<Tickets>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = Tickets.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'ima',
    'custid',
    'view',
    'currentPage',
    'limit',
    'sortcol',
    'sortdir',
    'rowsOffset',
    'tickets',
    'pages',
    'rowsTotal',
    'inboxCount',
    'countArray',
    'viewText',
  };
}

