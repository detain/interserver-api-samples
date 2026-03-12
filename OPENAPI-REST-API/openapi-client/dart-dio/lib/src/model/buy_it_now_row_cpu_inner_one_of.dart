//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'buy_it_now_row_cpu_inner_one_of.g.dart';

/// BuyItNowRowCpuInnerOneOf
///
/// Properties:
/// * [img] 
/// * [type] 
/// * [speed] 
/// * [numCpus] 
/// * [numCores] 
@BuiltValue()
abstract class BuyItNowRowCpuInnerOneOf implements Built<BuyItNowRowCpuInnerOneOf, BuyItNowRowCpuInnerOneOfBuilder> {
  @BuiltValueField(wireName: r'img')
  String? get img;

  @BuiltValueField(wireName: r'type')
  String? get type;

  @BuiltValueField(wireName: r'speed')
  String? get speed;

  @BuiltValueField(wireName: r'num_cpus')
  String? get numCpus;

  @BuiltValueField(wireName: r'num_cores')
  String? get numCores;

  BuyItNowRowCpuInnerOneOf._();

  factory BuyItNowRowCpuInnerOneOf([void updates(BuyItNowRowCpuInnerOneOfBuilder b)]) = _$BuyItNowRowCpuInnerOneOf;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BuyItNowRowCpuInnerOneOfBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BuyItNowRowCpuInnerOneOf> get serializer => _$BuyItNowRowCpuInnerOneOfSerializer();
}

class _$BuyItNowRowCpuInnerOneOfSerializer implements PrimitiveSerializer<BuyItNowRowCpuInnerOneOf> {
  @override
  final Iterable<Type> types = const [BuyItNowRowCpuInnerOneOf, _$BuyItNowRowCpuInnerOneOf];

  @override
  final String wireName = r'BuyItNowRowCpuInnerOneOf';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BuyItNowRowCpuInnerOneOf object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.img != null) {
      yield r'img';
      yield serializers.serialize(
        object.img,
        specifiedType: const FullType(String),
      );
    }
    if (object.type != null) {
      yield r'type';
      yield serializers.serialize(
        object.type,
        specifiedType: const FullType(String),
      );
    }
    if (object.speed != null) {
      yield r'speed';
      yield serializers.serialize(
        object.speed,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCpus != null) {
      yield r'num_cpus';
      yield serializers.serialize(
        object.numCpus,
        specifiedType: const FullType(String),
      );
    }
    if (object.numCores != null) {
      yield r'num_cores';
      yield serializers.serialize(
        object.numCores,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BuyItNowRowCpuInnerOneOf object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BuyItNowRowCpuInnerOneOfBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'img':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.img = valueDes;
          break;
        case r'type':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.type = valueDes;
          break;
        case r'speed':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.speed = valueDes;
          break;
        case r'num_cpus':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCpus = valueDes;
          break;
        case r'num_cores':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.numCores = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BuyItNowRowCpuInnerOneOf deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BuyItNowRowCpuInnerOneOfBuilder();
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

