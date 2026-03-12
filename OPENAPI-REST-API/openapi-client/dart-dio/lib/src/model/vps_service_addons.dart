//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_service_addons.g.dart';

/// Add-on services and IP address information for a VPS, including control panel licenses and extra IP assignments.
///
/// Properties:
/// * [hasCpanel] - Whether a cPanel license is active on this VPS.
/// * [hasDirectadmin] - Whether a DirectAdmin license is active on this VPS.
/// * [hasFantastico] - Whether a Fantastico license is active on this VPS.
/// * [hasSoftaculous] - Whether a Softaculous license is active on this VPS.
/// * [hasHdspace] - Whether extra disk space has been added to this VPS.
/// * [dedicatedIp] - Whether a dedicated IP address is assigned to this VPS.
/// * [extraIps] - List of additional IPv4 addresses assigned to this VPS.
/// * [extraIps6] - List of additional IPv6 addresses assigned to this VPS.
/// * [unpaidIps] - List of IP addresses that have unpaid charges.
/// * [ips] - All IPv4 addresses assigned to this VPS.
/// * [ips6] - All IPv6 addresses assigned to this VPS.
/// * [cpanelId] - The add-on service ID for the cPanel license.
/// * [cost] - Total monthly add-on cost in cents.
/// * [ids] - List of add-on service IDs active on this VPS.
/// * [rdata] - Raw add-on data entries.
@BuiltValue()
abstract class VpsServiceAddons implements Built<VpsServiceAddons, VpsServiceAddonsBuilder> {
  /// Whether a cPanel license is active on this VPS.
  @BuiltValueField(wireName: r'has_cpanel')
  bool? get hasCpanel;

  /// Whether a DirectAdmin license is active on this VPS.
  @BuiltValueField(wireName: r'has_directadmin')
  bool? get hasDirectadmin;

  /// Whether a Fantastico license is active on this VPS.
  @BuiltValueField(wireName: r'has_fantastico')
  bool? get hasFantastico;

  /// Whether a Softaculous license is active on this VPS.
  @BuiltValueField(wireName: r'has_softaculous')
  bool? get hasSoftaculous;

  /// Whether extra disk space has been added to this VPS.
  @BuiltValueField(wireName: r'has_hdspace')
  bool? get hasHdspace;

  /// Whether a dedicated IP address is assigned to this VPS.
  @BuiltValueField(wireName: r'dedicated_ip')
  bool? get dedicatedIp;

  /// List of additional IPv4 addresses assigned to this VPS.
  @BuiltValueField(wireName: r'extra_ips')
  BuiltList<String>? get extraIps;

  /// List of additional IPv6 addresses assigned to this VPS.
  @BuiltValueField(wireName: r'extra_ips6')
  BuiltList<String>? get extraIps6;

  /// List of IP addresses that have unpaid charges.
  @BuiltValueField(wireName: r'unpaid_ips')
  BuiltList<String>? get unpaidIps;

  /// All IPv4 addresses assigned to this VPS.
  @BuiltValueField(wireName: r'ips')
  BuiltList<String>? get ips;

  /// All IPv6 addresses assigned to this VPS.
  @BuiltValueField(wireName: r'ips6')
  BuiltList<String>? get ips6;

  /// The add-on service ID for the cPanel license.
  @BuiltValueField(wireName: r'cpanel_id')
  int? get cpanelId;

  /// Total monthly add-on cost in cents.
  @BuiltValueField(wireName: r'cost')
  int? get cost;

  /// List of add-on service IDs active on this VPS.
  @BuiltValueField(wireName: r'ids')
  BuiltList<String>? get ids;

  /// Raw add-on data entries.
  @BuiltValueField(wireName: r'rdata')
  BuiltList<String>? get rdata;

  VpsServiceAddons._();

  factory VpsServiceAddons([void updates(VpsServiceAddonsBuilder b)]) = _$VpsServiceAddons;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VpsServiceAddonsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VpsServiceAddons> get serializer => _$VpsServiceAddonsSerializer();
}

class _$VpsServiceAddonsSerializer implements PrimitiveSerializer<VpsServiceAddons> {
  @override
  final Iterable<Type> types = const [VpsServiceAddons, _$VpsServiceAddons];

  @override
  final String wireName = r'VpsServiceAddons';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VpsServiceAddons object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.hasCpanel != null) {
      yield r'has_cpanel';
      yield serializers.serialize(
        object.hasCpanel,
        specifiedType: const FullType(bool),
      );
    }
    if (object.hasDirectadmin != null) {
      yield r'has_directadmin';
      yield serializers.serialize(
        object.hasDirectadmin,
        specifiedType: const FullType(bool),
      );
    }
    if (object.hasFantastico != null) {
      yield r'has_fantastico';
      yield serializers.serialize(
        object.hasFantastico,
        specifiedType: const FullType(bool),
      );
    }
    if (object.hasSoftaculous != null) {
      yield r'has_softaculous';
      yield serializers.serialize(
        object.hasSoftaculous,
        specifiedType: const FullType(bool),
      );
    }
    if (object.hasHdspace != null) {
      yield r'has_hdspace';
      yield serializers.serialize(
        object.hasHdspace,
        specifiedType: const FullType(bool),
      );
    }
    if (object.dedicatedIp != null) {
      yield r'dedicated_ip';
      yield serializers.serialize(
        object.dedicatedIp,
        specifiedType: const FullType(bool),
      );
    }
    if (object.extraIps != null) {
      yield r'extra_ips';
      yield serializers.serialize(
        object.extraIps,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.extraIps6 != null) {
      yield r'extra_ips6';
      yield serializers.serialize(
        object.extraIps6,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.unpaidIps != null) {
      yield r'unpaid_ips';
      yield serializers.serialize(
        object.unpaidIps,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.ips != null) {
      yield r'ips';
      yield serializers.serialize(
        object.ips,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.ips6 != null) {
      yield r'ips6';
      yield serializers.serialize(
        object.ips6,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.cpanelId != null) {
      yield r'cpanel_id';
      yield serializers.serialize(
        object.cpanelId,
        specifiedType: const FullType(int),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(int),
      );
    }
    if (object.ids != null) {
      yield r'ids';
      yield serializers.serialize(
        object.ids,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.rdata != null) {
      yield r'rdata';
      yield serializers.serialize(
        object.rdata,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    VpsServiceAddons object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VpsServiceAddonsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'has_cpanel':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.hasCpanel = valueDes;
          break;
        case r'has_directadmin':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.hasDirectadmin = valueDes;
          break;
        case r'has_fantastico':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.hasFantastico = valueDes;
          break;
        case r'has_softaculous':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.hasSoftaculous = valueDes;
          break;
        case r'has_hdspace':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.hasHdspace = valueDes;
          break;
        case r'dedicated_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.dedicatedIp = valueDes;
          break;
        case r'extra_ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.extraIps.replace(valueDes);
          break;
        case r'extra_ips6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.extraIps6.replace(valueDes);
          break;
        case r'unpaid_ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.unpaidIps.replace(valueDes);
          break;
        case r'ips':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.ips.replace(valueDes);
          break;
        case r'ips6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.ips6.replace(valueDes);
          break;
        case r'cpanel_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cpanelId = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.cost = valueDes;
          break;
        case r'ids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.ids.replace(valueDes);
          break;
        case r'rdata':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.rdata.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  VpsServiceAddons deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VpsServiceAddonsBuilder();
    final serializedList = (serialized as Iterable<Object?>).toList();
    final unhandled = <Object?>[];
    _deserializeProperties(
      serializers,
      serialized,
      specifiedType: specifiedType,
      serializedList: serializedList,
      unhandled: unhandled,
      result: result,
    );
    return result.build();
  }
}

