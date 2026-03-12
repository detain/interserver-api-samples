//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_switchport.g.dart';

/// ServerSwitchport
///
/// Properties:
/// * [switchportId] - Unique identifier for the switchport.
/// * [switchId] - Unique identifier for the switch associated with the switchport.
/// * [switch_] - Name of the switch associated with the switchport.
/// * [port] - Port name on the switch.
/// * [blade] - Blade name associated with the port.
/// * [justport] - Port identifier.
/// * [graphId] - Identifier for the graph associated with the switchport.
/// * [assetId] - Unique identifier of the asset associated with the switchport.
/// * [vlans] - List of VLANs associated with the switchport.
/// * [vlans6] - List of IPv6 VLANs associated with the switchport.
@BuiltValue()
abstract class ServerSwitchport implements Built<ServerSwitchport, ServerSwitchportBuilder> {
  /// Unique identifier for the switchport.
  @BuiltValueField(wireName: r'switchport_id')
  int get switchportId;

  /// Unique identifier for the switch associated with the switchport.
  @BuiltValueField(wireName: r'switch_id')
  String get switchId;

  /// Name of the switch associated with the switchport.
  @BuiltValueField(wireName: r'switch')
  String get switch_;

  /// Port name on the switch.
  @BuiltValueField(wireName: r'port')
  String get port;

  /// Blade name associated with the port.
  @BuiltValueField(wireName: r'blade')
  String get blade;

  /// Port identifier.
  @BuiltValueField(wireName: r'justport')
  String get justport;

  /// Identifier for the graph associated with the switchport.
  @BuiltValueField(wireName: r'graph_id')
  String get graphId;

  /// Unique identifier of the asset associated with the switchport.
  @BuiltValueField(wireName: r'asset_id')
  int get assetId;

  /// List of VLANs associated with the switchport.
  @BuiltValueField(wireName: r'vlans')
  BuiltList<String>? get vlans;

  /// List of IPv6 VLANs associated with the switchport.
  @BuiltValueField(wireName: r'vlans6')
  BuiltList<String>? get vlans6;

  ServerSwitchport._();

  factory ServerSwitchport([void updates(ServerSwitchportBuilder b)]) = _$ServerSwitchport;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerSwitchportBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerSwitchport> get serializer => _$ServerSwitchportSerializer();
}

class _$ServerSwitchportSerializer implements PrimitiveSerializer<ServerSwitchport> {
  @override
  final Iterable<Type> types = const [ServerSwitchport, _$ServerSwitchport];

  @override
  final String wireName = r'ServerSwitchport';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerSwitchport object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'switchport_id';
    yield serializers.serialize(
      object.switchportId,
      specifiedType: const FullType(int),
    );
    yield r'switch_id';
    yield serializers.serialize(
      object.switchId,
      specifiedType: const FullType(String),
    );
    yield r'switch';
    yield serializers.serialize(
      object.switch_,
      specifiedType: const FullType(String),
    );
    yield r'port';
    yield serializers.serialize(
      object.port,
      specifiedType: const FullType(String),
    );
    yield r'blade';
    yield serializers.serialize(
      object.blade,
      specifiedType: const FullType(String),
    );
    yield r'justport';
    yield serializers.serialize(
      object.justport,
      specifiedType: const FullType(String),
    );
    yield r'graph_id';
    yield serializers.serialize(
      object.graphId,
      specifiedType: const FullType(String),
    );
    yield r'asset_id';
    yield serializers.serialize(
      object.assetId,
      specifiedType: const FullType(int),
    );
    if (object.vlans != null) {
      yield r'vlans';
      yield serializers.serialize(
        object.vlans,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.vlans6 != null) {
      yield r'vlans6';
      yield serializers.serialize(
        object.vlans6,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerSwitchport object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerSwitchportBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'switchport_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.switchportId = valueDes;
          break;
        case r'switch_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.switchId = valueDes;
          break;
        case r'switch':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.switch_ = valueDes;
          break;
        case r'port':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.port = valueDes;
          break;
        case r'blade':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.blade = valueDes;
          break;
        case r'justport':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.justport = valueDes;
          break;
        case r'graph_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.graphId = valueDes;
          break;
        case r'asset_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.assetId = valueDes;
          break;
        case r'vlans':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans.replace(valueDes);
          break;
        case r'vlans6':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.vlans6.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerSwitchport deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerSwitchportBuilder();
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

