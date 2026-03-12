//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'licenses_cancel200_response.g.dart';

/// LicensesCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class LicensesCancel200Response implements Built<LicensesCancel200Response, LicensesCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  LicensesCancel200Response._();

  factory LicensesCancel200Response([void updates(LicensesCancel200ResponseBuilder b)]) = _$LicensesCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(LicensesCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<LicensesCancel200Response> get serializer => _$LicensesCancel200ResponseSerializer();
}

class _$LicensesCancel200ResponseSerializer implements PrimitiveSerializer<LicensesCancel200Response> {
  @override
  final Iterable<Type> types = const [LicensesCancel200Response, _$LicensesCancel200Response];

  @override
  final String wireName = r'LicensesCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    LicensesCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'success';
    yield serializers.serialize(
      object.success,
      specifiedType: const FullType(bool),
    );
    yield r'text';
    yield serializers.serialize(
      object.text,
      specifiedType: const FullType(String),
    );
  }

  @override
  Object serialize(
    Serializers serializers,
    LicensesCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required LicensesCancel200ResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'success':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.success = valueDes;
          break;
        case r'text':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.text = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  LicensesCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = LicensesCancel200ResponseBuilder();
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

