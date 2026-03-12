//
// AUTO-GENERATED FILE, DO NOT MODIFY!
//

// ignore_for_file: unused_element
import 'package:built_collection/built_collection.dart';
import 'package:built_value/built_value.dart';
import 'package:built_value/serializer.dart';

part 'backup_order_put_response.g.dart';

/// Backup Order validation response
///
/// Properties:
/// * [continue_] 
/// * [errors] 
/// * [serviceType] 
/// * [serviceCost] 
/// * [originalCost] 
/// * [repeatServiceCost] 
/// * [hostname] 
/// * [password] 
/// * [coupon] 
/// * [couponCode] 
@BuiltValue()
abstract class BackupOrderPutResponse implements Built<BackupOrderPutResponse, BackupOrderPutResponseBuilder> {
  @BuiltValueField(wireName: r'continue')
  bool? get continue_;

  @BuiltValueField(wireName: r'errors')
  BuiltList<String>? get errors;

  @BuiltValueField(wireName: r'serviceType')
  int? get serviceType;

  @BuiltValueField(wireName: r'serviceCost')
  String? get serviceCost;

  @BuiltValueField(wireName: r'originalCost')
  String? get originalCost;

  @BuiltValueField(wireName: r'repeatServiceCost')
  String? get repeatServiceCost;

  @BuiltValueField(wireName: r'hostname')
  String? get hostname;

  @BuiltValueField(wireName: r'password')
  String? get password;

  @BuiltValueField(wireName: r'coupon')
  String? get coupon;

  @BuiltValueField(wireName: r'couponCode')
  int? get couponCode;

  BackupOrderPutResponse._();

  factory BackupOrderPutResponse([void updates(BackupOrderPutResponseBuilder b)]) = _$BackupOrderPutResponse;

  @BuiltValueHook(initializeBuilder: true)
  static void _defaults(BackupOrderPutResponseBuilder b) => b;

  @BuiltValueSerializer(custom: true)
  static Serializer<BackupOrderPutResponse> get serializer => _$BackupOrderPutResponseSerializer();
}

class _$BackupOrderPutResponseSerializer implements PrimitiveSerializer<BackupOrderPutResponse> {
  @override
  final Iterable<Type> types = const [BackupOrderPutResponse, _$BackupOrderPutResponse];

  @override
  final String wireName = r'BackupOrderPutResponse';

  Iterable<Object?> _serializeProperties(
    Serializers serializers,
    BackupOrderPutResponse object, {
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
    if (object.serviceType != null) {
      yield r'serviceType';
      yield serializers.serialize(
        object.serviceType,
        specifiedType: const FullType(int),
      );
    }
    if (object.serviceCost != null) {
      yield r'serviceCost';
      yield serializers.serialize(
        object.serviceCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.originalCost != null) {
      yield r'originalCost';
      yield serializers.serialize(
        object.originalCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.repeatServiceCost != null) {
      yield r'repeatServiceCost';
      yield serializers.serialize(
        object.repeatServiceCost,
        specifiedType: const FullType(String),
      );
    }
    if (object.hostname != null) {
      yield r'hostname';
      yield serializers.serialize(
        object.hostname,
        specifiedType: const FullType(String),
      );
    }
    if (object.password != null) {
      yield r'password';
      yield serializers.serialize(
        object.password,
        specifiedType: const FullType(String),
      );
    }
    if (object.coupon != null) {
      yield r'coupon';
      yield serializers.serialize(
        object.coupon,
        specifiedType: const FullType(String),
      );
    }
    if (object.couponCode != null) {
      yield r'couponCode';
      yield serializers.serialize(
        object.couponCode,
        specifiedType: const FullType(int),
      );
    }
  }

  @override
  Object serialize(
    Serializers serializers,
    BackupOrderPutResponse object, {
    FullType specifiedType = FullType.unspecified,
  }) {
    return _serializeProperties(serializers, object, specifiedType: specifiedType).toList();
  }

  void _deserializeProperties(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
    required List<Object?> serializedList,
    required BackupOrderPutResponseBuilder result,
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
        case r'serviceType':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.serviceType = valueDes;
          break;
        case r'serviceCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.serviceCost = valueDes;
          break;
        case r'originalCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.originalCost = valueDes;
          break;
        case r'repeatServiceCost':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.repeatServiceCost = valueDes;
          break;
        case r'hostname':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.hostname = valueDes;
          break;
        case r'password':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.password = valueDes;
          break;
        case r'coupon':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(String),
          ) as String;
          result.coupon = valueDes;
          break;
        case r'couponCode':
          final valueDes = serializers.deserialize(
            value,
            specifiedType: const FullType(int),
          ) as int;
          result.couponCode = valueDes;
          break;
        default:
          unhandled.add(key);
          unhandled.add(value);
          break;
      }
    }
  }

  @override
  BackupOrderPutResponse deserialize(
    Serializers serializers,
    Object serialized, {
    FullType specifiedType = FullType.unspecified,
  }) {
    final result = BackupOrderPutResponseBuilder();
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

