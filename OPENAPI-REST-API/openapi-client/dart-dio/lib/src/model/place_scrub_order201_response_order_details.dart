//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:openapi/src/model/place_scrub_order201_response_order_details_cj_params.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'place_scrub_order201_response_order_details.g.dart';

/// PlaceScrubOrder201ResponseOrderDetails
///
/// Properties:
/// * [totalCost] 
/// * [serviceId] 
/// * [invoiceId] 
/// * [invoiceDescription] 
/// * [cjParams] 
@BuiltValue()
abstract class PlaceScrubOrder201ResponseOrderDetails implements Built<PlaceScrubOrder201ResponseOrderDetails, PlaceScrubOrder201ResponseOrderDetailsBuilder> {
  @BuiltValueField(wireName: r'total_cost')
  int? get totalCost;

  @BuiltValueField(wireName: r'service_id')
  int? get serviceId;

  @BuiltValueField(wireName: r'invoice_id')
  int? get invoiceId;

  @BuiltValueField(wireName: r'invoice_description')
  String? get invoiceDescription;

  @BuiltValueField(wireName: r'cj_params')
  PlaceScrubOrder201ResponseOrderDetailsCjParams? get cjParams;

  PlaceScrubOrder201ResponseOrderDetails._();

  factory PlaceScrubOrder201ResponseOrderDetails([void updates(PlaceScrubOrder201ResponseOrderDetailsBuilder b)]) = _$PlaceScrubOrder201ResponseOrderDetails;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(PlaceScrubOrder201ResponseOrderDetailsBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<PlaceScrubOrder201ResponseOrderDetails> get serializer => _$PlaceScrubOrder201ResponseOrderDetailsSerializer();
}

class _$PlaceScrubOrder201ResponseOrderDetailsSerializer implements PrimitiveSerializer<PlaceScrubOrder201ResponseOrderDetails> {
  @override
  final Iterable<Type> types = const [PlaceScrubOrder201ResponseOrderDetails, _$PlaceScrubOrder201ResponseOrderDetails];

  @override
  final String wireName = r'PlaceScrubOrder201ResponseOrderDetails';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    PlaceScrubOrder201ResponseOrderDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.totalCost != null) {
      yield r'total_cost';
      yield serializers.serialize(
        object.totalCost,
        specifiedType: const FullType(int),
      );
    }
    if (object.serviceId != null) {
      yield r'service_id';
      yield serializers.serialize(
        object.serviceId,
        specifiedType: const FullType(int),
      );
    }
    if (object.invoiceId != null) {
      yield r'invoice_id';
      yield serializers.serialize(
        object.invoiceId,
        specifiedType: const FullType(int),
      );
    }
    if (object.invoiceDescription != null) {
      yield r'invoice_description';
      yield serializers.serialize(
        object.invoiceDescription,
        specifiedType: const FullType(String),
      );
    }
    if (object.cjParams != null) {
      yield r'cj_params';
      yield serializers.serialize(
        object.cjParams,
        specifiedType: const FullType(PlaceScrubOrder201ResponseOrderDetailsCjParams),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    PlaceScrubOrder201ResponseOrderDetails object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required PlaceScrubOrder201ResponseOrderDetailsBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'total_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.totalCost = valueDes;
          break;
        case r'service_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceId = valueDes;
          break;
        case r'invoice_id':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.invoiceId = valueDes;
          break;
        case r'invoice_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoiceDescription = valueDes;
          break;
        case r'cj_params':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(PlaceScrubOrder201ResponseOrderDetailsCjParams),
          ) as PlaceScrubOrder201ResponseOrderDetailsCjParams;
          result.cjParams.replace(valueDes);
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  PlaceScrubOrder201ResponseOrderDetails deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = PlaceScrubOrder201ResponseOrderDetailsBuilder();
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

