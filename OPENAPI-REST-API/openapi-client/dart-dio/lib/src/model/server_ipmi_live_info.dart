//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_ipmi_live_info.g.dart';

/// Information about the IPMI connection.
///
/// Properties:
/// * [text] 
/// * [publicIp] 
/// * [allowedIp] 
/// * [clientUsername] 
/// * [clientPassword] 
@BuiltValue()
abstract class ServerIpmiLiveInfo implements Built<ServerIpmiLiveInfo, ServerIpmiLiveInfoBuilder> {
  @BuiltValueField(wireName: r'text')
  String? get text;

  @BuiltValueField(wireName: r'public_ip')
  String? get publicIp;

  @BuiltValueField(wireName: r'allowed_ip')
  String? get allowedIp;

  @BuiltValueField(wireName: r'client_username')
  String? get clientUsername;

  @BuiltValueField(wireName: r'client_password')
  String? get clientPassword;

  ServerIpmiLiveInfo._();

  factory ServerIpmiLiveInfo([void updates(ServerIpmiLiveInfoBuilder b)]) = _$ServerIpmiLiveInfo;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerIpmiLiveInfoBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerIpmiLiveInfo> get serializer => _$ServerIpmiLiveInfoSerializer();
}

class _$ServerIpmiLiveInfoSerializer implements PrimitiveSerializer<ServerIpmiLiveInfo> {
  @override
  final Iterable<Type> types = const [ServerIpmiLiveInfo, _$ServerIpmiLiveInfo];

  @override
  final String wireName = r'ServerIpmiLiveInfo';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerIpmiLiveInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.publicIp != null) {
      yield r'public_ip';
      yield serializers.serialize(
        object.publicIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.allowedIp != null) {
      yield r'allowed_ip';
      yield serializers.serialize(
        object.allowedIp,
        specifiedType: const FullType(String),
      );
    }
    if (object.clientUsername != null) {
      yield r'client_username';
      yield serializers.serialize(
        object.clientUsername,
        specifiedType: const FullType(String),
      );
    }
    if (object.clientPassword != null) {
      yield r'client_password';
      yield serializers.serialize(
        object.clientPassword,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServerIpmiLiveInfo object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerIpmiLiveInfoBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        case r'public_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.publicIp = valueDes;
          break;
        case r'allowed_ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.allowedIp = valueDes;
          break;
        case r'client_username':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.clientUsername = valueDes;
          break;
        case r'client_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.clientPassword = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServerIpmiLiveInfo deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerIpmiLiveInfoBuilder();
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

