//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'vps_cancel200_response.g.dart';

/// VPSCancel200Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class VPSCancel200Response implements Built<VPSCancel200Response, VPSCancel200ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  VPSCancel200Response._();

  factory VPSCancel200Response([void updates(VPSCancel200ResponseBuilder b)]) = _$VPSCancel200Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(VPSCancel200ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<VPSCancel200Response> get serializer => _$VPSCancel200ResponseSerializer();
}

class _$VPSCancel200ResponseSerializer implements PrimitiveSerializer<VPSCancel200Response> {
  @override
  final Iterable<Type> types = const [VPSCancel200Response, _$VPSCancel200Response];

  @override
  final String wireName = r'VPSCancel200Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    VPSCancel200Response object, {
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
    VPSCancel200Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required VPSCancel200ResponseBuilder result,
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
  VPSCancel200Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = VPSCancel200ResponseBuilder();
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

