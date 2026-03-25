//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class Region {
  /// Returns a new [Region] instance.
  Region({
    this.regionId,
    this.regionName,
  });

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? regionId;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? regionName;

  @override
  bool operator ==(Object other) => identical(this, other) || other is Region &&
    other.regionId == regionId &&
    other.regionName == regionName;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (regionId == null ? 0 : regionId!.hashCode) +
    (regionName == null ? 0 : regionName!.hashCode);

  @override
  String toString() => 'Region[regionId=$regionId, regionName=$regionName]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.regionId != null) {
      json[r'region_id'] = this.regionId;
    } else {
      json[r'region_id'] = null;
    }
    if (this.regionName != null) {
      json[r'region_name'] = this.regionName;
    } else {
      json[r'region_name'] = null;
    }
    return json;
  }

  /// Returns a new [Region] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static Region? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        return true;
      }());

      return Region(
        regionId: mapValueOfType<int>(json, r'region_id'),
        regionName: mapValueOfType<String>(json, r'region_name'),
      );
    }
    return null;
  }

  static List<Region> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <Region>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = Region.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, Region> mapFromJson(dynamic json) {
    final map = <String, Region>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = Region.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of Region-objects as value to a dart map
  static Map<String, List<Region>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<Region>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = Region.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

