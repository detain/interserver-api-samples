//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'bandwidth.g.dart';

/// A bandwidth option available for a dedicated server configuration.
///
/// Properties:
/// * [id] 
/// * [shortDesc] 
/// * [monthlyPrice] 
/// * [monthlyPriceDisplay] 
@BuiltValue()
abstract class Bandwidth implements Built<Bandwidth, BandwidthBuilder> {
  @BuiltValueField(wireName: r'id')
  int? get id;

  @BuiltValueField(wireName: r'short_desc')
  String? get shortDesc;

  @BuiltValueField(wireName: r'monthly_price')
  num? get monthlyPrice;

  @BuiltValueField(wireName: r'monthly_price_display')
  String? get monthlyPriceDisplay;

  Bandwidth._();

  factory Bandwidth([void updates(BandwidthBuilder b)]) = _$Bandwidth;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BandwidthBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<Bandwidth> get serializer => _$BandwidthSerializer();
}

class _$BandwidthSerializer implements PrimitiveSerializer<Bandwidth> {
  @override
  final Iterable<Type> types = const [Bandwidth, _$Bandwidth];

  @override
  final String wireName = r'Bandwidth';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    Bandwidth object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.id != null) {
      yield r'id';
      yield serializers.serialize(
        object.id,
        specifiedType: const FullType(int),
      );
    }
    if (object.shortDesc != null) {
      yield r'short_desc';
      yield serializers.serialize(
        object.shortDesc,
        specifiedType: const FullType(String),
      );
    }
    if (object.monthlyPrice != null) {
      yield r'monthly_price';
      yield serializers.serialize(
        object.monthlyPrice,
        specifiedType: const FullType(num),
      );
    }
    if (object.monthlyPriceDisplay != null) {
      yield r'monthly_price_display';
      yield serializers.serialize(
        object.monthlyPriceDisplay,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    Bandwidth object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BandwidthBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.id = valueDes;
          break;
        case r'short_desc':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.shortDesc = valueDes;
          break;
        case r'monthly_price':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.monthlyPrice = valueDes;
          break;
        case r'monthly_price_display':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.monthlyPriceDisplay = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  Bandwidth deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BandwidthBuilder();
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

