//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'tickets_count_array.g.dart';

/// TicketsCountArray
///
/// Properties:
/// * [open] 
/// * [onHold] 
/// * [closed] 
@BuiltValue()
abstract class TicketsCountArray implements Built<TicketsCountArray, TicketsCountArrayBuilder> {
  @BuiltValueField(wireName: r'Open')
  int? get open;

  @BuiltValueField(wireName: r'On Hold')
  int? get onHold;

  @BuiltValueField(wireName: r'Closed')
  int? get closed;

  TicketsCountArray._();

  factory TicketsCountArray([void updates(TicketsCountArrayBuilder b)]) = _$TicketsCountArray;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(TicketsCountArrayBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<TicketsCountArray> get serializer => _$TicketsCountArraySerializer();
}

class _$TicketsCountArraySerializer implements PrimitiveSerializer<TicketsCountArray> {
  @override
  final Iterable<Type> types = const [TicketsCountArray, _$TicketsCountArray];

  @override
  final String wireName = r'TicketsCountArray';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    TicketsCountArray object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.open != null) {
      yield r'Open';
      yield serializers.serialize(
        object.open,
        specifiedType: const FullType(int),
      );
    }
    if (object.onHold != null) {
      yield r'On Hold';
      yield serializers.serialize(
        object.onHold,
        specifiedType: const FullType(int),
      );
    }
    if (object.closed != null) {
      yield r'Closed';
      yield serializers.serialize(
        object.closed,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    TicketsCountArray object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required TicketsCountArrayBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'Open':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.open = valueDes;
          break;
        case r'On Hold':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.onHold = valueDes;
          break;
        case r'Closed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.closed = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  TicketsCountArray deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = TicketsCountArrayBuilder();
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

