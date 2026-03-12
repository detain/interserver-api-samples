//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class DomainOrderTldServices {
  /// Returns a new [DomainOrderTldServices] instance.
  DomainOrderTldServices({
    this.periodAsia,
    this.periodBe,
    this.periodBiz,
    this.periodCa,
  });

  /// Service ID for .asia TLD
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? periodAsia;

  /// Service ID for .be TLD
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? periodBe;

  /// Service ID for .biz TLD
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? periodBiz;

  /// Service ID for .ca TLD
  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  int? periodCa;

  @override
  bool operator ==(Object other) => identical(this, other) || other is DomainOrderTldServices &&
    other.periodAsia == periodAsia &&
    other.periodBe == periodBe &&
    other.periodBiz == periodBiz &&
    other.periodCa == periodCa;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (periodAsia == null ? 0 : periodAsia!.hashCode) +
    (periodBe == null ? 0 : periodBe!.hashCode) +
    (periodBiz == null ? 0 : periodBiz!.hashCode) +
    (periodCa == null ? 0 : periodCa!.hashCode);

  @override
  String toString() => 'DomainOrderTldServices[periodAsia=$periodAsia, periodBe=$periodBe, periodBiz=$periodBiz, periodCa=$periodCa]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
    if (this.periodAsia != null) {
      json[r'.asia'] = this.periodAsia;
    } else {
      json[r'.asia'] = null;
    }
    if (this.periodBe != null) {
      json[r'.be'] = this.periodBe;
    } else {
      json[r'.be'] = null;
    }
    if (this.periodBiz != null) {
      json[r'.biz'] = this.periodBiz;
    } else {
      json[r'.biz'] = null;
    }
    if (this.periodCa != null) {
      json[r'.ca'] = this.periodCa;
    } else {
      json[r'.ca'] = null;
    }
    return json;
  }

  /// Returns a new [DomainOrderTldServices] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static DomainOrderTldServices? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "DomainOrderTldServices[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "DomainOrderTldServices[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return DomainOrderTldServices(
        periodAsia: mapValueOfType<int>(json, r'.asia'),
        periodBe: mapValueOfType<int>(json, r'.be'),
        periodBiz: mapValueOfType<int>(json, r'.biz'),
        periodCa: mapValueOfType<int>(json, r'.ca'),
      );
    }
    return null;
  }

  static List<DomainOrderTldServices> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <DomainOrderTldServices>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = DomainOrderTldServices.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, DomainOrderTldServices> mapFromJson(dynamic json) {
    final map = <String, DomainOrderTldServices>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = DomainOrderTldServices.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of DomainOrderTldServices-objects as value to a dart map
  static Map<String, List<DomainOrderTldServices>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<DomainOrderTldServices>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = DomainOrderTldServices.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

