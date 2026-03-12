//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'servers_buy_now_error.g.dart';

/// Error response when a buy-it-now server order fails validation.
///
/// Properties:
/// * [success] - Always false for error responses.
/// * [text] - Human-readable error summary.
/// * [errors] - List of specific validation error messages.
@BuiltValue()
abstract class ServersBuyNowError implements Built<ServersBuyNowError, ServersBuyNowErrorBuilder> {
  /// Always false for error responses.
  @BuiltValueField(wireName: r'success')
  bool? get success;

  /// Human-readable error summary.
  @BuiltValueField(wireName: r'text')
  String? get text;

  /// List of specific validation error messages.
  @BuiltValueField(wireName: r'errors')
  BuiltList<String>? get errors;

  ServersBuyNowError._();

  factory ServersBuyNowError([void updates(ServersBuyNowErrorBuilder b)]) = _$ServersBuyNowError;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServersBuyNowErrorBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServersBuyNowError> get serializer => _$ServersBuyNowErrorSerializer();
}

class _$ServersBuyNowErrorSerializer implements PrimitiveSerializer<ServersBuyNowError> {
  @override
  final Iterable<Type> types = const [ServersBuyNowError, _$ServersBuyNowError];

  @override
  final String wireName = r'ServersBuyNowError';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServersBuyNowError object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.success != null) {
      yield r'success';
      yield serializers.serialize(
        object.success,
        specifiedType: const FullType(bool),
      );
    }
    if (object.text != null) {
      yield r'text';
      yield serializers.serialize(
        object.text,
        specifiedType: const FullType(String),
      );
    }
    if (object.errors != null) {
      yield r'errors';
      yield serializers.serialize(
        object.errors,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    ServersBuyNowError object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServersBuyNowErrorBuilder result,
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
        case r'errors':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.errors.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServersBuyNowError deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServersBuyNowErrorBuilder();
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

