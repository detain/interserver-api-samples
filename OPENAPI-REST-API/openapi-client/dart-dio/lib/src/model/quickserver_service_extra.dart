//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'quickserver_service_extra.g.dart';

/// QuickserverServiceExtra
///
/// Properties:
/// * [platform] - Platform information
@BuiltValue()
abstract class QuickserverServiceExtra implements Built<QuickserverServiceExtra, QuickserverServiceExtraBuilder> {
  /// Platform information
  @BuiltValueField(wireName: r'platform')
  String? get platform;

  QuickserverServiceExtra._();

  factory QuickserverServiceExtra([void updates(QuickserverServiceExtraBuilder b)]) = _$QuickserverServiceExtra;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(QuickserverServiceExtraBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<QuickserverServiceExtra> get serializer => _$QuickserverServiceExtraSerializer();
}

class _$QuickserverServiceExtraSerializer implements PrimitiveSerializer<QuickserverServiceExtra> {
  @override
  final Iterable<Type> types = const [QuickserverServiceExtra, _$QuickserverServiceExtra];

  @override
  final String wireName = r'QuickserverServiceExtra';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    QuickserverServiceExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.platform != null) {
      yield r'platform';
      yield serializers.serialize(
        object.platform,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    QuickserverServiceExtra object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required QuickserverServiceExtraBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'platform':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.platform = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  QuickserverServiceExtra deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = QuickserverServiceExtraBuilder();
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

