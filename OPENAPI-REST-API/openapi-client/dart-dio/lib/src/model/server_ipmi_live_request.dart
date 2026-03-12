//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'server_ipmi_live_request.g.dart';

/// Request body to setup an IPMI Live connection.
///
/// Properties:
/// * [ip] - Your IP Address you wish to connect to the IPMI system from.
/// * [asset] - Asset ID
@BuiltValue()
abstract class ServerIpmiLiveRequest implements Built<ServerIpmiLiveRequest, ServerIpmiLiveRequestBuilder> {
  /// Your IP Address you wish to connect to the IPMI system from.
  @BuiltValueField(wireName: r'ip')
  String get ip;

  /// Asset ID
  @BuiltValueField(wireName: r'asset')
  int? get asset;

  ServerIpmiLiveRequest._();

  factory ServerIpmiLiveRequest([void updates(ServerIpmiLiveRequestBuilder b)]) = _$ServerIpmiLiveRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServerIpmiLiveRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServerIpmiLiveRequest> get serializer => _$ServerIpmiLiveRequestSerializer();
}

class _$ServerIpmiLiveRequestSerializer implements PrimitiveSerializer<ServerIpmiLiveRequest> {
  @override
  final Iterable<Type> types = const [ServerIpmiLiveRequest, _$ServerIpmiLiveRequest];

  @override
  final String wireName = r'ServerIpmiLiveRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServerIpmiLiveRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'ip';
    yield serializers.serialize(
      object.ip,
      specifiedType: const FullType(String),
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
    ServerIpmiLiveRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServerIpmiLiveRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'ip':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.ip = valueDes;
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
  ServerIpmiLiveRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServerIpmiLiveRequestBuilder();
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

