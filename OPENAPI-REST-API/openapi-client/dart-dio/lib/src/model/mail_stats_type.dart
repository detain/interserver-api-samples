//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:openapi/src/model/mail_stats_type_volume.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_stats_type.g.dart';

/// Statistics about the mail usage including volume by IP, To address, and From address; as well as total sent / delivered counts and cost.
///
/// Properties:
/// * [time] 
/// * [usage] 
/// * [currency] 
/// * [currencySymbol] 
/// * [cost] 
/// * [received] 
/// * [sent] 
/// * [volume] 
@BuiltValue()
abstract class MailStatsType implements Built<MailStatsType, MailStatsTypeBuilder> {
  @BuiltValueField(wireName: r'time')
  MailStatsTypeTimeEnum? get time;
  // enum timeEnum {  all,  billing,  month,  7d,  24h,  today,  1h,  };

  @BuiltValueField(wireName: r'usage')
  int? get usage;

  @BuiltValueField(wireName: r'currency')
  String? get currency;

  @BuiltValueField(wireName: r'currencySymbol')
  String? get currencySymbol;

  @BuiltValueField(wireName: r'cost')
  double? get cost;

  @BuiltValueField(wireName: r'received')
  int? get received;

  @BuiltValueField(wireName: r'sent')
  int? get sent;

  @BuiltValueField(wireName: r'volume')
  MailStatsTypeVolume? get volume;

  MailStatsType._();

  factory MailStatsType([void updates(MailStatsTypeBuilder b)]) = _$MailStatsType;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailStatsTypeBuilder b) => b
      ..time = MailStatsTypeTimeEnum.valueOf('1h');

  @BuiltValueSerializer(custom: true)
  static Serializer<MailStatsType> get serializer => _$MailStatsTypeSerializer();
}

class _$MailStatsTypeSerializer implements PrimitiveSerializer<MailStatsType> {
  @override
  final Iterable<Type> types = const [MailStatsType, _$MailStatsType];

  @override
  final String wireName = r'MailStatsType';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailStatsType object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.time != null) {
      yield r'time';
      yield serializers.serialize(
        object.time,
        specifiedType: const FullType(MailStatsTypeTimeEnum),
      );
    }
    if (object.usage != null) {
      yield r'usage';
      yield serializers.serialize(
        object.usage,
        specifiedType: const FullType(int),
      );
    }
    if (object.currency != null) {
      yield r'currency';
      yield serializers.serialize(
        object.currency,
        specifiedType: const FullType(String),
      );
    }
    if (object.currencySymbol != null) {
      yield r'currencySymbol';
      yield serializers.serialize(
        object.currencySymbol,
        specifiedType: const FullType(String),
      );
    }
    if (object.cost != null) {
      yield r'cost';
      yield serializers.serialize(
        object.cost,
        specifiedType: const FullType(double),
      );
    }
    if (object.received != null) {
      yield r'received';
      yield serializers.serialize(
        object.received,
        specifiedType: const FullType(int),
      );
    }
    if (object.sent != null) {
      yield r'sent';
      yield serializers.serialize(
        object.sent,
        specifiedType: const FullType(int),
      );
    }
    if (object.volume != null) {
      yield r'volume';
      yield serializers.serialize(
        object.volume,
        specifiedType: const FullType(MailStatsTypeVolume),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailStatsType object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailStatsTypeBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'time':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailStatsTypeTimeEnum),
          ) as MailStatsTypeTimeEnum;
          result.time = valueDes;
          break;
        case r'usage':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.usage = valueDes;
          break;
        case r'currency':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currency = valueDes;
          break;
        case r'currencySymbol':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.currencySymbol = valueDes;
          break;
        case r'cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(double),
          ) as double;
          result.cost = valueDes;
          break;
        case r'received':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.received = valueDes;
          break;
        case r'sent':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.sent = valueDes;
          break;
        case r'volume':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(MailStatsTypeVolume),
          ) as MailStatsTypeVolume;
          result.volume.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailStatsType deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailStatsTypeBuilder();
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

class MailStatsTypeTimeEnum extends EnumClass {

  @BuiltValueEnumConst(wireName: r'all')
  static const MailStatsTypeTimeEnum all = _$mailStatsTypeTimeEnum_all;
  @BuiltValueEnumConst(wireName: r'billing')
  static const MailStatsTypeTimeEnum billing = _$mailStatsTypeTimeEnum_billing;
  @BuiltValueEnumConst(wireName: r'month')
  static const MailStatsTypeTimeEnum month = _$mailStatsTypeTimeEnum_month;
  @BuiltValueEnumConst(wireName: r'7d')
  static const MailStatsTypeTimeEnum n7d = _$mailStatsTypeTimeEnum_n7d;
  @BuiltValueEnumConst(wireName: r'24h')
  static const MailStatsTypeTimeEnum n24h = _$mailStatsTypeTimeEnum_n24h;
  @BuiltValueEnumConst(wireName: r'today')
  static const MailStatsTypeTimeEnum today = _$mailStatsTypeTimeEnum_today;
  @BuiltValueEnumConst(wireName: r'1h')
  static const MailStatsTypeTimeEnum n1h = _$mailStatsTypeTimeEnum_n1h;

  static Serializer<MailStatsTypeTimeEnum> get serializer => _$mailStatsTypeTimeEnumSerializer;

  const MailStatsTypeTimeEnum._(String name): super(name);

  static BuiltSet<MailStatsTypeTimeEnum> get values => _$mailStatsTypeTimeEnumValues;
  static MailStatsTypeTimeEnum valueOf(String name) => _$mailStatsTypeTimeEnumValueOf(name);
}

