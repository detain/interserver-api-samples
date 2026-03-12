//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'generic_response.g.dart';

/// Generic Response
///
/// Properties:
/// * [status] 
/// * [text] 
@BuiltValue()
abstract class GenericResponse implements Built<GenericResponse, GenericResponseBuilder> {
  @BuiltValueField(wireName: r'status')
  String get status;

  @BuiltValueField(wireName: r'text')
  String get text;

  GenericResponse._();

  factory GenericResponse([void updates(GenericResponseBuilder b)]) = _$GenericResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(GenericResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<GenericResponse> get serializer => _$GenericResponseSerializer();
}

class _$GenericResponseSerializer implements PrimitiveSerializer<GenericResponse> {
  @override
  final Iterable<Type> types = const [GenericResponse, _$GenericResponse];

  @override
  final String wireName = r'GenericResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    GenericResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    yield r'status';
    yield serializers.serialize(
      object.status,
      specifiedType: const FullType(String),
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
    GenericResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required GenericResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'status':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.status = valueDes;
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
  GenericResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = GenericResponseBuilder();
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

