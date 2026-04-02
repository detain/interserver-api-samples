//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'service_order_post_response.g.dart';

/// Generic response returned after placing a service order. Contains invoice IDs for payment and the new service ID.
///
/// Properties:
/// * [continue_] - Whether the order was accepted and can proceed to payment.
/// * [errors] - List of validation errors (empty on success).
/// * [totalCost] - Total cost of the order.
/// * [iid] - Primary invoice ID for payment.
/// * [iids] - All invoice identifiers associated with the order.
/// * [realIids] - Numeric invoice IDs for use with billing endpoints.
/// * [serviceId] - The new service ID created by the order.
/// * [invoiceDescription] - Human-readable description of the invoice.
@BuiltValue()
abstract class ServiceOrderPostResponse implements Built<ServiceOrderPostResponse, ServiceOrderPostResponseBuilder> {
  /// Whether the order was accepted and can proceed to payment.
  @BuiltValueField(wireName: r'continue')
  bool? get continue_;

  /// List of validation errors (empty on success).
  @BuiltValueField(wireName: r'errors')
  BuiltList<String>? get errors;

  /// Total cost of the order.
  @BuiltValueField(wireName: r'total_cost')
  String? get totalCost;

  /// Primary invoice ID for payment.
  @BuiltValueField(wireName: r'iid')
  String? get iid;

  /// All invoice identifiers associated with the order.
  @BuiltValueField(wireName: r'iids')
  BuiltList<String>? get iids;

  /// Numeric invoice IDs for use with billing endpoints.
  @BuiltValueField(wireName: r'real_iids')
  BuiltList<String>? get realIids;

  /// The new service ID created by the order.
  @BuiltValueField(wireName: r'serviceId')
  int? get serviceId;

  /// Human-readable description of the invoice.
  @BuiltValueField(wireName: r'invoice_description')
  String? get invoiceDescription;

  ServiceOrderPostResponse._();

  factory ServiceOrderPostResponse([void updates(ServiceOrderPostResponseBuilder b)]) = _$ServiceOrderPostResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(ServiceOrderPostResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<ServiceOrderPostResponse> get serializer => _$ServiceOrderPostResponseSerializer();
}

class _$ServiceOrderPostResponseSerializer implements PrimitiveSerializer<ServiceOrderPostResponse> {
  @override
  final Iterable<Type> types = const [ServiceOrderPostResponse, _$ServiceOrderPostResponse];

  @override
  final String wireName = r'ServiceOrderPostResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    ServiceOrderPostResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.continue_ != null) {
      yield r'continue';
      yield serializers.serialize(
        object.continue_,
        specifiedType: const FullType(bool),
      );
    }
    if (object.errors != null) {
      yield r'errors';
      yield serializers.serialize(
        object.errors,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.totalCost != null) {
      yield r'total_cost';
      yield serializers.serialize(
        object.totalCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.iid != null) {
      yield r'iid';
      yield serializers.serialize(
        object.iid,
        specifiedType: const FullType(String),
      );
    }
    if (object.iids != null) {
      yield r'iids';
      yield serializers.serialize(
        object.iids,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.realIids != null) {
      yield r'real_iids';
      yield serializers.serialize(
        object.realIids,
        specifiedType: const FullType(BuiltList, [FullType(String)]),
      );
    }
    if (object.serviceId != null) {
      yield r'serviceId';
      yield serializers.serialize(
        object.serviceId,
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
  }

  @override
  Object serialize(
    Serializers serializers,
    ServiceOrderPostResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required ServiceOrderPostResponseBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'continue':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.continue_ = valueDes;
          break;
        case r'errors':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.errors.replace(valueDes);
          break;
        case r'total_cost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.totalCost = valueDes;
          break;
        case r'iid':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.iid = valueDes;
          break;
        case r'iids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.iids.replace(valueDes);
          break;
        case r'real_iids':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(BuiltList, [FullType(String)]),
          ) as BuiltList<String>;
          result.realIids.replace(valueDes);
          break;
        case r'serviceId':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceId = valueDes;
          break;
        case r'invoice_description':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.invoiceDescription = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  ServiceOrderPostResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = ServiceOrderPostResponseBuilder();
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

