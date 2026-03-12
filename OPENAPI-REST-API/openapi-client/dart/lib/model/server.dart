//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class Server {
  /// Returns a new [Server] instance.
  Server({
    required this.ipmiAuth,
    this.clientLinks = const [],
    required this.billingDetails,
    required this.custCurrency,
    required this.custCurrencySymbol,
    required this.package,
    this.serviceExtra = const [],
    required this.locations,
    required this.networkInfo,
    required this.extraInfoTables,
    required this.serviceInfo,
  });

  bool ipmiAuth;

  List<ServerClientLink> clientLinks;

  ServerBillingDetails billingDetails;

  String custCurrency;

  String custCurrencySymbol;

  String package;

  List<String> serviceExtra;

  ServerLocations locations;

  ServerNetworkInfo networkInfo;

  ServerExtraInfoTables extraInfoTables;

  ServerServiceInfo serviceInfo;

  @override
  bool operator ==(Object other) => identical(this, other) || other is Server &&
    other.ipmiAuth == ipmiAuth &&
    _deepEquality.equals(other.clientLinks, clientLinks) &&
    other.billingDetails == billingDetails &&
    other.custCurrency == custCurrency &&
    other.custCurrencySymbol == custCurrencySymbol &&
    other.package == package &&
    _deepEquality.equals(other.serviceExtra, serviceExtra) &&
    other.locations == locations &&
    other.networkInfo == networkInfo &&
    other.extraInfoTables == extraInfoTables &&
    other.serviceInfo == serviceInfo;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (ipmiAuth.hashCode) +
    (clientLinks.hashCode) +
    (billingDetails.hashCode) +
    (custCurrency.hashCode) +
    (custCurrencySymbol.hashCode) +
    (package.hashCode) +
    (serviceExtra.hashCode) +
    (locations.hashCode) +
    (networkInfo.hashCode) +
    (extraInfoTables.hashCode) +
    (serviceInfo.hashCode);

  @override
  String toString() => 'Server[ipmiAuth=$ipmiAuth, clientLinks=$clientLinks, billingDetails=$billingDetails, custCurrency=$custCurrency, custCurrencySymbol=$custCurrencySymbol, package=$package, serviceExtra=$serviceExtra, locations=$locations, networkInfo=$networkInfo, extraInfoTables=$extraInfoTables, serviceInfo=$serviceInfo]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'ipmiAuth'] = this.ipmiAuth;
      json[r'client_links'] = this.clientLinks;
      json[r'billingDetails'] = this.billingDetails;
      json[r'custCurrency'] = this.custCurrency;
      json[r'custCurrencySymbol'] = this.custCurrencySymbol;
      json[r'package'] = this.package;
      json[r'serviceExtra'] = this.serviceExtra;
      json[r'locations'] = this.locations;
      json[r'networkInfo'] = this.networkInfo;
      json[r'extraInfoTables'] = this.extraInfoTables;
      json[r'serviceInfo'] = this.serviceInfo;
    return json;
  }

  /// Returns a new [Server] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static Server? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "Server[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "Server[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return Server(
        ipmiAuth: mapValueOfType<bool>(json, r'ipmiAuth')!,
        clientLinks: ServerClientLink.listFromJson(json[r'client_links']),
        billingDetails: ServerBillingDetails.fromJson(json[r'billingDetails'])!,
        custCurrency: mapValueOfType<String>(json, r'custCurrency')!,
        custCurrencySymbol: mapValueOfType<String>(json, r'custCurrencySymbol')!,
        package: mapValueOfType<String>(json, r'package')!,
        serviceExtra: json[r'serviceExtra'] is Iterable
            ? (json[r'serviceExtra'] as Iterable).cast<String>().toList(growable: false)
            : const [],
        locations: ServerLocations.fromJson(json[r'locations'])!,
        networkInfo: ServerNetworkInfo.fromJson(json[r'networkInfo'])!,
        extraInfoTables: ServerExtraInfoTables.fromJson(json[r'extraInfoTables'])!,
        serviceInfo: ServerServiceInfo.fromJson(json[r'serviceInfo'])!,
      );
    }
    return null;
  }

  static List<Server> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <Server>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = Server.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, Server> mapFromJson(dynamic json) {
    final map = <String, Server>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = Server.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of Server-objects as value to a dart map
  static Map<String, List<Server>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<Server>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = Server.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'ipmiAuth',
    'client_links',
    'billingDetails',
    'custCurrency',
    'custCurrencySymbol',
    'package',
    'serviceExtra',
    'locations',
    'networkInfo',
    'extraInfoTables',
    'serviceInfo',
  };
}

