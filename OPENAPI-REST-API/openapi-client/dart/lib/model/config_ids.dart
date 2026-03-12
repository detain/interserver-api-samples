//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class ConfigIds {
  /// Returns a new [ConfigIds] instance.
  ConfigIds({
    this.memory,
    this.hd,
    this.bandwidth,
    this.ips,
    this.os,
    this.cp,
    this.raid,
  });

  /// Configuration ID for the selected memory option.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? memory;

  /// Configuration ID for the selected hard drive option.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? hd;

  /// Configuration ID for the selected bandwidth option.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? bandwidth;

  /// Configuration ID for the selected IP block option.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? ips;

  /// Configuration ID for the selected operating system.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? os;

  /// Configuration ID for the selected control panel.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? cp;

  /// Configuration ID for the selected RAID option.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? raid;

  @override
  bool operator ==(Object other) => identical(this, other) || other is ConfigIds &&
    other.memory == memory &&
    other.hd == hd &&
    other.bandwidth == bandwidth &&
    other.ips == ips &&
    other.os == os &&
    other.cp == cp &&
    other.raid == raid;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (memory == null ? 0 : memory!.hashCode) +
    (hd == null ? 0 : hd!.hashCode) +
    (bandwidth == null ? 0 : bandwidth!.hashCode) +
    (ips == null ? 0 : ips!.hashCode) +
    (os == null ? 0 : os!.hashCode) +
    (cp == null ? 0 : cp!.hashCode) +
    (raid == null ? 0 : raid!.hashCode);

  @override
  String toString() => 'ConfigIds[memory=$memory, hd=$hd, bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.memory != null) {
      json[r'memory'] = this.memory;
    } else {
      json[r'memory'] = null;
    }
    if (this.hd != null) {
      json[r'hd'] = this.hd;
    } else {
      json[r'hd'] = null;
    }
    if (this.bandwidth != null) {
      json[r'bandwidth'] = this.bandwidth;
    } else {
      json[r'bandwidth'] = null;
    }
    if (this.ips != null) {
      json[r'ips'] = this.ips;
    } else {
      json[r'ips'] = null;
    }
    if (this.os != null) {
      json[r'os'] = this.os;
    } else {
      json[r'os'] = null;
    }
    if (this.cp != null) {
      json[r'cp'] = this.cp;
    } else {
      json[r'cp'] = null;
    }
    if (this.raid != null) {
      json[r'raid'] = this.raid;
    } else {
      json[r'raid'] = null;
    }
    return json;
  }

  /// Returns a new [ConfigIds] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static ConfigIds? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "ConfigIds[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "ConfigIds[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return ConfigIds(
        memory: mapValueOfType<int>(json, r'memory'),
        hd: mapValueOfType<int>(json, r'hd'),
        bandwidth: mapValueOfType<int>(json, r'bandwidth'),
        ips: mapValueOfType<int>(json, r'ips'),
        os: mapValueOfType<int>(json, r'os'),
        cp: mapValueOfType<int>(json, r'cp'),
        raid: mapValueOfType<int>(json, r'raid'),
      );
    }
    return null;
  }

  static List<ConfigIds> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <ConfigIds>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = ConfigIds.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, ConfigIds> mapFromJson(dynamic json) {
    final map = <String, ConfigIds>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = ConfigIds.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of ConfigIds-objects as value to a dart map
  static Map<String, List<ConfigIds>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<ConfigIds>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = ConfigIds.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

