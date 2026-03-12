//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/quickserver_order_server_details381.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_order_server_details.g.dart';

/// Server details.
///
/// Properties:
/// * [n381] 
@BuiltValue()
abstract class QuickserverOrderServerDetails implements Built<QuickserverOrderServerDetails, QuickserverOrderServerDetailsBuilder> {
  @BuiltValueField(wireName: r'381')
  QuickserverOrderServerDetails381? get n381;

  QuickserverOrderServerDetails._();

  factory QuickserverOrderServerDetails([void updates(QuickserverOrderServerDetailsBuilder b)]) = _$QuickserverOrderServerDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverOrderServerDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverOrderServerDetails> get serializer => _$QuickserverOrderServerDetailsSerializer();
}

class _$QuickserverOrderServerDetailsSerializer implements PrimitiveSerializer<QuickserverOrderServerDetails> {
  @override
  final Iterable<Type> types = const [QuickserverOrderServerDetails, _$QuickserverOrderServerDetails];

  @override
  final String wireName = r'QuickserverOrderServerDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverOrderServerDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.n381 != null) {
      yield r'381';
      yield serializers.serialize(
        object.n381,
        specifiedType: const FullType(QuickserverOrderServerDetails381),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverOrderServerDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverOrderServerDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'381':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(QuickserverOrderServerDetails381),
          ) as QuickserverOrderServerDetails381;
          result.n381.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverOrderServerDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverOrderServerDetailsBuilder();
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

