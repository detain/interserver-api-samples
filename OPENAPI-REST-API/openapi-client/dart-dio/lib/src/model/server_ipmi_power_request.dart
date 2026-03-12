//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_ipmi_power_request.g.dart';

/// IPMI Power command for servers
///
/// Properties:
/// * [action] - The power action to send to the ipmi controller.
/// * [asset] - The Asset ID
@BuiltValue()
abstract class ServerIpmiPowerRequest implements Built<ServerIpmiPowerRequest, ServerIpmiPowerRequestBuilder> {
  /// The power action to send to the ipmi controller.
  @BuiltValueField(wireName: r'action')
  ServerIpmiPowerRequestActionEnum get action;
  // enum actionEnum {  cycle,  reset,  on,  off,  soft,  };

  /// The Asset ID
  @BuiltValueField(wireName: r'asset')
  int? get asset;

  ServerIpmiPowerRequest._();

  factory ServerIpmiPowerRequest([void updates(ServerIpmiPowerRequestBuilder b)]) = _$ServerIpmiPowerRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerIpmiPowerRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerIpmiPowerRequest> get serializer => _$ServerIpmiPowerRequestSerializer();
}

class _$ServerIpmiPowerRequestSerializer implements PrimitiveSerializer<ServerIpmiPowerRequest> {
  @override
  final Iterable<Type> types = const [ServerIpmiPowerRequest, _$ServerIpmiPowerRequest];

  @override
  final String wireName = r'ServerIpmiPowerRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerIpmiPowerRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'action';
    yield serializers.serialize(
      object.action,
      specifiedType: const FullType(ServerIpmiPowerRequestActionEnum),
    );
    if (object.asset != null) {
      yield r'asset';
      yield serializers.serialize(
        object.asset,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerIpmiPowerRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerIpmiPowerRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'action':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(ServerIpmiPowerRequestActionEnum),
          ) as ServerIpmiPowerRequestActionEnum;
          result.action = valueDes;
          break;
        case r'asset':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.asset = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerIpmiPowerRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerIpmiPowerRequestBuilder();
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

class ServerIpmiPowerRequestActionEnum extends EnumClass {

  /// The power action to send to the ipmi controller.
  @BuiltValueEnumConst(wireName: r'cycle')
  static const ServerIpmiPowerRequestActionEnum cycle = _$serverIpmiPowerRequestActionEnum_cycle;
  /// The power action to send to the ipmi controller.
  @BuiltValueEnumConst(wireName: r'reset')
  static const ServerIpmiPowerRequestActionEnum reset = _$serverIpmiPowerRequestActionEnum_reset;
  /// The power action to send to the ipmi controller.
  @BuiltValueEnumConst(wireName: r'on')
  static const ServerIpmiPowerRequestActionEnum on_ = _$serverIpmiPowerRequestActionEnum_on_;
  /// The power action to send to the ipmi controller.
  @BuiltValueEnumConst(wireName: r'off')
  static const ServerIpmiPowerRequestActionEnum off = _$serverIpmiPowerRequestActionEnum_off;
  /// The power action to send to the ipmi controller.
  @BuiltValueEnumConst(wireName: r'soft')
  static const ServerIpmiPowerRequestActionEnum soft = _$serverIpmiPowerRequestActionEnum_soft;

  static Serializer<ServerIpmiPowerRequestActionEnum> get serializer => _$serverIpmiPowerRequestActionEnumSerializer;

  const ServerIpmiPowerRequestActionEnum._(String name): super(name);

  static BuiltSet<ServerIpmiPowerRequestActionEnum> get values => _$serverIpmiPowerRequestActionEnumValues;
  static ServerIpmiPowerRequestActionEnum valueOf(String name) => _$serverIpmiPowerRequestActionEnumValueOf(name);
}

