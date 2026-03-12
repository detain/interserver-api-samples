//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_order_put_request.g.dart';

/// Parameters to submit to validate your backup order
///
/// Properties:
/// * [validateOnly] 
/// * [serviceType] 
/// * [coupon] 
@BuiltValue()
abstract class BackupOrderPutRequest implements Built<BackupOrderPutRequest, BackupOrderPutRequestBuilder> {
  @BuiltValueField(wireName: r'validateOnly')
  bool? get validateOnly;

  @BuiltValueField(wireName: r'serviceType')
  int? get serviceType;

  @BuiltValueField(wireName: r'coupon')
  String? get coupon;

  BackupOrderPutRequest._();

  factory BackupOrderPutRequest([void updates(BackupOrderPutRequestBuilder b)]) = _$BackupOrderPutRequest;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupOrderPutRequestBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupOrderPutRequest> get serializer => _$BackupOrderPutRequestSerializer();
}

class _$BackupOrderPutRequestSerializer implements PrimitiveSerializer<BackupOrderPutRequest> {
  @override
  final Iterable<Type> types = const [BackupOrderPutRequest, _$BackupOrderPutRequest];

  @override
  final String wireName = r'BackupOrderPutRequest';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupOrderPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) sync* {
    if (object.validateOnly != null) {
      yield r'validateOnly';
      yield serializers.serialize(
        object.validateOnly,
        specifiedType: const FullType(bool),
      );
    }
    if (object.serviceType != null) {
      yield r'serviceType';
      yield serializers.serialize(
        object.serviceType,
        specifiedType: const FullType(int),
      );
    }
    if (object.coupon != null) {
      yield r'coupon';
      yield serializers.serialize(
        object.coupon,
        specifiedType: const FullType(String),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupOrderPutRequest object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupOrderPutRequestBuilder result,
    required List<Object?> unhandled,
  }) {
    for (var i = 0; i < serializedList.length; i += 2) {
      final key = serializedList[i] as String;
      final value = serializedList[i + 1];
      switch (key) {
        case r'validateOnly':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(bool),
          ) as bool;
          result.validateOnly = valueDes;
          break;
        case r'serviceType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceType = valueDes;
          break;
        case r'coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.coupon = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupOrderPutRequest deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupOrderPutRequestBuilder();
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

