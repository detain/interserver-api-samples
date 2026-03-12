//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class AssetServer {
  /// Returns a new [AssetServer] instance.
  AssetServer({
    this.id,
    this.region,
    this.price,
    this.CPU = const [],
    this.memory = const [],
    this.bandwidth = const [],
    this.iPs = const [],
    this.HD = const {},
  });

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? id;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? region;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? price;

  List<AssetServerCPUInner> CPU;

  List<AssetServerCPUInner> memory;

  List<AssetServerCPUInner> bandwidth;

  List<AssetServerCPUInner> iPs;

  Map<String, String> HD;

  @override
  bool operator ==(Object other) => identical(this, other) || other is AssetServer &&
    other.id == id &&
    other.region == region &&
    other.price == price &&
    _deepEquality.equals(other.CPU, CPU) &&
    _deepEquality.equals(other.memory, memory) &&
    _deepEquality.equals(other.bandwidth, bandwidth) &&
    _deepEquality.equals(other.iPs, iPs) &&
    _deepEquality.equals(other.HD, HD);

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (id == null ? 0 : id!.hashCode) +
    (region == null ? 0 : region!.hashCode) +
    (price == null ? 0 : price!.hashCode) +
    (CPU.hashCode) +
    (memory.hashCode) +
    (bandwidth.hashCode) +
    (iPs.hashCode) +
    (HD.hashCode);

  @override
  String toString() => 'AssetServer[id=$id, region=$region, price=$price, CPU=$CPU, memory=$memory, bandwidth=$bandwidth, iPs=$iPs, HD=$HD]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.id != null) {
      json[r'id'] = this.id;
    } else {
      json[r'id'] = null;
    }
    if (this.region != null) {
      json[r'Region'] = this.region;
    } else {
      json[r'Region'] = null;
    }
    if (this.price != null) {
      json[r'price'] = this.price;
    } else {
      json[r'price'] = null;
    }
      json[r'CPU'] = this.CPU;
      json[r'Memory'] = this.memory;
      json[r'Bandwidth'] = this.bandwidth;
      json[r'IPs'] = this.iPs;
      json[r'HD'] = this.HD;
    return json;
  }

  /// Returns a new [AssetServer] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static AssetServer? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "AssetServer[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "AssetServer[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return AssetServer(
        id: mapValueOfType<int>(json, r'id'),
        region: mapValueOfType<String>(json, r'Region'),
        price: mapValueOfType<String>(json, r'price'),
        CPU: AssetServerCPUInner.listFromJson(json[r'CPU']),
        memory: AssetServerCPUInner.listFromJson(json[r'Memory']),
        bandwidth: AssetServerCPUInner.listFromJson(json[r'Bandwidth']),
        iPs: AssetServerCPUInner.listFromJson(json[r'IPs']),
        HD: mapCastOfType<String, String>(json, r'HD') ?? const {},
      );
    }
    return null;
  }

  static List<AssetServer> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <AssetServer>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = AssetServer.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, AssetServer> mapFromJson(dynamic json) {
    final map = <String, AssetServer>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = AssetServer.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of AssetServer-objects as value to a dart map
  static Map<String, List<AssetServer>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<AssetServer>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = AssetServer.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

