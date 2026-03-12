//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/json_object.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'mail_deliverability_response.g.dart';

/// Deliverability statistics for a mail service.
///
/// Properties:
/// * [stat] - Delivered and bounced counts.
/// * [percent] - Bounce percentage.
/// * [tableData] - Detailed deliverability breakdown by sender or domain.
@BuiltValue()
abstract class MailDeliverabilityResponse implements Built<MailDeliverabilityResponse, MailDeliverabilityResponseBuilder> {
  /// Delivered and bounced counts.
  @BuiltValueField(wireName: r'stat')
  JsonObject? get stat;

  /// Bounce percentage.
  @BuiltValueField(wireName: r'percent')
  num? get percent;

  /// Detailed deliverability breakdown by sender or domain.
  @BuiltValueField(wireName: r'table_data')
  BuiltList<BuiltList<String>>? get tableData;

  MailDeliverabilityResponse._();

  factory MailDeliverabilityResponse([void updates(MailDeliverabilityResponseBuilder b)]) = _$MailDeliverabilityResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(MailDeliverabilityResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<MailDeliverabilityResponse> get serializer => _$MailDeliverabilityResponseSerializer();
}

class _$MailDeliverabilityResponseSerializer implements PrimitiveSerializer<MailDeliverabilityResponse> {
  @override
  final Iterable<Type> types = const [MailDeliverabilityResponse, _$MailDeliverabilityResponse];

  @override
  final String wireName = r'MailDeliverabilityResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    MailDeliverabilityResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.stat != null) {
      yield r'stat';
      yield serializers.serialize(
        object.stat,
        specifiedType: const FullType(JsonObject),
      );
    }
    if (object.percent != null) {
      yield r'percent';
      yield serializers.serialize(
        object.percent,
        specifiedType: const FullType(num),
      );
    }
    if (object.tableData != null) {
      yield r'table_data';
      yield serializers.serialize(
        object.tableData,
        specifiedType: const FullType(BuiltList, [FullType(BuiltList, [FullType(String)])]),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    MailDeliverabilityResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required MailDeliverabilityResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'stat':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(JsonObject),
          ) as JsonObject;
          result.stat = valueDes;
          break;
        case r'percent':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(num),
          ) as num;
          result.percent = valueDes;
          break;
        case r'table_data':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(BuiltList, [FullType(String)])]),
          ) as BuiltList<BuiltList<String>>;
          result.tableData.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  MailDeliverabilityResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = MailDeliverabilityResponseBuilder();
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

