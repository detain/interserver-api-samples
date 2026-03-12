//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'get_account_info401_response.g.dart';

/// GetAccountInfo401Response
///
/// Properties:
/// * [code] 
/// * [message] 
@BuiltValue()
abstract class GetAccountInfo401Response implements Built<GetAccountInfo401Response, GetAccountInfo401ResponseBuilder> {
  @BuiltValueField(wireName: r'code')
  int get code;

  @BuiltValueField(wireName: r'message')
  String get message;

  GetAccountInfo401Response._();

  factory GetAccountInfo401Response([void updates(GetAccountInfo401ResponseBuilder b)]) = _$GetAccountInfo401Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GetAccountInfo401ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GetAccountInfo401Response> get serializer => _$GetAccountInfo401ResponseSerializer();
}

class _$GetAccountInfo401ResponseSerializer implements PrimitiveSerializer<GetAccountInfo401Response> {
  @override
  final Iterable<Type> types = const [GetAccountInfo401Response, _$GetAccountInfo401Response];

  @override
  final String wireName = r'GetAccountInfo401Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GetAccountInfo401Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'code';
    yield serializers.serialize(
      object.code,
      specifiedType: const FullType(int),
    );
    yield r'message';
    yield serializers.serialize(
      object.message,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    GetAccountInfo401Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GetAccountInfo401ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'code':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.code = valueDes;
          break;
        case r'message':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.message = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  GetAccountInfo401Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GetAccountInfo401ResponseBuilder();
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

