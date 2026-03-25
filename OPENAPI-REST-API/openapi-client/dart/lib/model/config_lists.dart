//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class ConfigLists {
  /// Returns a new [ConfigLists] instance.
  ConfigLists({
    this.cpuLi = const {},
    this.memoryLi = const {},
    this.hdLi = const {},
    this.bandwidthLi = const {},
    this.ipsLi = const {},
    this.osLi = const {},
    this.cpLi = const {},
    this.raidLi = const [],
  });

  Map<String, Cpu> cpuLi;

  Map<String, Map<String, MemoryOption>> memoryLi;

  Map<String, Map<String, HardDrive>> hdLi;

  Map<String, Bandwidth> bandwidthLi;

  Map<String, IpBlock> ipsLi;

  Map<String, OperatingSystem> osLi;

  Map<String, ControlPanel> cpLi;

  List<RaidOption> raidLi;

  @override
  bool operator ==(Object other) => identical(this, other) || other is ConfigLists &&
    _deepEquality.equals(other.cpuLi, cpuLi) &&
    _deepEquality.equals(other.memoryLi, memoryLi) &&
    _deepEquality.equals(other.hdLi, hdLi) &&
    _deepEquality.equals(other.bandwidthLi, bandwidthLi) &&
    _deepEquality.equals(other.ipsLi, ipsLi) &&
    _deepEquality.equals(other.osLi, osLi) &&
    _deepEquality.equals(other.cpLi, cpLi) &&
    _deepEquality.equals(other.raidLi, raidLi);

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (cpuLi.hashCode) +
    (memoryLi.hashCode) +
    (hdLi.hashCode) +
    (bandwidthLi.hashCode) +
    (ipsLi.hashCode) +
    (osLi.hashCode) +
    (cpLi.hashCode) +
    (raidLi.hashCode);

  @override
  String toString() => 'ConfigLists[cpuLi=$cpuLi, memoryLi=$memoryLi, hdLi=$hdLi, bandwidthLi=$bandwidthLi, ipsLi=$ipsLi, osLi=$osLi, cpLi=$cpLi, raidLi=$raidLi]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'cpu_li'] = this.cpuLi;
      json[r'memory_li'] = this.memoryLi;
      json[r'hd_li'] = this.hdLi;
      json[r'bandwidth_li'] = this.bandwidthLi;
      json[r'ips_li'] = this.ipsLi;
      json[r'os_li'] = this.osLi;
      json[r'cp_li'] = this.cpLi;
      json[r'raid_li'] = this.raidLi;
    return json;
  }

  /// Returns a new [ConfigLists] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static ConfigLists? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        return true;
      }());

      return ConfigLists(
        cpuLi: Cpu.mapFromJson(json[r'cpu_li']),
        memoryLi: MemoryOption.mapFromJson(json[r'memory_li']),
        hdLi: HardDrive.mapFromJson(json[r'hd_li']),
        bandwidthLi: Bandwidth.mapFromJson(json[r'bandwidth_li']),
        ipsLi: IpBlock.mapFromJson(json[r'ips_li']),
        osLi: OperatingSystem.mapFromJson(json[r'os_li']),
        cpLi: ControlPanel.mapFromJson(json[r'cp_li']),
        raidLi: RaidOption.listFromJson(json[r'raid_li']),
      );
    }
    return null;
  }

  static List<ConfigLists> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <ConfigLists>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = ConfigLists.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, ConfigLists> mapFromJson(dynamic json) {
    final map = <String, ConfigLists>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = ConfigLists.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of ConfigLists-objects as value to a dart map
  static Map<String, List<ConfigLists>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<ConfigLists>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = ConfigLists.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
  };
}

