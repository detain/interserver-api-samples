//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'enable_scrub500_response.g.dart';

/// EnableScrub500Response
///
/// Properties:
/// * [success] 
/// * [text] 
@BuiltValue()
abstract class EnableScrub500Response implements Built<EnableScrub500Response, EnableScrub500ResponseBuilder> {
  @BuiltValueField(wireName: r'success')
  bool get success;

  @BuiltValueField(wireName: r'text')
  String get text;

  EnableScrub500Response._();

  factory EnableScrub500Response([void updates(EnableScrub500ResponseBuilder b)]) = _$EnableScrub500Response;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(EnableScrub500ResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<EnableScrub500Response> get serializer => _$EnableScrub500ResponseSerializer();
}

class _$EnableScrub500ResponseSerializer implements PrimitiveSerializer<EnableScrub500Response> {
  @override
  final Iterable<Type> types = const [EnableScrub500Response, _$EnableScrub500Response];

  @override
  final String wireName = r'EnableScrub500Response';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    EnableScrub500Response object, {
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
    EnableScrub500Response object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required EnableScrub500ResponseBuilder result,
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
  EnableScrub500Response deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = EnableScrub500ResponseBuilder();
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

