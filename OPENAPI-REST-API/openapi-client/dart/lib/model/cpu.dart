//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class Cpu {
  /// Returns a new [Cpu] instance.
  Cpu({
    this.id,
    this.shortDesc,
    this.longDesc,
    this.type,
    this.speed,
    this.numCores,
    this.numCpus,
    this.benchmark,
    this.monthlyPrice,
    this.monthlyPriceDisplay,
    this.maxRam,
    this.minRam,
    this.maxLff,
    this.maxSff,
    this.maxNve,
    this.visible,
    this.active,
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
  String? longDesc;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? type;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? speed;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? numCores;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? numCpus;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? benchmark;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  num? monthlyPrice;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? monthlyPriceDisplay;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? maxRam;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? minRam;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? maxLff;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? maxSff;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? maxNve;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? visible;

  ///
  /// Please note: This property should have been non-nullable! Since the specification file
  /// does not include a default value (using the "default:" property), however, the generated
  /// source code must fall back to having a nullable type.
  /// Consider adding a "default:" property in the specification file to hide this note.
  ///
  String? active;

  @override
  bool operator ==(Object other) => identical(this, other) || other is Cpu &&
    other.id == id &&
    other.shortDesc == shortDesc &&
    other.longDesc == longDesc &&
    other.type == type &&
    other.speed == speed &&
    other.numCores == numCores &&
    other.numCpus == numCpus &&
    other.benchmark == benchmark &&
    other.monthlyPrice == monthlyPrice &&
    other.monthlyPriceDisplay == monthlyPriceDisplay &&
    other.maxRam == maxRam &&
    other.minRam == minRam &&
    other.maxLff == maxLff &&
    other.maxSff == maxSff &&
    other.maxNve == maxNve &&
    other.visible == visible &&
    other.active == active;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (id == null ? 0 : id!.hashCode) +
    (shortDesc == null ? 0 : shortDesc!.hashCode) +
    (longDesc == null ? 0 : longDesc!.hashCode) +
    (type == null ? 0 : type!.hashCode) +
    (speed == null ? 0 : speed!.hashCode) +
    (numCores == null ? 0 : numCores!.hashCode) +
    (numCpus == null ? 0 : numCpus!.hashCode) +
    (benchmark == null ? 0 : benchmark!.hashCode) +
    (monthlyPrice == null ? 0 : monthlyPrice!.hashCode) +
    (monthlyPriceDisplay == null ? 0 : monthlyPriceDisplay!.hashCode) +
    (maxRam == null ? 0 : maxRam!.hashCode) +
    (minRam == null ? 0 : minRam!.hashCode) +
    (maxLff == null ? 0 : maxLff!.hashCode) +
    (maxSff == null ? 0 : maxSff!.hashCode) +
    (maxNve == null ? 0 : maxNve!.hashCode) +
    (visible == null ? 0 : visible!.hashCode) +
    (active == null ? 0 : active!.hashCode);

  @override
  String toString() => 'Cpu[id=$id, shortDesc=$shortDesc, longDesc=$longDesc, type=$type, speed=$speed, numCores=$numCores, numCpus=$numCpus, benchmark=$benchmark, monthlyPrice=$monthlyPrice, monthlyPriceDisplay=$monthlyPriceDisplay, maxRam=$maxRam, minRam=$minRam, maxLff=$maxLff, maxSff=$maxSff, maxNve=$maxNve, visible=$visible, active=$active]';

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
    if (this.longDesc != null) {
      json[r'long_desc'] = this.longDesc;
    } else {
      json[r'long_desc'] = null;
    }
    if (this.type != null) {
      json[r'type'] = this.type;
    } else {
      json[r'type'] = null;
    }
    if (this.speed != null) {
      json[r'speed'] = this.speed;
    } else {
      json[r'speed'] = null;
    }
    if (this.numCores != null) {
      json[r'num_cores'] = this.numCores;
    } else {
      json[r'num_cores'] = null;
    }
    if (this.numCpus != null) {
      json[r'num_cpus'] = this.numCpus;
    } else {
      json[r'num_cpus'] = null;
    }
    if (this.benchmark != null) {
      json[r'benchmark'] = this.benchmark;
    } else {
      json[r'benchmark'] = null;
    }
    if (this.monthlyPrice != null) {
      json[r'monthly_price'] = this.monthlyPrice;
    } else {
      json[r'monthly_price'] = null;
    }
    if (this.monthlyPriceDisplay != null) {
      json[r'monthly_price_display'] = this.monthlyPriceDisplay;
    } else {
      json[r'monthly_price_display'] = null;
    }
    if (this.maxRam != null) {
      json[r'max_ram'] = this.maxRam;
    } else {
      json[r'max_ram'] = null;
    }
    if (this.minRam != null) {
      json[r'min_ram'] = this.minRam;
    } else {
      json[r'min_ram'] = null;
    }
    if (this.maxLff != null) {
      json[r'max_lff'] = this.maxLff;
    } else {
      json[r'max_lff'] = null;
    }
    if (this.maxSff != null) {
      json[r'max_sff'] = this.maxSff;
    } else {
      json[r'max_sff'] = null;
    }
    if (this.maxNve != null) {
      json[r'max_nve'] = this.maxNve;
    } else {
      json[r'max_nve'] = null;
    }
    if (this.visible != null) {
      json[r'visible'] = this.visible;
    } else {
      json[r'visible'] = null;
    }
    if (this.active != null) {
      json[r'active'] = this.active;
    } else {
      json[r'active'] = null;
    }
    return json;
  }

  /// Returns a new [Cpu] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static Cpu? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        requiredKeys.forEach((key) {
          assert(json.containsKey(key), 'Required key "Cpu[$key]" is missing from JSON.');
          assert(json[key] != null, 'Required key "Cpu[$key]" has a null value in JSON.');
        });
        return true;
      }());

      return Cpu(
        id: mapValueOfType<int>(json, r'id'),
        shortDesc: mapValueOfType<String>(json, r'short_desc'),
        longDesc: mapValueOfType<String>(json, r'long_desc'),
        type: mapValueOfType<String>(json, r'type'),
        speed: mapValueOfType<String>(json, r'speed'),
        numCores: mapValueOfType<String>(json, r'num_cores'),
        numCpus: mapValueOfType<String>(json, r'num_cpus'),
        benchmark: mapValueOfType<String>(json, r'benchmark'),
        monthlyPrice: num.parse('${json[r'monthly_price']}'),
        monthlyPriceDisplay: mapValueOfType<String>(json, r'monthly_price_display'),
        maxRam: mapValueOfType<String>(json, r'max_ram'),
        minRam: mapValueOfType<String>(json, r'min_ram'),
        maxLff: mapValueOfType<String>(json, r'max_lff'),
        maxSff: mapValueOfType<String>(json, r'max_sff'),
        maxNve: mapValueOfType<String>(json, r'max_nve'),
        visible: mapValueOfType<String>(json, r'visible'),
        active: mapValueOfType<String>(json, r'active'),
      );
    }
    return null;
  }

  static List<Cpu> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <Cpu>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = Cpu.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, Cpu> mapFromJson(dynamic json) {
    final map = <String, Cpu>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = Cpu.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of Cpu-objects as value to a dart map
  static Map<String, List<Cpu>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<Cpu>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = Cpu.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

