//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//
// @dart=2.18

// ignore_for_file: unused_element, unused_import
// ignore_for_file: always_put_required_named_parameters_first
// ignore_for_file: constant_identifier_names
// ignore_for_file: lines_longer_than_80_chars

part of openapi.api;

class CreateFirewallRule {
  /// Returns a new [CreateFirewallRule] instance.
  CreateFirewallRule({
    required this.protocolId,
    required this.xdpAction,
    this.destinationPort = 80,
    this.sourceIp = '0',
    this.sourcePort = 0,
  });

  /// 1 = TCP, 2 = UDP
  CreateFirewallRuleProtocolIdEnum protocolId;

  /// 1 = Block,  0 = Whitelist
  CreateFirewallRuleXdpActionEnum xdpAction;

  int destinationPort;

  String sourceIp;

  int sourcePort;

  @override
  bool operator ==(Object other) => identical(this, other) || other is CreateFirewallRule &&
    other.protocolId == protocolId &&
    other.xdpAction == xdpAction &&
    other.destinationPort == destinationPort &&
    other.sourceIp == sourceIp &&
    other.sourcePort == sourcePort;

  @override
  int get hashCode =>
    // ignore: unnecessary_parenthesis
    (protocolId.hashCode) +
    (xdpAction.hashCode) +
    (destinationPort.hashCode) +
    (sourceIp.hashCode) +
    (sourcePort.hashCode);

  @override
  String toString() => 'CreateFirewallRule[protocolId=$protocolId, xdpAction=$xdpAction, destinationPort=$destinationPort, sourceIp=$sourceIp, sourcePort=$sourcePort]';

  Map<String, dynamic> toJson() {
    final json = <String, dynamic>{};
      json[r'protocol_id'] = this.protocolId;
      json[r'xdp_action'] = this.xdpAction;
      json[r'destination_port'] = this.destinationPort;
      json[r'source_ip'] = this.sourceIp;
      json[r'source_port'] = this.sourcePort;
    return json;
  }

  /// Returns a new [CreateFirewallRule] instance and imports its values from
  /// [value] if it's a [Map], null otherwise.
  // ignore: prefer_constructors_over_static_methods
  static CreateFirewallRule? fromJson(dynamic value) {
    if (value is Map) {
      final json = value.cast<String, dynamic>();

      // Ensure that the map contains the required keys.
      // Note 1: the values aren't checked for validity beyond being non-null.
      // Note 2: this code is stripped in release mode!
      assert(() {
        assert(json.containsKey(r'protocol_id'), 'Required key "CreateFirewallRule[protocol_id]" is missing from JSON.');
        assert(json[r'protocol_id'] != null, 'Required key "CreateFirewallRule[protocol_id]" has a null value in JSON.');
        assert(json.containsKey(r'xdp_action'), 'Required key "CreateFirewallRule[xdp_action]" is missing from JSON.');
        assert(json[r'xdp_action'] != null, 'Required key "CreateFirewallRule[xdp_action]" has a null value in JSON.');
        return true;
      }());

      return CreateFirewallRule(
        protocolId: CreateFirewallRuleProtocolIdEnum.fromJson(json[r'protocol_id'])!,
        xdpAction: CreateFirewallRuleXdpActionEnum.fromJson(json[r'xdp_action'])!,
        destinationPort: mapValueOfType<int>(json, r'destination_port') ?? 80,
        sourceIp: mapValueOfType<String>(json, r'source_ip') ?? '0',
        sourcePort: mapValueOfType<int>(json, r'source_port') ?? 0,
      );
    }
    return null;
  }

  static List<CreateFirewallRule> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <CreateFirewallRule>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = CreateFirewallRule.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }

  static Map<String, CreateFirewallRule> mapFromJson(dynamic json) {
    final map = <String, CreateFirewallRule>{};
    if (json is Map && json.isNotEmpty) {
      json = json.cast<String, dynamic>(); // ignore: parameter_assignments
      for (final entry in json.entries) {
        final value = CreateFirewallRule.fromJson(entry.value);
        if (value != null) {
          map[entry.key] = value;
        }
      }
    }
    return map;
  }

  // maps a json object with a list of CreateFirewallRule-objects as value to a dart map
  static Map<String, List<CreateFirewallRule>> mapListFromJson(dynamic json, {bool growable = false,}) {
    final map = <String, List<CreateFirewallRule>>{};
    if (json is Map && json.isNotEmpty) {
      // ignore: parameter_assignments
      json = json.cast<String, dynamic>();
      for (final entry in json.entries) {
        map[entry.key] = CreateFirewallRule.listFromJson(entry.value, growable: growable,);
      }
    }
    return map;
  }

  /// The list of required keys that must be present in a JSON.
  static const requiredKeys = <String>{
    'protocol_id',
    'xdp_action',
  };
}

/// 1 = TCP, 2 = UDP
class CreateFirewallRuleProtocolIdEnum {
  /// Instantiate a new enum with the provided [value].
  const CreateFirewallRuleProtocolIdEnum._(this.value);

  /// The underlying value of this enum member.
  final int value;

  @override
  String toString() => value.toString();

  int toJson() => value;

  static const number1 = CreateFirewallRuleProtocolIdEnum._(1);
  static const number2 = CreateFirewallRuleProtocolIdEnum._(2);

  /// List of all possible values in this [enum][CreateFirewallRuleProtocolIdEnum].
  static const values = <CreateFirewallRuleProtocolIdEnum>[
    number1,
    number2,
  ];

  static CreateFirewallRuleProtocolIdEnum? fromJson(dynamic value) => CreateFirewallRuleProtocolIdEnumTypeTransformer().decode(value);

  static List<CreateFirewallRuleProtocolIdEnum> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <CreateFirewallRuleProtocolIdEnum>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = CreateFirewallRuleProtocolIdEnum.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }
}

/// Transformation class that can [encode] an instance of [CreateFirewallRuleProtocolIdEnum] to int,
/// and [decode] dynamic data back to [CreateFirewallRuleProtocolIdEnum].
class CreateFirewallRuleProtocolIdEnumTypeTransformer {
  factory CreateFirewallRuleProtocolIdEnumTypeTransformer() => _instance ??= const CreateFirewallRuleProtocolIdEnumTypeTransformer._();

  const CreateFirewallRuleProtocolIdEnumTypeTransformer._();

  int encode(CreateFirewallRuleProtocolIdEnum data) => data.value;

  /// Decodes a [dynamic value][data] to a CreateFirewallRuleProtocolIdEnum.
  ///
  /// If [allowNull] is true and the [dynamic value][data] cannot be decoded successfully,
  /// then null is returned. However, if [allowNull] is false and the [dynamic value][data]
  /// cannot be decoded successfully, then an [UnimplementedError] is thrown.
  ///
  /// The [allowNull] is very handy when an API changes and a new enum value is added or removed,
  /// and users are still using an old app with the old code.
  CreateFirewallRuleProtocolIdEnum? decode(dynamic data, {bool allowNull = true}) {
    if (data != null) {
      switch (data) {
        case 1: return CreateFirewallRuleProtocolIdEnum.number1;
        case 2: return CreateFirewallRuleProtocolIdEnum.number2;
        default:
          if (!allowNull) {
            throw ArgumentError('Unknown enum value to decode: $data');
          }
      }
    }
    return null;
  }

  /// Singleton [CreateFirewallRuleProtocolIdEnumTypeTransformer] instance.
  static CreateFirewallRuleProtocolIdEnumTypeTransformer? _instance;
}


/// 1 = Block,  0 = Whitelist
class CreateFirewallRuleXdpActionEnum {
  /// Instantiate a new enum with the provided [value].
  const CreateFirewallRuleXdpActionEnum._(this.value);

  /// The underlying value of this enum member.
  final int value;

  @override
  String toString() => value.toString();

  int toJson() => value;

  static const number0 = CreateFirewallRuleXdpActionEnum._(0);
  static const number1 = CreateFirewallRuleXdpActionEnum._(1);

  /// List of all possible values in this [enum][CreateFirewallRuleXdpActionEnum].
  static const values = <CreateFirewallRuleXdpActionEnum>[
    number0,
    number1,
  ];

  static CreateFirewallRuleXdpActionEnum? fromJson(dynamic value) => CreateFirewallRuleXdpActionEnumTypeTransformer().decode(value);

  static List<CreateFirewallRuleXdpActionEnum> listFromJson(dynamic json, {bool growable = false,}) {
    final result = <CreateFirewallRuleXdpActionEnum>[];
    if (json is List && json.isNotEmpty) {
      for (final row in json) {
        final value = CreateFirewallRuleXdpActionEnum.fromJson(row);
        if (value != null) {
          result.add(value);
        }
      }
    }
    return result.toList(growable: growable);
  }
}

/// Transformation class that can [encode] an instance of [CreateFirewallRuleXdpActionEnum] to int,
/// and [decode] dynamic data back to [CreateFirewallRuleXdpActionEnum].
class CreateFirewallRuleXdpActionEnumTypeTransformer {
  factory CreateFirewallRuleXdpActionEnumTypeTransformer() => _instance ??= const CreateFirewallRuleXdpActionEnumTypeTransformer._();

  const CreateFirewallRuleXdpActionEnumTypeTransformer._();

  int encode(CreateFirewallRuleXdpActionEnum data) => data.value;

  /// Decodes a [dynamic value][data] to a CreateFirewallRuleXdpActionEnum.
  ///
  /// If [allowNull] is true and the [dynamic value][data] cannot be decoded successfully,
  /// then null is returned. However, if [allowNull] is false and the [dynamic value][data]
  /// cannot be decoded successfully, then an [UnimplementedError] is thrown.
  ///
  /// The [allowNull] is very handy when an API changes and a new enum value is added or removed,
  /// and users are still using an old app with the old code.
  CreateFirewallRuleXdpActionEnum? decode(dynamic data, {bool allowNull = true}) {
    if (data != null) {
      switch (data) {
        case 0: return CreateFirewallRuleXdpActionEnum.number0;
        case 1: return CreateFirewallRuleXdpActionEnum.number1;
        default:
          if (!allowNull) {
            throw ArgumentError('Unknown enum value to decode: $data');
          }
      }
    }
    return null;
  }

  /// Singleton [CreateFirewallRuleXdpActionEnumTypeTransformer] instance.
  static CreateFirewallRuleXdpActionEnumTypeTransformer? _instance;
}


