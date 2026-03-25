//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class ControlPanel {
  /// Returns a new [ControlPanel] instance.
  ControlPanel({
    this.id,
    this.shortDesc,
    this.monthlyPrice,
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
  String? shortDesc;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  num? monthlyPrice;

  @override
  bool operator ==(Object other) => identical(this, other) || other is ControlPanel &&
    other.id == id &&
    other.shortDesc == shortDesc &&
    other.monthlyPrice == monthlyPrice;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (id == null ? 0 : id!.hashCode) +
    (shortDesc == null ? 0 : shortDesc!.hashCode) +
    (monthlyPrice == null ? 0 : monthlyPrice!.hashCode);

  @override
  String toString() => 'ControlPanel[id=$id, shortDesc=$shortDesc, monthlyPrice=$monthlyPrice]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.id != null) {
      json[r'id'] = this.id;
    } else {
      json[r'id'] = null;
    }
    if (this.shortDesc != null) {
      json[r'short_desc'] = this.shortDesc;
    } else {
      json[r'short_desc'] = null;
    }
    if (this.monthlyPrice != null) {
      json[r'monthly_price'] = this.monthlyPrice;
    } else {
      json[r'monthly_price'] = null;
    }
    return json;
  }

  /// Returns a new [ControlPanel] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static ControlPanel? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        return true;
      }());

      return ControlPanel(
        id: mapValueOfType<int>(json, r'id'),
        shortDesc: mapValueOfType<String>(json, r'short_desc'),
        monthlyPrice: num.parse('${json[r'monthly_price']}'),
      );
    }
    return null;
  }

  static List<ControlPanel> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <ControlPanel>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = ControlPanel.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, ControlPanel> mapFromJson(dynamic json) {
    final map = <String, ControlPanel>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = ControlPanel.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of ControlPanel-objects as value to a dart map
  static Map<String, List<ControlPanel>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<ControlPanel>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = ControlPanel.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

