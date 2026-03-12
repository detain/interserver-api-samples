//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'place_buy_now_server_request.g.dart';

/// PlaceBuyNowServerRequest
///
/// Properties:
/// * [serverId] - The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
/// * [serverHostname] - The fully-qualified hostname to assign to the server.
/// * [serverRootPassword] - The root or administrator password to set on the server.
@BuiltValue()
abstract class PlaceBuyNowServerRequest implements Built<PlaceBuyNowServerRequest, PlaceBuyNowServerRequestBuilder> {
  /// The ID of the buy-it-now server configuration to order. Use the server listing from `GET /servers/order/buy_now_server` to find valid IDs.
  @BuiltValueField(wireName: r'server_id')
  num? get serverId;

  /// The fully-qualified hostname to assign to the server.
  @BuiltValueField(wireName: r'server_hostname')
  String? get serverHostname;

  /// The root or administrator password to set on the server.
  @BuiltValueField(wireName: r'server_root_password')
  String? get serverRootPassword;

  PlaceBuyNowServerRequest._();

  factory PlaceBuyNowServerRequest([void updates(PlaceBuyNowServerRequestBuilder b)]) = _$PlaceBuyNowServerRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PlaceBuyNowServerRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PlaceBuyNowServerRequest> get serializer => _$PlaceBuyNowServerRequestSerializer();
}

class _$PlaceBuyNowServerRequestSerializer implements PrimitiveSerializer<PlaceBuyNowServerRequest> {
  @override
  final Iterable<Type> types = const [PlaceBuyNowServerRequest, _$PlaceBuyNowServerRequest];

  @override
  final String wireName = r'PlaceBuyNowServerRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PlaceBuyNowServerRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.serverId != null) {
      yield r'server_id';
      yield serializers.serialize(
        object.serverId,
        specifiedType: const FullType(num),
      );
    }
    if (object.serverHostname != null) {
      yield r'server_hostname';
      yield serializers.serialize(
        object.serverHostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.serverRootPassword != null) {
      yield r'server_root_password';
      yield serializers.serialize(
        object.serverRootPassword,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PlaceBuyNowServerRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PlaceBuyNowServerRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'server_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.serverId = valueDes;
          break;
        case r'server_hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverHostname = valueDes;
          break;
        case r'server_root_password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serverRootPassword = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PlaceBuyNowServerRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PlaceBuyNowServerRequestBuilder();
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

