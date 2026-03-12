//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'disable_scrub400_response.g.dart';

/// DisableScrub400Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class DisableScrub400Response implements Built<DisableScrub400Response, DisableScrub400ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  DisableScrub400Response._();

  factory DisableScrub400Response([void updates(DisableScrub400ResponseBuilder b)]) = _$DisableScrub400Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(DisableScrub400ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<DisableScrub400Response> get serializer => _$DisableScrub400ResponseSerializer();
}

class _$DisableScrub400ResponseSerializer implements PrimitiveSerializer<DisableScrub400Response> {
  @override
  final Iterable<Type> types = const [DisableScrub400Response, _$DisableScrub400Response];

  @override
  final String wireName = r'DisableScrub400Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    DisableScrub400Response object, {
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
    DisableScrub400Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required DisableScrub400ResponseBuilder result,
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
  DisableScrub400Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = DisableScrub400ResponseBuilder();
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

