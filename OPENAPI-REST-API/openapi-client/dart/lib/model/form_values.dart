//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class FormValues {
  /// Returns a new [FormValues] instance.
  FormValues({
    this.memory,
    this.bandwidth,
    this.ips,
    this.os,
    this.cp,
    this.raid,
    this.hd,
    this.region,
  });

  /// Selected memory option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? memory;

  /// Selected bandwidth option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? bandwidth;

  /// Selected IP block option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? ips;

  /// Selected operating system option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? os;

  /// Selected control panel option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? cp;

  /// Selected RAID option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? raid;

  /// Selected hard drive option ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? hd;

  /// Selected datacenter region ID.
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? region;

  @override
  bool operator ==(Object other) => identical(this, other) || other is FormValues &&
    other.memory == memory &&
    other.bandwidth == bandwidth &&
    other.ips == ips &&
    other.os == os &&
    other.cp == cp &&
    other.raid == raid &&
    other.hd == hd &&
    other.region == region;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (memory == null ? 0 : memory!.hashCode) +
    (bandwidth == null ? 0 : bandwidth!.hashCode) +
    (ips == null ? 0 : ips!.hashCode) +
    (os == null ? 0 : os!.hashCode) +
    (cp == null ? 0 : cp!.hashCode) +
    (raid == null ? 0 : raid!.hashCode) +
    (hd == null ? 0 : hd!.hashCode) +
    (region == null ? 0 : region!.hashCode);

  @override
  String toString() => 'FormValues[memory=$memory, bandwidth=$bandwidth, ips=$ips, os=$os, cp=$cp, raid=$raid, hd=$hd, region=$region]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.memory != null) {
      json[r'memory'] = this.memory;
    } else {
      json[r'memory'] = null;
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
    if (this.hd != null) {
      json[r'hd'] = this.hd;
    } else {
      json[r'hd'] = null;
    }
    if (this.region != null) {
      json[r'region'] = this.region;
    } else {
      json[r'region'] = null;
    }
    return json;
  }

  /// Returns a new [FormValues] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static FormValues? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "FormValues[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "FormValues[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return FormValues(
        memory: mapValueOfType<int>(json, r'memory'),
        bandwidth: mapValueOfType<int>(json, r'bandwidth'),
        ips: mapValueOfType<int>(json, r'ips'),
        os: mapValueOfType<int>(json, r'os'),
        cp: mapValueOfType<int>(json, r'cp'),
        raid: mapValueOfType<int>(json, r'raid'),
        hd: mapValueOfType<int>(json, r'hd'),
        region: mapValueOfType<int>(json, r'region'),
      );
    }
    return null;
  }

  static List<FormValues> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <FormValues>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = FormValues.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, FormValues> mapFromJson(dynamic json) {
    final map = <String, FormValues>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = FormValues.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of FormValues-objects as value to a dart map
  static Map<String, List<FormValues>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<FormValues>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = FormValues.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

